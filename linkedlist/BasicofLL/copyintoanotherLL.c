//Program for Creation of Copy of the Linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node*NEXT;
};
/**************************************/
struct node*Getnode(struct node**START)
{
    struct node*p;
    p = (struct node*)malloc(sizeof(struct node));
    return p;
}
/***************************************/
int insbeg(struct node **START,int x)
{
    struct node *p;
    p = Getnode(&(*START));
    p->info=x;
    p->NEXT = *START;
    *START = p;
}
/****************************************/
int insafter (struct node **q,int x)
{
    struct node *p,*r,*START;
    r = (*q)->NEXT;
    p = Getnode(&START);
    p->info = x;
    (*q)->NEXT = p->NEXT;
    p->NEXT = *q;
}
/*****************************************/
int insend (struct node **START,int x)
{
     struct node *p,*q;
     q = *START;
     if(q==NULL)
    {
        insbeg(&(*START), x);
    }
     else
    {
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
/*****************************************/
void traverse(struct node *START)
{
    struct node*p;
    p = START;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->NEXT;    
    }
}
/******************************************/
int copyLL(struct node *START)
{
    struct node *q,*p,*START1;
    p=START;
    q = Getnode(&START1);
    while(p->NEXT!=NULL)
    {
        q->info = p->info;
        p=p->NEXT;
        q=q->NEXT;
    }
    traverse(q);
}
/**********************************************/
int main()
{
    struct node *START,*START1,*q,*p;
    START = NULL;
    p = START;
    insbeg(&p,100);
    insbeg(&p,200);
    insbeg(&p,300);
    insbeg(&p,400);
    insbeg(&p,500);
    insbeg(&p,600);
    traverse(p);

    printf("\n");

    copyLL(p);
}