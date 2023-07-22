#include<stdio.h>
void main()
{
    char s[50];
    gets(s);
   //puts(s);
   int i=0;
   int a=0;
   int j=0;
   while(s[a]!='\0')
   {
       i++;
       a++;
   }
   //printf(" the sum %d",a);
   for(j=i-1;j>=0;j--)
   {
       printf("%c",s[j]);

   }

}
