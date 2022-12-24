#include <iostream>
using namespace std;
int insertionsort(int A[] , int n){
    int x;
    for(int i = 0;i<n-1;i++ ){
        x = A[i];
       int j=i-1; 
        while(A[j]>x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=x;

    }
    for(int i = 0 ; i<n ; i++)
    {
        cout<<A[i];
    }

}
int main()
{
    int A[10] = {2,3,4,6,7,8,5,1};
    int n = 8;
    insertionsort(A,n);
    return 0 ;
}