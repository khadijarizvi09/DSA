//Khadija Rizvi
//Admission No. 2021B0101155

#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int n = 10;
    int s=0;
    int e = n-1; //
    printf("original array : ");
    for(int i =0;i<n;i++) //
    {    
printf("%d ",arr[i]);
    }
    printf("\n");

      while(s<e)
    {
        int t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;
        s++;
        e--;
    }
printf("reversed array : ");
for(int i =0;i<n;i++)
    {    
printf("%d ",arr[i]);
    }
}