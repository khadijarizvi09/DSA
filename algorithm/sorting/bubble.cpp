#include <iostream>
using namespace std;
int bubble(int arr, int n)
{
    for(int i = 1;i<=n,i++)
    {
        bool swapped = false;
        for(int j =0 ; j<n-i;j++)
        {
            int count = 0;
            if(arr[j]>arr[j+1])
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
            swapped = true;
            if(swapped==false){
                break;
            }
        }

    }
    
}