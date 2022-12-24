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
        Insbeg(&*START,x,y);
    }
    else{
    while(q->NEXT!=NULL)
    {
        q=q->NEXT;
    }
        p = Getnode(&*START);
        p->coef = x;
        p->exp  = y;
        p->NEXT = NULL;
        q->NEXT = p;
    
    }
}
void delafter(struct node*p)
{
    int x,y;
    struct node *q,*r;
    q = p->NEXT;
    r = q->NEXT;
    p->NEXT = r; 
    free(q);
}

void traverse (struct node*START)
{
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf(" %dx^%d " , P->coef,P->exp);
        P = P->NEXT;
    }
   
}

void polynomialsum(struct node **START1,struct node **START2)
{
    struct node*p,*q,*START3=NULL,*r,*t;

    p=*START1;
    q=*START2;
    while(p!=NULL && q!=NULL)
    {    
        if(p->exp == q->exp)
        {
            insend(&START3,p->coef + q->coef,p->exp);
            q = q->NEXT;
            p = p->NEXT;
        }
        else
        {
            if(p->exp>q->exp)
            {
                insend(&START3,p->coef, p->exp);
                p=p->NEXT;
            }
            else
            {
                insend(&START3,q->coef, q->exp);
                q=q->NEXT;
            }

        }
        
    }
    while(p!=NULL )
    {
        insend(&START3,p->coef,p->exp);
        p=p->NEXT;
    }
    while(q!=NULL)
    {
        insend(&START3,q->coef,q->exp);
        q=q->NEXT;
    }
    printf("Sum of the expressions:");
    r = START3;
    t = START3->NEXT;
    while(t->NEXT!=NULL)
    {
        if(r->exp == t->exp)
        {
            r->coef = r->coef + t->coef;
            delafter(r);
        }
        else{
            t = t->NEXT;
            r = r->NEXT;
        }
    }

    traverse(START3);
}
int polynomialsub(struct node **START1,struct node **START2)
{
    struct node*p,*q,*START3;
    p = *START1;
    q = *START2;
    while(q!=NULL)
    {
        q->coef = -q->coef;
        q= q->NEXT;
    }
    polynomialsum(&*START1,&*START2);
    traverse(START3) ;

}
int polynomialmul(struct node **START1,struct node **START2)
{
    struct node *p,*q,*START3=NULL;
    q = *START1;
    while(q!=NULL)
    {
        p = *START2;
        while(p!=NULL)
        {
            insend(&START3,(p->coef*q->coef),(p->exp + q->exp));
            p=p->NEXT;
        }
        q=q->NEXT;
    }
    p = START3;
    while(p->NEXT!=NULL)
    {
    if(p->exp == p->NEXT->exp)
    {
        p->exp == p->coef + p->NEXT->coef;
        delafter(p);
    }
    else{
        p=p->NEXT;
    }
    }
    printf("Multiplication of two expressions:");
    traverse(START3);
}

int main()
{
    struct node*START3,*START1,*START2;
    struct node *p,*q;
    START1 = NULL;
    START2 = NULL;
    p = START1;
    q = START2;
    printf("Linked Polynimial 1: ");
    
        insend(&START1,2,3);
        insend(&START1,4,1);
        insend(&START1,3,0);
        traverse(START1);
    printf("\n");
    printf("Linked Polynimial 2: ");
        insend(&START2,9,3);
        insend(&START2,5,6);
        insend(&START2,1,2);
    traverse(START2);
    printf("\n");
    polynomialsum(&START1,&START2);
    printf("\n");
    polynomialsub(&START1,&START2);
    printf("\n");
    polynomialmul(&START1,&START2);

}                                                     
