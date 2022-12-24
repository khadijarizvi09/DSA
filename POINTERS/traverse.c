#include <stdio.h>
void traverse(int *ptr , int n)
{
    int i ;
    for(int i = 0; i<n ; i++)
    {
        printf("%d" , *(ptr + i));
    }
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8};
traverse(a ,10);
}