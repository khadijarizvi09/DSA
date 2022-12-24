//Khadija rizvi
//2021b0101155
#include <stdio.h>
int bs(int arr[] ,int n ,int key)
{
    int s =0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;

        }
        else if(arr[mid] > key){
            e = mid - 1;

        }
        else{
            mid + 1;
        }
        return -1;
    }

}
int main()
{
    int arr[5] = {2,3,4,5,6};
    int n = 5;
   
    int key = 4;
   
   int  find = bs(arr,n,key);
    printf("\n");
    printf("Find the index of the key element:");
    printf("%d" , find);



    
    return 0;
}