#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *right;
  struct node *left;
  struct node *father;
};

struct node*MakeNode(int x)
{
    struct node*p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->right = NULL;
    p->left = NULL;
    p->father = NULL;
    return p;

}
void BSTinsert(struct node**T , int x)
{
    struct node*p,*q,*r;
    p = *T;
    q = NULL;
    while(p!=NULL)
    {
        q=p;
        if(x<p->data)
        {
        p = p->left;
        }
        else
        {
        p = p->right;
        }
    }
    r = MakeNode(x);
    if(x<q->data)
    q->left = r;
    else
    q->right = r;

    r->father = q;

}
struct node*BSTsearch(struct node *T,int key)
{
while(T!=NULL){
    if(T->data == key)
    return T;
    else
    {
        if(key<T->data)
        {
         T = T->left;
        }
        else
        {
        T =T ->right;
        }
    }
}
return NULL;
}
struct node*minimum(struct node *T)
{
    while(T->left!=NULL)
    {
        T =T->left;
    }
    return T;
}
struct node*maximum(struct node *T)
{
    while(T->right!=NULL)
    {
        T =T->right;
    }
    return T;
}
void InorderTraversal(struct node *T)
{
    if(T!=NULL){
    InorderTraversal(T->left);
    printf("%d ",T->data);
    InorderTraversal(T->right);
    }
}

int main()
{
    struct node *root,*p,*q,*r;
    root = NULL;
    int a[10] = {400,50,70,120,500,520,590,20,100,10};
    root = MakeNode(a[0]);
    for(int i =1; i<=9 ; i++)
    {
        BSTinsert(&root,a[i]);

    }
    InorderTraversal(root);
    printf("\n");
    p = minimum(root);
    printf("%d ",p->data);
    q = maximum(root);
    printf("%d ",q->data);
    printf("\n");
    r = BSTsearch(root,120);

}