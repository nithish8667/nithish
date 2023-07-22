#include<stdio.h>
void main()
{

    int a=10;
    void *p; int **p1;
    p=&a;
    p1=&p;
    printf("%d\n",a);
    printf("%p\n",p);
     printf("%d\n",*p);
      printf("%d\n",*p1);
       printf("%p\n",p1);



}
