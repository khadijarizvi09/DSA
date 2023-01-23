#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *right;
  struct node *left;

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

void PreorderTraversal(struct node *T)
{
    if(T!=NULL){
    printf("%d ",T->data);
    PreorderTraversal(T->left);
    PreorderTraversal(T->right);
    }
}
void InorderTraversal(struct node *T)
{
    if(T!=NULL){
    InorderTraversal(T->left);
    printf("%d ",T->data);
    InorderTraversal(T->right);
    }
}
void PostorderTraversal(struct node *T)
{
    if(T!=NULL){
    PostorderTraversal(T->left);
    PostorderTraversal(T->right);
    printf("%d ",T->data);
    }
}
struct node* Creatnode(struct node **T)
{
int choice,x;
struct node *p;
printf("whether left of %d exists?(1/0)",(*T)->data);
scanf("%d",&choice);
if(choice == 1)
{
    printf("input left of %d ",(*T)->data);
    scanf("%d", &x);
    p = MakeNode(x);
    (*T)->left = p;
    Creatnode(&p);
}

printf("whether right of %d exists?(1/0)",(*T)->data);
scanf("%d",&choice);
if(choice == 1)
{

    printf("input right of %d",(*T)->data);
    scanf("%d", &x);
    p= MakeNode(x);
    (*T)->right = p;
     Creatnode(&p);
}
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int MAX(int x , int y,int z)
{
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else if(z>x && z>y)
    return z;
}
int heightBT(struct node*T)
{
    if(T==NULL)
    return 0;
    else
    if(T->left == NULL && T->right == NULL)
    return 1;
    else
    return 1 + max(heightBT(T->left),heightBT(T->right));
}
int diameter(struct node*T)
{int d1,d2,d3,m;
    if(T==NULL)
    return 0;
    else
    {
     d1 = heightBT(T->left)+heightBT(T->right) + 1;
     d2 = diameter(T->left);
     d3 = diameter(T->right);
     m = MAX(d1,d2,d3);
     return m;

    }
}
int main()
{
 struct node*root;
 int x;
 root = NULL;
printf("enter the data of the root node");
scanf("%d",&x);
root=MakeNode(x);
Creatnode(&root);
PreorderTraversal(root);
printf("\n");
InorderTraversal(root);
printf("\n");
PostorderTraversal(root);
printf("\n");
int y = heightBT(root);
printf("%d",y);
printf("\n");
int z = diameter(root);
printf("%d",z);
}