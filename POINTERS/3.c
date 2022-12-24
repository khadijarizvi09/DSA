#include <stdio.h>
void input(int *p ,int n)
{
    for(int i = 0 ; i<n ; i++ )
    {
        scanf("%d" , (p+i));
    }
}
void output(int *p , int n)
{
    for(int i = 0 ; i<n ; i++ )
    {
        printf("%d" , *(p+i));
    }
}

int main()
{
int *p;
int n;
scanf("%d" , &n);
p =(int*) malloc (n * sizeof(int));
input(p , n);
output(p , n);
}