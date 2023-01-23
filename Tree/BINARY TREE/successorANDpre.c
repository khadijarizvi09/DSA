#include <stdio.h>
#include <stdlib.h>
struct node
{
  char data;
  struct node *right;
  struct node *left;
  struct node*father;

};
struct node*MakeNode(int x)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->right = NULL;
    p->left = NULL;
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
struct node* minimum(struct node *T)
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
struct node*BSTsucc(struct node *p)
{
    struct node *q;
    if(p->right!=NULL)
    q = minimum(p->right);
    else{
        q = p->father;
       while(q!=NULL&&q->right == p)
       {
        p = q;
        q = q->father;
       }
    }
    return q;
}
struct node*BSTpre(struct node *p)
{
    struct node *q;
    if(p->left!=NULL)
    q = maximum(p->left);
    else{
        q = p->father;
       while(q!=NULL&&q->left == p)
       {
        p = q;
        q = q->father;
       }
    }
    return q;
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
    struct node*root,*p,*q;
    root = NULL;
    BSTinsert(&root,10);
    BSTinsert(&root,100);
    BSTinsert(&root,20);
    BSTinsert(&root,120);
    BSTinsert(&root,50);
    InorderTraversal(root);
    printf("\n");
    
    /*p=BSTpre(root);
    printf("%d ",p->data);
    q=BSTsucc(root);
    printf("%d ",q->data);
    */
    
}



