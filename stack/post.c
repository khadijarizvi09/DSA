#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0

struct stack 
{
    char array[STACKSIZE];
    int TOP;
};
struct stack S;
int initialize()
{
    S.TOP=-1;
}
int isempty()
{
    if(S.TOP==-1)
    return TRUE;
    else
    return FALSE;
}
void push(char x)
{
    if(S.TOP==STACKSIZE-1)
    {
        printf("overflow");
        exit(1);
    }
    S.TOP=S.TOP + 1;
    S.array[S.TOP]=x;
}
char pop()
{
    char x;
    if(isempty())
    {
        printf("underflow");
        exit(1);
    }
    x=S.array[S.TOP];
    S.TOP=S.TOP-1;
    return x;
}
char stackTOP()
{
    char x=S.array[S.TOP];
    return x;
}
char prcd(char a,char b)
{
    if (a=='^' || a=='*' || a=='/'||a=='%')
    {
        if(b=='^')
        return FALSE;
        else
        return TRUE;
    }
    else{
        if(a=='+'||a=='-')
        {
            if(b=='+'||b=='-')
            return TRUE;
            else
            return FALSE;
        }
        
    }

}
void infixtopostfix(char infix[])
{
    int i=0,p=0;
    char postfixexp[20];
    char x,symbol;
    initialize();
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        i++;
        if(symbol>='a' && symbol<='z')
        {
            postfixexp[p]=symbol;
            p++;
        }
        else{
            while(!isempty() && prcd(stackTOP(),symbol))
            {
                x=pop();
                postfixexp[p]=x;
                p++;
            }
            push(symbol);
        }
        while(!isempty())
        {
            x=pop();
            postfixexp[p]=x;
            p++;
        }
        postfixexp[p]='\0';
        printf("%s",postfixexp);
    }
}

int main() {
 char infix[20];
 gets(infix);
infixtopostfix(infix);
    return 0;
}