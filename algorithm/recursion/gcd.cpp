
#include <iostream>
using namespace std;
int gcd(int a , int b){
    if(a==b){
        return a;
    }
   else 
    if(a>b)
    return gcd(a-b,b);
    else
      return gcd(a);
}
int main()
{
   int a=36 , b=24;
   int s = gcd(a,b);
   cout<<s;
   return 0 ;
}