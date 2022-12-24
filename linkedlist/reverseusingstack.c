//Program for Linear Linked List Primitive operations
#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 3
#define TRUE 1
#define FALSE 0
struct node 
{
    int info;
    struct node*NEXT;
};
struct stack
{
 int items[STACKSIZE];
 int TOP;
};
struct node*Getnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node**START,int x)
{
    struct node *p ;
    p = Getnode();
    p->info = x;
    p->NEXT = *START;
    *START = p;
}
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P,*START;
    R = (*Q)->NEXT;
    P =Getnode();
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
void traverse (struct node *START)
{
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
    }
}


struct stack S;
 int Initialize(struct stack *S)
{
    S->TOP = -1;
}
int IsEmpty(struct stack *S) 
{
if (S->TOP == -1)
return TRUE;
else
return FALSE;
}

 int PUSH(struct stack*S,int x)
{
    if( S->TOP == STACKSIZE - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S->TOP = S->TOP + 1;
    S->items[S->TOP]=x;

}
int POP(struct stack *S)
{
    int x;
     if (IsEmpty(S))
     {
        printf("underflows");
        exit(1);
     }
     x = S->items[S->TOP];
     S->TOP = S->TOP - 1;
     return x;
     

     
}
int stackTOP(struct stack *S)
{
    int x = S->items[S->TOP];
    return x;
}
int reverseusingSTACK(struct node**START)
{
    struct node *p;
    int x;
    p = *START;
    struct stack S;
    Initialize(&S);
    while(p!=NULL)
    {
        PUSH(&S,p->info);
        p=p->NEXT;
    }
    p = *START;
    while(!IsEmpty(&S))
    {
     x = POP(&S);
     p->info = x;
     p = p->NEXT;
    }
}
int main()
{
   struct node *p,*START=NULL;
   p = START;
   Insbeg(&p,10);
   Insbeg(&p,20);
   Insbeg(&p,30);
   Insbeg(&p,40);
   traverse(START);

} 

