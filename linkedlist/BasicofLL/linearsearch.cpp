//Program to implement Linear search.
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
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P;
    R = (*Q)->NEXT;
    P =Getnode();
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
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
int ls(struct node *p,int key)
{
    struct node *s;
    s=START;
    while(s!=NULL)
    {
        if(s->info == key)
        {
            return 1 ; 
        }
        s = s->NEXT;
    }
    return -1;
}
int main()
{
    START = NULL;
    struct node *q;
    Insbeg(100);
    //Insafter(q,700);
    Insbeg(200);
    Insbeg(300);
    Insbeg(400);
    //Insafter(q,700);
    traverse();
    int s =  ls(q,200);
    printf("%d" ,s);


}
