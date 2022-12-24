
//Khadija Rizvi
//Admission no. 2021b0101155
#include <stdio.h>
void traversarray(int* arr ,int n){
printf("Array: ");
for(int i=0; i<n ;i++)
{
    printf("%d " , arr[i]);
}
printf("\n");
}
int main()
{
    int n;
    int arr[] = {1,2,3,4,5,0,-5,-4,-3,-2,-1};
     n = sizeof(arr)/ sizeof(arr[0]);
traversarray(arr,n);
return 0;
}