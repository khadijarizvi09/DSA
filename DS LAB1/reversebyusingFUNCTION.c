#include <stdio.h>
void reversearray(int arr[],int s ,int e, int n)
{
    while(s<e)
    {
        int t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;
        s++;
        e--;
    }

}
void printarray(int arr , int n )
{
    for(int i = 0 ; i<n ; i++){
        printf("%d " , arr[i]);
        printf("\n");
    }
}
int main()
{
   
    int arr[10] = {1,3,4,5};
     int n = sizeof(arr) /  sizeof(arr[0]);
   printarray(arr,n);
    reversearray(arr,0,n-1);
    printf("reversed array = ");
    printarray(arr,n);
    

 return 0;

}
