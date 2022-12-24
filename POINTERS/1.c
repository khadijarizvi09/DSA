#include <stdio.h>
int main()
{
    int A[10] = {2,4,3,6,7,8,9,4,1};
    int *ptr;
    ptr = A;     //&A[0]
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d",A[i]);
    }
     printf("\n");
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d",*(ptr + i));
    }
    printf("\n");
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d",*(A + i));
    }
}