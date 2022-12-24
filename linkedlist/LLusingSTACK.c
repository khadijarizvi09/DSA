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
}int delbeg(struct node **START)
{
    int x;
    struct node *p;
    p = *START;
    *START = (*START)->NEXT;
    x = p->info;
    free(p);
    return x;

}
int push (struct node **TOP,int x)
{
    Insbeg(&(*TOP),x);
}
int pop (struct node **TOP )
{
    int x ;
    x = delbeg(&(*TOP));
    return x;
}
int main()
{
    struct node *TOP;
    TOP = NULL;
    push(&TOP,10);
    push(&TOP,20);
    push(&TOP,30);
    push(&TOP,40);
    int x = pop(&TOP);
    int y = pop(&TOP);
    printf("%d ",x);
    printf("%d ",y);


}
