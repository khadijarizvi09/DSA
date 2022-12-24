#include <stdio.h>
#include <stdlib.h>
struct student 
{
    int rollno;
    char name[100];
    double percentage;
};
void input(struct student *p , int n)
{
for(int i = 0 ; i<n ; i++ )
    {
        scanf("%d%s%lf" , &(p+i)->rollno, (p+i)->name ,&(p+i)->percentage);
    }
}
void output(struct student *p , int n)
{
    for(int i = 0 ; i<10 ; i++)
    {
        printf("%d %s %lf" , (p+i)->rollno, (p+i)->name ,(p+i)->percentage);
    }
}
int main()
{
struct student *p ;
int n ;
scanf("%d" , &n);
p = (struct student *)malloc(n*sizeof(struct student));
input(p,n);
output(p,n);

}
