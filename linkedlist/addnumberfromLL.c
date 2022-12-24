//Program to find out the addition of two given link list 125+85 =210 1->2->5 8->5
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
void reverse(struct node**START)
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
    printf("\n");
}

void addnumber(struct node*START1,struct node*START2)
{
  reverse(&START1);
  reverse(&START2);
  int total,sum;
  int carry = 0;
  struct node *START3=NULL,*p,*q;
  p = START1;
  q = START2;
  while(p!=NULL && q!=NULL)
  {
  total = p->info + q->info +carry;
  sum = total % 10;
  carry = total/10;
  p=p->NEXT;
  q =q->NEXT;
  insend(&START3,sum);
  }
  while(p!=NULL)
  {
  total = p->info  +carry;
  sum = total % 10;
  carry = total/10;
  p=p->NEXT;
  q =q->NEXT;
  insend(&START3,sum);
  }
 while(p!=NULL)
  {
  total = p->info  +carry;
  sum = total % 10;
  carry = total/10;
  p=p->NEXT;
  insend(&START3,sum);
  }
 while(q!=NULL)
  {
  total = q->info  +carry;
  sum = total % 10;
  carry = total/10;
  q =q->NEXT;
  insend(&START3,sum);
  }
  if(carry>0)
  {
    insend(&START3,carry);
  }
  reverse(&START3);
  traverse(START3);
}

int main()
{
    struct node*START,*START1,*START2;
    START = NULL;
    START1 = NULL;
    START2 = NULL;
    orderedinsertion(&START,7);
    orderedinsertion(&START,2);
    orderedinsertion(&START,1);
    orderedinsertion(&START,4);
    printf("\n");
    orderedinsertion(&START1,7);
    orderedinsertion(&START1,1);
    orderedinsertion(&START1,5);
    orderedinsertion(&START1,8);
    traverse(START1);
    printf("\n");
    orderedinsertion(&START2,7);
    orderedinsertion(&START2,6);
    orderedinsertion(&START2,9);
    orderedinsertion(&START2,1);
    traverse(START2);
    printf("\n");
    addnumber(START1,START2);
}
