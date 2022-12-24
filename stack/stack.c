#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
 int items[STACKSIZE];
 int TOP;
};

void Initialize( struct stack *S)
{
    S->TOP = -1;
}
int IsEmpty(struct stack *S) 
{
if (S->TOP == -1)
return TRUE;
else
return FALSE;
}

void PUSH(struct stack *S , int x)
{
    if( S->TOP == STACKSIZE - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S->TOP = S->TOP + 1;
    S->items[S->TOP]=x;

}
int POP(struct stack *S )
{
     if (S->TOP == -1)
     {
        printf("underflows");
        exit(1);
     }
     int x = S->items[S->TOP];
     S->TOP = S->TOP - 1;
     return x;
     

     
}
int stackTOP(struct stack *S)
{
    int x = S->items[S->TOP];
    return x;
}
int main()
{
struct stack S;
Initialize(&S);
  PUSH(&S , 100);
  PUSH(&S , 200);
  PUSH(&S , 300);
  PUSH(&S , 400);
  PUSH(&S , 500);
  int x = POP(&S);
  int y = POP(&S);
  int z = POP(&S);
  int i = POP(&S);
  //int k = POP(&S,500);
  printf("%d\n",x);
  printf("%d\n",y);
  printf("%d\n",z);
  printf("%d\n",i);

  //printf("%d\n",k);
  return 0;
} 
