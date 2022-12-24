//Khadija Rizvi 
//Admission No : 2021B0101155


#include<stdio.h>
int main()
{
    int arr[20] = {0},n=10,pos,x;
    for(int i=0;i<n;i++){
        arr[i] = i+1;
        printf("%d ",arr[i]);
    }
    printf("\n");
   printf("enter a no. to be inserted:");
   scanf("%d" , &x);
   printf("position :");
   scanf("%d",&pos);
   n++;
   for(int i=n-1; i>=pos;i--)
   {
    arr[i]=arr[i-1];
   }
   arr[pos-1] = x;
   for(int i = 0 ;i<n;i++){
    printf("%d ",arr[i]);
   }
return 0;

}