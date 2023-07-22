#include<stdio.h>
void main()
{
    int a,r;
    int rem=0,temp;
    scanf("%d",&a);
    temp=a;
        while(a!=0)
        {

             r=a%10;
            rem=rem*10+r;
             a=a/10;
        }
        printf("%d",rem);
}


