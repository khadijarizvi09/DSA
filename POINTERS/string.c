#include <stdio.h>
int main()
{
    char s[10] = {'a','b' ,};
    char *ptr;
    ptr = &s;
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%c",s[i]);
    }
     printf("\n");
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%c",*(ptr + i));
    }
    printf("\n");
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%c",*(s + i));
    }
}
