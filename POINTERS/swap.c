#include <stdio.h>
#include <stdlib.h>
swap(int *a , int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x = 10, y = 20;
    swap(&x,&y);
    printf("%d %d",x,y);
}