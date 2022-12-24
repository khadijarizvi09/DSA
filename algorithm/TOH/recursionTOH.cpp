#include <iostream>
using namespace std;
int TOH(int n , char s , char m ,char d)
{
    if(n==1)
    {
        cout<<s<<d<<endl;
    }
    else
    {
        TOH(n-1,s,d,m);
        cout<<s<<d<<endl;
        TOH(n-1,m,s,d);
    }
}
int main()
{
  TOH(3,'S','M','D');
  return 0 ;
}