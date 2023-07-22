#include<stdio.h>
void swap(int *c,int *d)
{
// int a,b;
 *c=*c+ *d;
 *d=*c-*d;
 *c=*c-*d;
 printf("%d %d",*c,*d);

}
void main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    int *p1,*p2;
    p1=&a;
    p2=&b;
    swap(&a,&b);
}

