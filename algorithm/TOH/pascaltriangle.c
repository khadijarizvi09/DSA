#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter");
    scanf("%d",&n);
    int a[10][10]={0};
    a[0][1]=1;
    for(i=1;i<n;i++)
    {
        for(j=n;j<=1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((a[i][j])>0)
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}