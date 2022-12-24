#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100
#define TRUE 1
#define FALSE 0
struct stack
{
 int items[STACKSIZE];
 int TOP1;
 int TOP2;
};
struct stack S;
void Initialize1()
{
    S.TOP1 = -1;
}
void Initialize2()
{
    S.TOP2 = STACKSIZE;
}
int IsEmpty1() 
{
if (S.TOP1 == -1)
return TRUE;
else
return FALSE;
}
int IsEmpty2() 
{
if (S.TOP2 == 100)
return TRUE;
else
return FALSE;
}

 int PUSH1( int x)
{
    if( S.TOP1 == S.TOP2 - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S.TOP1 = S.TOP1 + 1;
    S.items[S.TOP1]=x;

}
int PUSH2( int x)
{
    if( S.TOP2 == S.TOP1 + 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S.TOP2 = S.TOP2 - 1;
    S.items[S.TOP2]=x;

}
int POP1()
{
    int x;
     if (IsEmpty1())
     {
        printf("underflows");
        exit(1);
     }
     x = S.items[S.TOP1];
     S.TOP1 = S.TOP1 - 1;
     return x;
     

     
}
int POP2()
{
    int x;
     if (IsEmpty2())
     {
        printf("underflows");
        exit(1);
     }
     x = S.items[S.TOP2];
     S.TOP2 = S.TOP2 + 1;
     return x;
     

     
}
int stackTOP1()
{
    int x = S.items[S.TOP1];
    return x;
}
int stackTOP2()
{
    int x = S.items[S.TOP2];
    return x;
}
int main()
{
  PUSH1(100);
  PUSH1(200);
  PUSH1(300);
  PUSH1(400);
  PUSH2(500);
  PUSH2(600);
  PUSH2(700);
  PUSH2(800);
  int x = POP1();
  int y = POP1();
  int z = POP1();
  int i = POP2();
  int j = POP2();
  int k = POP2();
  printf("%d\n",x);
  printf("%d\n",y);
  printf("%d\n",z);
  printf("%d\n",i);
  printf("%d\n",j);
  printf("%d\n",k);
  return 0;

}