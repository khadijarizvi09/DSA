#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>

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


void PUSH( char x)
{
    if( S.TOP == STACKSIZE - 1)
    {
        printf("stack overflows");
        exit(1);
    }
    S.TOP = S.TOP + 1;
    S.array[S.TOP]=x;

}

char POP()
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
char stackTOP()
{
    char x = S.array[S.TOP];
    return x;
}
int prcd(char a, char b)
{
    if(a=='^' || a=='*' || a=='/' || a=='%')
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
void infixtoprefix(char infix[])
{
    int i=0 , p=0;
    char Prefix[20];
    char x , symbol;
     Initialize();
   /* while(infix[i] != '\0')
    {
        for(int i = 0 ; i < n; i++ )
        {
            for(int j = n-1; j >=0 ;  j--)
            {
                int t = infix[i];
                infix[i] = infix[j];
                infix[j] = t;
            }
        }
        
    }*/
    strrev(infix);
   // cout<<infix;
i=0;
p=0;
    while(infix[i]!='\0')
    {
          symbol = infix[i];
          i++;
          if(symbol>='a' && symbol <='z')
        {
            Prefix[p] = symbol;
            p++;
        }
        else
        {
            while(!IsEmpty() && !prcd(symbol,stackTOP()))
            {
                x = POP();
                Prefix[p] = x;
                p++;

            }
            PUSH(symbol);

        }
    }
        while(!IsEmpty())
         {
            x = POP();
            Prefix[p] = x;
            p++;
         }

    
    /*     while(infix[i] != '\0')
    {
        for(int i = 0 ; i < n; i++ )
        {
            for(int j = n-1; j >=0 ;  j--)
            {
                int t = infix[i];
                infix[i] = infix[j];
                infix[j] = t;
            }
        }
              cout<<Prefix;
    }*/
    Prefix[i]='\0';
    strrev(Prefix);
    cout<<Prefix;
}
int main()
{
  char infix[20];
  cin>>infix;
  infixtoprefix(infix);
  
  
  return 0;
} 