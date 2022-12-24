#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *NEXT;
};
int delafter(struct node**p,int x)
{

    struct node *q,*r;
    q = (*p)->NEXT;
    r = q->NEXT;
    (*p)->NEXT = r;
    x=q->info;
    free(q);
    return x;


}
void deleteduplicate(struct node**START)
{
    struct node *p,*q,*r;
    p = START;
    q = START->NEXT;
    while(q!=NULL)
    {
      r = p;
      q=q->NEXT;
      delafter(&r);
      p=p->NEXT;
    }
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
int main()
{

}


