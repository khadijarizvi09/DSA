//Program for Merging two sorted Linked List/unsoted link list
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
/*********************************************/
void Insbeg(struct node**START,int x)
{
    struct node *p ;
    p = Getnode(&(*START));
    p->info = x;
    p->NEXT = *START;
    *START = p;
 
}
/************************************************/
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
/*************************************************/
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
/**********************************************/


void traverse (struct node**START)
{
    struct node *P;
    P = *START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
    }
   
}
/*************************************************/

void orderedinsertion(struct node **START,int x)
{
    struct node*p,*q;
    p = *START;
    q=NULL;
    while(p!=NULL&& x>=p->info)
    {
        q=p;
        p=p->NEXT;
    }
    if(q==NULL)
    {
        Insbeg(&(*START),x);   //call by ref from another function
    }
    else{
        Insafter(&q,x);
    }

}
/***************************************************************/
struct node* SymmetricDiffLinkedlist(struct node *START1,struct node *START2)

{
    struct node *p,*q;
    p = START1;
    q = START2;
    struct node *START3;
    START3 = NULL;
    while(p!=NULL&&q!=NULL)
    {
        if(p->info < q->info)
        {
            insend(&START3,p->info);
            p = p->NEXT;
        }
        else if(p->info == q->info)
        {
            p=p->NEXT;
            q=q->NEXT;
        }
        else 
        {
            insend(&START3,q->info);
            q =q->NEXT;
        }
    }
    while(p!=NULL)
    {
      insend(&START3,p->info);
      p = p ->NEXT;
    }
    while(q!=NULL)
{
    insend(&START3 , q->info);
    q = q->NEXT;
}
traverse(&START3);
}
/*****************************************************/
int main()
{
    struct node*START,*START1,*START2;
    struct node *s;
    START = NULL;
    START1 = NULL;
    START2 = NULL;
    orderedinsertion(&START,7);
    orderedinsertion(&START,20);
    orderedinsertion(&START,100);
    orderedinsertion(&START,14);
    traverse(&START);
    printf("\n");
    orderedinsertion(&START1,7);
    orderedinsertion(&START1,60);
    orderedinsertion(&START1,1);
    orderedinsertion(&START1,18);
    traverse(&START1);
    printf("\n");
    orderedinsertion(&START2,7);
    orderedinsertion(&START2,160);
    orderedinsertion(&START2,91);
    orderedinsertion(&START2,18);
    traverse(&START2);
    printf("\n");
    SymmetricDiffLinkedlist(START1,START2);   //here we will do =>call by value<= as it dosen't commit any change

    
}                                                     
