#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
struct node{
    char data;
    struct node *right;
    struct node *left;
    struct node *next;
};
struct node*MakeNode(char x)
{
    struct node*p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->right = NULL;
    p->left = NULL;
    p->next= NULL;
    return p;

}

int prcd(char a, char b)
{
    if(a=='(' || b == '(')
    {
        return FALSE;
    }
    else if(b==')')
     {
        return TRUE;
     }
    
   else if(a=='^' || a=='*' || a=='/' || a=='%')
    {
        if(b == '^')
        return FALSE;
        else
        return TRUE;
    }
    else{
        if(a=='+'){
        if(b=='+' || b == '-')
        return TRUE;
        else 
        return FALSE;
        }
    }
}
struct node*BuildExpressionTREE(char*exp)
{
    struct node*x,*START,*T,*a,*b;
    START = NULL;
    char operator[20];
    int top = -1;
    int i = 0;
    char symbol,op;
    while(exp[i]!='\0')
    {
        symbol = exp[i];
        i++;
        if(symbol >='a'&& symbol<='z' || symbol>= 'A' && symbol <= 'Z' || symbol >= '0'&& symbol<='9')
        {
            x = MakeNode(symbol);
            x->next = START;
            START = x;
        }
        else{
           // operator[top] = exp[i];
            while(top!=-1 && prcd(operator[top],symbol))
            {
                op = operator[top--];
                T = MakeNode(op);
                //b = pop(operandstack);
                a = START;
                START =START->next;
                //a = pop(operandstack);
                b= START;
                START =START->next;
                T->left = b;
                T->right = a;
                T->next = START;
                START = T;
                //push(&operandstack,T);
            }
           operator[++top] = symbol;
        
        }
    }
           while(top!=-1)
            {
                op = operator[top--];
                T = MakeNode(op);
                //b = pop(&operandstack);
                a = START;
                START =START->next;
                //a = pop(&operandstack);
                b= START;
                START =START->next;
                T->left = a;
                T->right = b;
                T->next = START;
                START = T;
                //push(&operandstack,T);
            }
           //operator[++top] = symbol;
    
      
    return START;
}

void PreorderTraversal(struct node *T)
{
    if(T!=NULL){
    printf("%c ",T->data);
    PreorderTraversal(T->left);
    PreorderTraversal(T->right);
    }
}
void InorderTraversal(struct node *T)
{
    if(T!=NULL){
    InorderTraversal(T->left);
    printf("%c ",T->data);
    InorderTraversal(T->right);
    }
}
void PostorderTraversal(struct node *T)
{
    if(T!=NULL){
    PostorderTraversal(T->left);
    PostorderTraversal(T->right);
    printf("%c ",T->data);
    }
}
int main()
{
    struct node*root;
    root =NULL;
    char exp[10];
    scanf("%s",exp);
    root = BuildExpressionTREE(exp);
    PreorderTraversal(root);
    printf("\n");
    InorderTraversal(root);
    printf("\n");
    PostorderTraversal(root);
}