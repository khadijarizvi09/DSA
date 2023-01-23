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
int countLEAFnodes(struct node *T)
{
    if(T==NULL)
    return 0;
    else
    if(T->left == NULL && T->right == NULL)
    return 1;
    else
    return  countLEAFnodes(T->left)+countLEAFnodes(T->right);
}
int countN1node(struct node *T)
{
    if( T=NULL)
    return 0 ;
    else
    if(T->left == NULL && T->right==NULL)
    return 0;
    else
     if(T->left!=NULL&&T->right!=NULL)
     return countN1node(T->left) + countN1node(T->right);
     else
     return 1+countN1node(T->left) + countN1node(T->right);
}
int countN2nodes(struct node **T)
{
    if( T=NULL)
    return 0 ;
    else
    if(T->left == NULL && T->right==NULL)
    return 0;
    else
     if(T->left!=NULL&&T->right!=NULL)
     return 1+countN1node(T->left) + countN1node(T->right);
     else
     return countN1node(T->left) + countN1node(T->right);  
}
void strictly(struct node*root)
{
    if (count_N1_Nodes(root) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
 struct node*root;
 int x,y,z;
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
y = countLEAFnodes(root);
printf("%d",y);
z = countN1node(root);
printf("%d",z);
strictly(root);
}