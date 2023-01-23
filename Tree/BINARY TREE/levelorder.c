#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
struct node
{
  int data;
  struct node *right;
  struct node *left;
  struct node *next;

};
struct node *rear,*front;
void Initialize()
{
    rear = NULL;
    front = NULL;
}
int IsEmpty()
{
    if (front == NULL)
    return TRUE;
    else
    return FALSE;
      
}
struct node*MakeNode(int x)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->right = NULL;
    p->left = NULL;
    p->next = NULL;
    return p;
}
void EnQUEUE(struct node*p)
{
    if(rear != NULL)
    rear->next = p;
    else
    front = p;
    rear = p;
}
struct node*DeQUEUE()
{
    struct node *p;
    p = front;
    front = front->next;
    if(front == NULL)
    rear = NULL;
    return p;
}
void levelorderTraversal(struct node*T)
{
    struct node*p;
    Initialize();
    EnQUEUE(T);
    while(!IsEmpty())
    {
        p = DeQUEUE();
        printf("%d ",p->data);
        if(p->left != NULL)
        EnQUEUE(p->left);
        if(p->right !=NULL)
        EnQUEUE(p->right);
    }
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
    if(T!=NULL)
    {
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
levelorderTraversal(root);
}