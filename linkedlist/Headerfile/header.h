//Program for creation of Linked List header file and test of basic functions through that
struct node*START;
struct node 
{
    int info;
    struct node*NEXT;
};
struct node*Getnode()
{
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}
void Insbeg(int x)
{
    struct node *p ;
    p = Getnode();
    p->info = x;
    p->NEXT = START;
    START = p;
 
}
void Insafter(struct node **Q ,int x)
{
    struct node *R,*P;
    R = (*Q)->NEXT;
    P =Getnode();
    P->info = x;
    P->NEXT = R;
    (*Q)->NEXT = P;
}
void traverse ()
{
    struct node *P;
    P = START;
    while(P!=NULL)
    {
        printf("%d " , P->info);
        P = P->NEXT;
    }
}