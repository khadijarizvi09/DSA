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
int SUM (struct node *T,int sum)
{
 int x,y;
 if (T->left!=NULL&&T->right!=NULL)
 {
  sum = sum + T->data;
  return SUM(T->left,sum) +SUM (T->right,sum);
 }
 else
 {
   sum = sum + T->data;
  return SUM(T->left,sum) +SUM (T->right,sum);
 }

 return sum;


}
int main()
{
 struct node*root;
 root = NULL;
 root = MakeNode(1);
 root->left = MakeNode(2);
 root->right = MakeNode(2);
root->left->left  = MakeNode(3);
root->left->right = MakeNode(4);
PreorderTraversal(root);
printf("\n");
InorderTraversal(root);
printf("\n");
PostorderTraversal(root);
printf("\n");
int y = SUM(root,0);
printf("%d\n",y);
}