#include <stdio.h>
#include <stdlib.h>
struct node
{
  char data;
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
    printf("%c ",T->data);
    PreorderTraversal(T->left);
    PreorderTraversal(T->right);
    }
}
void InorderTraversal(struct node *T)
{
    if(T!=NULL){
    InorderTraversal(T->left);
    printf("%c ",T->data);
    InorderTraversal(T->right);
    }
}
void PostorderTraversal(struct node *T)
{
    if(T!=NULL){
    PostorderTraversal(T->left);
    PostorderTraversal(T->right);
    printf("%c ",T->data);
    }
}
int main()
{
 struct node*root;
 root = NULL;
 root = MakeNode('a');
 root->left = MakeNode('b');
 root->right = MakeNode('c');
root->left->left  = MakeNode('d');
root->left->right = MakeNode('e');
PreorderTraversal(root);
printf("\n");
InorderTraversal(root);
printf("\n");
PostorderTraversal(root);
}