#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1)
    return 0 ;
    else
     if (n==2)
     return 1;
     else 
     return fibo(n-1) + fibo(n-2);
}
int main()
{
    for(int i =  1 ; i<=100 ; i++)
    {
        int s = fibo(i);
        cout<<s<<" ";
    }
    return 0 ;
}