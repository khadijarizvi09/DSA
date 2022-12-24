#include <stdio.h>
#include <stdlib.h>
struct student 
{
    int rollno;
    char name[100];
    double percentage;
};
int main()
{
struct student s[5];
struct student *p ;
int n ;
scanf("%d" , &n);
p = (struct student *)malloc(n*sizeof(struct student));
for(int i = 0 ; i<n ; i++){
scanf("%d  %s %lf " , &(p+i)->rollno , (p+i)->name , &(p+i)->percentage);
printf("%d  %s %lf " , (p+i)->rollno , (p+i)->name , (p+i)->percentage);
}
}
