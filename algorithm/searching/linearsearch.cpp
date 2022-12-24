#include <iostream>
using namespace std;
int linearSearch(int arr[],int n, int key)
{
    for(int i = 0 ;i<n;i++){
        if(arr[i]==key){
        return i;
        }
        
        

    }
    return -1;

}
int main()
{
    int arr[]={2,5,6,7};
    int n = 4;
    int key = 5;
    int find =linearSearch(arr,n,key);
    cout<<find;
    return 0 ;
}