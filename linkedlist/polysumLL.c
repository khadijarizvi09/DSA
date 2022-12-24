#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int coef;
    int exp;
    struct node*NEXT;
};
struct node *Getnode(struct node **START )
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node**START,int x,int y)
{
    struct node *p;
    p = Getnode(&(*START));
    p->coef = x;
    p->exp = y;
    p->NEXT = *START;
    *START = p;
 
}

int insend(struct node **START, int x ,int y)
{

    struct node *q,*p;
    q=*START;
    if(*START == NULL)
    {
        Insbeg(&(*START),x,y);
    }
    else{
    while(q->NEXT!=NULL)
    {
        q=q->NEXT;
    }
        p = Getnode(&(*START));
        p->coef = x;
        p->exp  = y;
        p->NEXT = NULL;
        q->NEXT = p;
    
    }
}
void traverse (struct node**START)
{
    struct node *P;
    P = *START;
    while(P!=NULL)
    {
        printf("%d %d" , P->coef,P->exp);
        P = P->NEXT;
    }
   
}

void polynomialsum(struct node **START1 , struct node **START2)
{
    struct node *p ,*q,*START3;
    p=*START1;
    q=*START2;
    while(p!=NULL && q!=NULL)
    {
        if(p->exp == q->exp){
            insend(&*START3,(p->coef + q->coef),p->exp);
        q = q->NEXT;
        p = p->NEXT;
        }
        else
        {
            if(p->exp>q->exp)
            {
                insend(&*START3,p->coef, p->exp);
                p=p->NEXT;
            }
            else
            {
                insend(&*START3,p->coef, p->exp);
                q=q->NEXT;
            }

        }
        
    }
    while(p!=NULL )
    {
        insend(&*START3,p->coef,p->exp);
        p=p->NEXT;
    }
    while(q!=NULL)
    {
        insend(&*START3,q->coef,q->exp);
        q=q->NEXT;
    }
}

int main()
{
    struct node*START3,*START1,*START2;
    struct node *p,*q;
    int n;
    scanf("%d",&n);
    START3 = NULL;
    START1 = NULL;
    START2 = NULL;
    for(int i = 0; i<n ; i++)
    {
        scanf("%d %d",&(p->coef),&(p->exp));
    }
    for(int i = 0; i<n ; i++)
    {
        scanf("%d %d",&(q->coef),&(q->exp));
    }
    polynomialsum(&START1,&START2);
    traverse(&START3);
    
}                                                     
