#include <stdio.h>
#include <stdlib.h>
struct node*START;
struct node 
{
    int info;
    struct node*NEXT;
}; 
/*****************************************/
struct node*Getnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
/****************************************/
void Insbeg(int x)
{
    struct node *p ;
    p = Getnode();
    p->info = x;
    p->NEXT = START;
    START = p;
 
}
/*****************************************/
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P;
    R = (*Q)->NEXT;
    P =Getnode();
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
/*****************************************/
void traverse ()
{
    int count = 0;
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
        count++;
    }
    printf("\n");
    printf("%d\n",count);

}
/*************************************/
int counteo(struct node *p)
{
    struct node *s;
    s=START;
    int c = 0,k=0;
    while(s!=NULL)
    {
        if((s->info)%2 == 0)
        {
        c++;
        }
        else
        {
        k++;
        }
    }
    printf("%d\n",c);
    printf("%d",k);
}
/************************************/
int main()
{
    START = NULL;
    struct node *q;
    Insbeg(100);
    Insbeg(200);
    Insbeg(300);
    Insbeg(400);
    Insbeg(125);
    traverse();
    counteo(q);
}
