#include <stdio.h>
int main()
{
    printf("%d",sizeof(long long));
    int n ;
    scanf("%d" ,&n);
    int *p;
    
    p =(int*) malloc (n * sizeof(int));
    for(int i = 0 ; i<10 ; i++ )
    {
        scanf("%d" , (p+i));
    }
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d " , *(p+i));
    }
}