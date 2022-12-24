#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 3
#define TRUE 1
#define FALSE 0
struct stack
{
 int items[STACKSIZE];
 int TOP;
};
struct stack S;
 int Initialize()
{
    S.TOP = -1;
}
int IsEmpty() 
{
if (S.TOP == -1)
return TRUE;
else
return FALSE;
}

 int PUSH( int x)
{
    if( S.TOP == STACKSIZE - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S.TOP = S.TOP + 1;
    S.items[S.TOP]=x;

}
int POP()
{
    int x;
     if (IsEmpty(S))
     {
        printf("underflows");
        exit(1);
     }
     x = S.items[S.TOP];
     S.TOP = S.TOP - 1;
     return x;
     

     
}
int stackTOP()
{
    int x = S.items[S.TOP];
    return x;
}
int main()
{
  PUSH(100);
  PUSH(200);
  PUSH(300);
  PUSH(400);
  int x = POP();
  int y = POP();
  int z = POP();
  int i = POP();
  int j = POP();
  int k = POP();
  printf("%d\n",x);
  printf("%d\n",y);
  printf("%d\n",z);
  printf("%d\n",i);
  printf("%d\n",j);
  printf("%d\n",k);
  return 0;
} 
