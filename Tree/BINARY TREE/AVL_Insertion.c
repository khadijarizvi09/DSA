#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
    int height;
};
struct node*Makenode(int x)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->right = NULL;
    p->left = NULL;
    p->height = 0;
    return p;
}
int max(int a , int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int Height(struct node*T)
{
    int hL,hR;
    if(T==NULL)
    return 0;
    if(T->left == NULL)
    hL = 0;
    else
    hL = 1+Height(T->left);
    if(T->right == NULL)
    hR = 0;
    else
    hR = 1+Height(T->right);
    return max(hL,hR);
}
int Balance_Factor(struct node*T)
{
    int hL,hR;
    if(T==NULL)
    return 0;
    if(T->left == NULL)
    hL = 0;
    else
    hL = 1+Height(T->left);
    if(T->right == NULL)
    hR = 0;
    else
    hR = 1+Height(T->right);
    return (hL-hR);
}
struct node*Rotate_left(struct node*x)
{
    struct node*y,*z;
    y = x->right;
    z = y->left;
    y->left = x;
    x->right = z;
    return z;
}
struct node* Rotate_right(struct node*x)
{
    struct node*y,*z;
    y = x->left;
    z = y->right;
    y->right = x;
    x->left = z;
    return y;
}
struct node*Left_Left(struct node*x)
{
    struct node *y;
    y = Rotate_right(x);
    return y;
}
struct node*Right_Right(struct node*x)
{
    struct node *y;
    y = Rotate_left(x);
    return y;
}
struct node*AVL_Insert(struct node*T , int x)
{
    if(T==NULL){
    T = MakeNode(x);
    }
    else{
        if(x<T->data){
        T->left = AVL_Insert(T->left , x);
        if(Balance_Factor(T) == 2)
        {
            if(x<T->left->data)
            T = Left_Left(T);
            else
            T = Rotate_left(T);
        }
        }
        else{
            T->right = AVL_Insert(T->right , x);
            if(Balance_Factor(T) == -2)
            {
                if(x>T->right->data)
                T = Right_Right(T);
                else
                T = Rotate_right(T);
            }
        }
    }
    T->height = Height(T);
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
    struct node*root,*q;
    int height;
    root = NULL;
    root = Makenode(100);
    root->left = Makenode(80);
    root->right = Makenode(150);
    root->left->left = Makenode(50);
    root->right->left = Makenode(10);
    height = Height(root);
    printf("%d " ,height);
    printf("\n");
    q = NULL;
    AVL_Insert(q , 100);
    AVL_Insert(q , 50);
    AVL_Insert(q , 70);
    InorderTraversal(q);

    
}