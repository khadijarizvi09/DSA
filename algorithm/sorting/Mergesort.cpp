#include <iostream>
using namespace std;
int merge(int A[],int low,int high,int mid)
{
      int i = low;
      int j = mid+1; 
      int k = low;
      int C[20];
   while(i<=mid && j<=high)
   {
    if(A[i]<A[j])
    {
     C[k] = A[i];
     i++;
     k++;
    }
    else{
        C[k] = A[j];
        j++;
        k++;
    }
   }
    while(i<=mid)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        C[k]  = A[j];
        j++;
        k++;
    }
    for(int k = low ; k<=high ; k++)
    {
        A[k] = C[k];

    }
    
}



void mergeSort(int A[] , int low,int high)
{
    
    int mid;
    if(low<high)
    {
    mid = (low + high)/2;
    mergeSort(A,low,mid);
    mergeSort(A,mid+1,high);
    merge(A,low,high,mid) ;
    }

}
int main(){

    
int A [10] = {2,4,1,3,6,5,7};
    mergeSort(A,0,6);
    for(int i = 0 ; i <=6 ; i++)
    {
        cout<<A[i]<<" ";
    }
   return 0;

}
 