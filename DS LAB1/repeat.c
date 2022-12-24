//Khadija Rizvi
//Admission No. 2021B0101155
#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
    int i, j;

    printf(" Repeating elements are :");
    for(i = 0; i < size-1; i++)
	{
	   int flag = 0;
	   for(j = i+1; j < size; j++){
	        if(arr[i] == arr[j])
			{
		        arr[j]=0;
				flag = 1;
	        }
		
	    }
		if(flag == 1)
		{
			arr[i]=0;
		}
	}

	
    printf("Non repeating elements :");
    for(i = 0 ; i < size ; i++)
	{
	   
	      if(arr[i] != 0)
		  {
		    printf(" %d ", arr[i]);
	
          }
    }	
}
int main()
{
int arr[] = {4, 2, 4, 5, 4, 2, 3, 1};
int n = 8;
printRepeating(arr, n);
getchar();
return 0;
}
