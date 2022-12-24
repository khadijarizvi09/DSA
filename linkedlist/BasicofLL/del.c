#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int info;
    struct node*NEXT;
};
struct node*Getnode(struct node **START)
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(struct node **START,int x)
{
    struct node *p ;
    p = Getnode();
    p->info = x;
    p->NEXT = *START;
    *START = p;
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
int delbeg(struct node **START)
{
    int x;
    struct node *p;
    p = *START;
    *START = (*START)->NEXT;
    x = p->info;
    free(p);
    return x;

}
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
int delend(struct node **START , int x)
{
    struct node *p,*q;
    p = *START;
    q = NULL;
    while(p->NEXT!=NULL)
    {
        q=p;
        p=p->NEXT;
    }
    q->next = NULL;
    x  = p->info;
    free(p);
    return x;


}
void traverse ()
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
    START = NULL;
    struct node *q,*k;
    Insbeg(100);
    Insbeg(200);
    Insbeg(300);
    Insbeg(400);
    Insbeg(500);
    Insbeg(600);
    traverse();
    printf("\n");
    q=START;
    while((q->info)!=400&&(q->NEXT)!=NULL){
        q=q->NEXT;
    }
    Insafter(q,700);
    printf(" Insertion of a node after another node:=>");
     traverse();
    printf("\n");
    int y = delbeg();
    printf("deleted info :=> %d\n" , y);
    traverse();
    printf("\n");
    //int s=delafter(k);
    while(k->info!=300 && k->NEXT!=NULL)
    {
        k = k->NEXT;
    }
    int s=delafter(k,00);
    printf("deleted info :=> %d\n" , s);
    printf("\n");
    traverse();
}

