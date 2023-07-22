#include<stdio.h>
void main()

{



    int n,m,a=0;
    printf("enter the elements of n:");
    scanf("%d",&n);
    while(n!=0)

   {
       m=n%10;
       if(m==0)
       {

           a++;
       }
       n=n/10;
       }

       if(a!=0)
       {

           printf("duck num");
       }
       else
       {
           printf("not aduck num");
       }

}
