#include <bits/stdc++.h>
using namespace std;
struct node{
    struct node *right;
    struct node *left;
    int level ;
    int data;
};
struct node*MakeNode(int x)
{
    struct node*p;
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
cout<<"whether left of "<<(*T)->data<< "exists?(1/0)",(*T)->data;
cin>>choice;
if(choice == 1)
{
    cout<<"input left of "<<(*T)->data;
    cin>>x;
    p = MakeNode(x);
    (*T)->left = p;
    Creatnode(&p);
}

cout<<"whether right of "<<(*T)->data<< "exists?(1/0)",(*T)->data;
cin>>choice;
if(choice == 1)
{

    cout<<"input right of "<<(*T)->data;
    scanf("%d", &x);
    p= MakeNode(x);
    (*T)->right = p;
     Creatnode(&p);
}
}
int MAX(int x , int y)
{
    if(x>y)
    return x;
    else
    return y;
}

int height (struct node *T)
{
    if(T == NULL)
    return 0;
    else 
    {if(T->left == NULL && T->right == NULL)
    return 1 ;
    else
    return 1 + MAX(height(T->left) , height(T->right)); 
    }  
}
void left_right_view(struct node *T)
{
    queue<struct node *> q;
    int h = height(T);
    q.push(T);
    T->level = 0;
    vector<int>HT[h+1];
    HT[T->level].push_back(T->data);
    while(q.size()!=0){
    struct node*x;
    x = q.front();
    q.pop();
    if(x->left != NULL)
    {   
        x->left->level = x->level +1;
        q.push(x->left);
        HT[x->left->level].push_back(x->left->data);
    }
    if(x->right != NULL)
    {   
        x->right->level = x->level +1;
        q.push(x->right);
        HT[x->right->level].push_back(x->right->data);
    }
    cout<<endl<<"Left view of the tree is: ";
    for(int i = 0 ; i<=h ; i++)
    {
        cout<<HT[i][0]<<" ";
    }
    cout<<endl<<"Right view of the tree is: ";
    for(int i = 0 ; i<=h ; i++)
    {
        int x = HT[i].size();
        cout<<HT[i][x-1]<<" ";
    }
}
}
int main()
{
struct node*root;
int x;
root = NULL;
cout<<"enter the data of the root node";
cin>>x;
root=MakeNode(x);
Creatnode(&root);
PreorderTraversal(root);
cout<<endl;
InorderTraversal(root);
cout<<endl;
PostorderTraversal(root);
cout<<endl;
left_right_view(root);
}