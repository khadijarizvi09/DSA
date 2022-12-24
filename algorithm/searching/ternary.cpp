#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int s = 0 ;
    int r = n - 1;
    int mid1 = s+(r-s)/3;
    int mid2 = r+(r-s)/3;
    int key;
    cin>>key;
    while(s<r)
    {
        if(a[mid1] == key )
        {
            cout<<mid1<<endl;
        }
        else if(a[mid2] == key)
        {
            cout<<mid2<<endl;
        }
        else 
          if(a[mid1]>key)
          {
            r = midl - 1;

          }
          else if(a[mid2]>key)
          {
            
          }
    }
}