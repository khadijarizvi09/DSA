#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int info;
    struct node *right ;
    struct node *left; 
};
struct node*Getnode()
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    return p;
}

void Insbeg(struct node **dSTART,int x)
{
    struct node *p;
    p = Getnode();
    p->info = x;
    p->right = (*dSTART);
    if(dSTART!=NULL){
    (*dSTART)->left = p;
    }
    *dSTART = p;
}
void Insleft(struct node**p,int x)
{
    struct node*q,*r;
    q->info = x;
    r=(*p)->left;
    if(r!=NULL)
    {
    r->right = q;
    }
    q->left = r;
    q->right =*p;
    (*p)->left = q; 
}
void Insend(struct node**dSTART,int x)
{
    struct node *p,*q;
    p = *dSTART;
    q =Getnode();
    while(p->right!=NULL)
    {
        p=p->right;
    }
    p->right = q;
    q->left = p;
    q->right = NULL;

}
void traversal(struct node *dSTART)
{
    struct node *p;
    p = dSTART;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p = p->right;
    }
}
int main()
{
    struct node*dSTART;
    dSTART = NULL;
    Insbeg(&dSTART,1);
    Insbeg(&dSTART,2);
    Insbeg(&dSTART,3);
    traversal(dSTART);
    return 0;
}