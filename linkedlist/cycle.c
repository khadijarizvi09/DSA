#include <stdio.h>
#include <stdlib.h>
struct node*START;
struct node 
{
    int info;
    struct node*NEXT;
};
struct node*Getnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(int x)
{
    struct node *p ;
    p = Getnode();
    p->info = x;
    p->NEXT = START;
    START = p;
}
void Insafter(struct node *Q ,int x)
{
    struct node *R,*P;
    R = Q->NEXT;
    P =Getnode();
    P->info = x;
    P->NEXT = R;
    Q->NEXT = P;
}
void traverse ()
{
    //int count = 0;
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
        //count++;
    }
}
int cycledetection()               
{
    struct node *T,*R;
    T = START;
    R = START;
    while(R!=NULL && R->NEXT!=NULL)
    {
        T = T->NEXT;
        R = R->NEXT;
        R = R->NEXT;
    
    if(T==R)
    return 1;
    }
    return 0;
}
 int cyclelength()
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
int cyclestartpoint()
{
    struct node *p ,*t ,*r;
    t = START;
    r= START;
    while(r!=NULL && r->NEXT!=0)
    {
        t = t->NEXT;
        r = r->NEXT;
        r = r->NEXT;
         if(t==r)
         break;
    }
    
    t = START;
    while(t!=r)
    {
        t= t->NEXT;
        r = r->NEXT;
    }
    return t->info;
    
}
int middleelement()
{
 struct node *r,*t;
 r = START;
 t = START;
 while(r!=NULL&&r->NEXT!=0)
 {
    t = t->NEXT;
    r = r->NEXT;
    r = r->NEXT;
 }
 return t->info;
}

int main()
{
    START = NULL;
    Insbeg(100);
    Insbeg(200);
    Insbeg(300);
    Insbeg(400);
    Insbeg(500);
    Insbeg(600);
  

    struct node *p;
    struct node *q;
    p = START;
    while(p->NEXT!=NULL)
    {
        p=p->NEXT;
    }
    q = START;
    while(q->info!=400)
    {
        q=q->NEXT;
    }
    p->NEXT = q;
    
    int detect  = cycledetection();
    printf("%d\n" , detect);
    int length = cyclelength();
    printf("%d\n" , length);
    int point = cyclestartpoint();
     printf("%d" , point);
     int middlelement = middleelement();
     printf("%d" , middlelement);
}
