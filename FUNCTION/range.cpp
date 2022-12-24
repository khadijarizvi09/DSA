#include <iostream>
#include <math.h>
using namespace std;
void prime (int A[],int n)
{
   bool flag = true;
   int x =sqrt(n);
   int A[];
   int k;

   for(int i = 2 ; i<x ;i++)
   for(int j = 0 ; j<k ; j++){
     if(n%i==0)
     {
        cout<<n*i<<endl;
        flag = false;
        break;
     }
   }
     if(flag==true)
     {
        cout<<<<endl;
     }
     


}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}