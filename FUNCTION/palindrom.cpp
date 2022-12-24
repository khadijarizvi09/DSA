#include <iostream>
using namespace std;
int palindrom(int n)
{
    int lastdigit , reverse =0;
    while(n!=0)
    {
        lastdigit =  n%10;
        reverse = reverse *10 + lastdigit;
        n = n/10;
    }
    if(n==reverse)
    cout<<"palindrom"<<endl;
    else
    cout<<"not a palindrom"<<endl;
}
int main()
{
    int n ;
    cin>>n;
    palindrom(n);
}

