#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int info;
    struct node*NEXT;
};
struct node *Getnode(struct node **START )
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node**START,int x)
{
    struct node *p ;
    p = Getnode(&(*START));
    p->info = x;
    p->NEXT = *START;
    *START = p;
 
}
void Insafter(struct node **Q ,int x)
{
    struct node *START;
    struct node *R,*P;     
    R = (*Q)->NEXT;
    P =Getnode(&START);
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
int insend(struct node **START, int x)
{

    struct node *q,*p;
    q=*START;
    if(*START == NULL)
    {
        Insbeg(&(*START),x);
    }
    else{
    while(q->NEXT!=NULL)
    {
        q=q->NEXT;
    }
        p = Getnode(&(*START));
        p->info = x;
        p->NEXT = NULL;
        q->NEXT = p;
    
    }
}
void traverse (struct node*START)
{
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
    }
   
}
void reverse(struct node **START)
{
    struct node *c,*p,*n;
    c = *START;
    p = NULL;
    n = c->NEXT;
    while(c!=NULL)
    {
        c->NEXT = p;
        p = c ;
        c = n;
        if(n!=NULL) 
        {
            n = n->NEXT;
        }
    }
    *START = p;
    traverse(*START);
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






