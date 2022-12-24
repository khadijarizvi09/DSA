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
  int x , num ,r;

  char ch[16] = {'0','1' ,'2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
  scanf("%d",&num);
  while(num!=0)
  {
    r = num % 16;
   printf("%d\n",r);
  
    PUSH(r);
    num = num / 16;
    printf("%d\n",num);
  }
  while(!IsEmpty())
  {
    x = POP();
    printf("%c" , ch[x]);
  }
  return 0;
}


