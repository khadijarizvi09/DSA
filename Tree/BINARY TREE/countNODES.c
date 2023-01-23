#include <stdio.h>
#include <stdlib.h>
int count = 0;
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
    count++;
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
printf("Number of nodes => %d" , count);

}