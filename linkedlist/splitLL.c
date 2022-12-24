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
 int length(struct node**START)
{
    struct node *T,*R;
    int c = 0;
    T = START;
    R = START;
    while(R!=NULL && R->NEXT!=NULL)
    {
        T = T->NEXT;
        R = R->NEXT;
        R = R->NEXT;
    
    if(T==R)
    break;

    }
    do
    {
        c++;
        T = T->NEXT;
    }
    while(T!=R);
    return c;
}
int middleelement(struct node**START)
{
 struct node *r,*t;
 r = *START;
 t = *START;
 while(r!=NULL&&r->NEXT!=0)
 {
    t = t->NEXT;
    r = r->NEXT;
    r = r->NEXT;
 }
 return t->info;
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
int splitLL(struct node**START)
{
    struct node *t,*m;
    t = START;
    m = middleelement(&*START);
    m->NEXT = NULL;
    START = m->NEXT;

}
int pairwiseswap(struct node **START)
{
    struct node *p,*q;
    int temp;
    p = START;
    q =START->NEXT;
    while(q!=NULL)
    {
      temp = p->info;
      p->info = q->info;
      q->info = temp;
      p=p->NEXT;
      p=p->NEXT;
      q=q->NEXT;
      if(q!=NULL)
      {
        q=q->NEXT;
      }
    }
    traverse(START);
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
int mergingpoint(struct node**START1,struct node**START2)
{
    struct node *p,*q,*r;
    
    p = START1;
    q = START2;
    int m ,n;
    m = length(&START1);
    n = length(&START2);
   if(m>n)
   {
    for(int i = 0 ; i<m-n ; i++)
    {
        p = p->NEXT;
    }
   }
   else
   {
    for(int i = 0 ; i<n-m ; i++)
    {
        q = q->NEXT;
    }
   }
   while(p!=q)
   {
    p = p->NEXT;
    q = q->NEXT;
   }
   return &p;
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
}