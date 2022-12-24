#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int*) malloc(40); //compiler dependent
    for(int i = 0 ; i<10 ; i++ )
    {
        scanf("%d" , (p+i));
    }
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d " , *(p+i));
    }

  
}


