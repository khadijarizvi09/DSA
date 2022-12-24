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
void Insbeg(struct node**START,int x)
{
    struct node *p ;
    p = Getnode(&*START);
    p->info = x;
    p->NEXT = *START;
    *START = p;
}
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P,*START;
    R = (*Q)->NEXT;
    P =Getnode(&START);
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
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
int enqueue (struct node **front ,struct node **rear , int x )
{
    if(*rear==NULL)
    {
        Insbeg(&(*rear),x);
        *front = *rear;
    }
    else{
    Insafter(&(*rear),x);
    *rear = (*rear)->NEXT;
    }
}
int dequeue(struct node **front,struct node **rear)
{
    if(*front==NULL)
    {
        printf("deletion not possible");
    }
    else 
    {
        int x ;
        x = delbeg(&(*front));
        return x;
    }
}
int main()
{
    struct node *front ,*rear;
    front = NULL;
    rear = NULL;
    enqueue(&front ,&rear,10);
    enqueue(&front ,&rear,20);
    enqueue(&front ,&rear,30);
    
    int x = dequeue(&front,&rear);
    int y = dequeue(&front,&rear);
    printf("%d " , x);
    printf("%d " , y);



}