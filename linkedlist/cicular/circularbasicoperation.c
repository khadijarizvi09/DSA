#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
   struct node *NEXT;
};
struct node *Getnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node **cSTART,int x)
{
    struct node *p;
    p = Getnode();
    p->info = x;
    if(*cSTART!=NULL)
    {
        p->NEXT = (*cSTART)->NEXT;
        (*cSTART)->NEXT = p;
    }
    else
    {
        *cSTART = p;
        (*cSTART)->NEXT = *cSTART;
    }
}
void insend(struct node **cSTART ,int x)
{
    struct node *p;
    p = Getnode();
    p->info = x;
    if(*cSTART!=NULL)
    {
        p->NEXT = (*cSTART)->NEXT;
        (*cSTART)->NEXT = p;
        *cSTART =p ;
    }
    else
    {
        *cSTART = p;
        (*cSTART)->NEXT = p;
    }
}
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P,*cSTART;
    R = (*Q)->NEXT;
    P =Getnode(&cSTART);
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
int delbeg(struct node **cSTART)
{
    int x;
    struct node *p;
    (*cSTART)->NEXT = p->NEXT;
    x =p->info;
    if((*cSTART)->NEXT == *cSTART)
    {
        *cSTART = NULL;
    }
    x = p->info;
    free(p);
    return x;
}
int delafter(struct node **q)
{
    struct node*p;
    int x;
    p=(*q)->NEXT;
    (*q)->NEXT = p->NEXT;
    if(q == NULL)
    {
        printf("deletion not possible");
    }
    x = p->info;
    free(p);
    return x;
}
int delend(struct node **cSTART)
{
    struct node *p,*q;
    int x;
    q = *cSTART;
    p = (*cSTART)->NEXT;
    while(p->NEXT!=*cSTART)
    {
        p = p->NEXT;

    }
    p->NEXT = (*cSTART)->NEXT;
    *cSTART = p;
    x =p->info;
    free(p);
    return x;
}
void traverse(struct node *cSTART)
{
    struct node *p,*q;
    p = cSTART;
    q = cSTART->NEXT;
    while(q!=p)
    {
        printf("%d ",q->info);
        q=q->NEXT;
    }
    printf("%d ",q->info);
    
}
int main()
{
    struct node *cSTART;
    cSTART = NULL;
    Insbeg(&cSTART,10);
    Insbeg(&cSTART,20);
    Insbeg(&cSTART,30);
    Insbeg(&cSTART,40);
    traverse(cSTART);
}