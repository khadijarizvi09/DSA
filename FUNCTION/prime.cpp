#include <iostream>
using namespace std;
void prime (int n)
{
   bool flag = true;
   for(int i = 2 ; i<n ;i++){
     if(n%i==0)
     {
        cout<<"not a prime"<<endl;
        flag = false;
        break;
     }
   }
     if(flag)
     {
        cout<<"a prime"<<endl;
     }
     else{
      cout<<"not prime"<<endl;
     }


}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}