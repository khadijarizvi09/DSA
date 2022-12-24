//Program for Linear Linked List Primitive operations
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int info;
    struct node*NEXT;
};
struct node*Getnode(struct node **START)
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node**START,int x)
{
    struct node *p ;
    p = Getnode(&*START);
    p->info = x;
    p->NEXT = *START;
    *START = p;
}
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P,*START;
    R = (*Q)->NEXT;
    P =Getnode(&START);
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
void reverseOUTPLACE(struct node **START1)
{
struct node *START2,*p;
p = *START1;
START2 = NULL;
while(p!=NULL)
{
    Insbeg(&START2,p->info);
    p=p->NEXT;
}
traverse(START2);

}
int main()
{
    struct node *START;
    START = NULL;
    struct node *q;
    Insbeg(&START,100);
    Insbeg(&START,200);
    Insbeg(&START,300);
    Insbeg(&START,400);
    Insbeg(&START,500);
    Insbeg(&START,600);
    q=START;
    while((q->info)!=400&&(q->NEXT)!=NULL){
        q=q->NEXT;
    }
    Insafter(&q,700);
    traverse(START);
    printf("\n");
    reverseOUTPLACE(&START);
}
