#include <iostream>
using namespace std;
#include <stdlib.h>
#define STACKSIZE 3
#define TRUE 1
#define FALSE 0
struct stack
{
 char array[STACKSIZE];
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


 int PUSH( char x)
{
    if( S.TOP == STACKSIZE - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S.TOP = S.TOP + 1;
    S.array[S.TOP]=x;

}

int POP()
{
    char x;
     if (IsEmpty())
     {
        printf("underflows");
        exit(1);
     }
     x = S.array[S.TOP];
     S.TOP = S.TOP - 1;
     return x;
     

     
}
int stackTOP()
{
    char x = S.array[S.TOP];
    return x;
}
int prcd(char a, char b)
{
    if(a=='(' || b == '(')
    {
        return FALSE;
    }
    else if(b==')')
     {
        return TRUE;
     }
    
   else if(a=='^' || a=='*' || a=='/' || a=='%')
    {
        if(b == '^')
        return FALSE;
        else
        return TRUE;
    }
    else{
        if(b=='+' || b == '-')
        return TRUE;
        else 
        return FALSE;
    }
}
void infixtopostfix(char infix[])
{
    int i=0 , p=0;
    char Postfix[20];
    char x , symbol;
    Initialize();
    while(infix[i]!='\0')
    {
        symbol = infix[i];
        i++;
        if(symbol>='a' && symbol <='z')
        {
            Postfix[p] = symbol;
            p++;
        }
        else
        {
            while(!IsEmpty() && prcd(stackTOP(),symbol))
            {
                x = POP();
                Postfix[p] = x;
                p++;
            }
            PUSH(symbol);
        }
        }
        while(!IsEmpty())
         {
            x = POP();
            Postfix[p] = x;
            p++;
         }
         Postfix[i] ='\0';
         cout<<Postfix;
    
}
int main()
{
  char infix[20];
  cin>>infix;
  infixtopostfix(infix);
  
  return 0;
} 
