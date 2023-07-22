#include<stdio.h>
#include<string.h>
void main()

{
   char ch[50];
   printf( "enter the string:");
   scanf("%s",ch);
  // printf("the lenth is%d:",strlen(ch));
   int a=0;

 int i=0;

   while(ch[i]!=0)

   {

       a++;
       i++;
   }

   for(int i=0;ch[i]!='\0';i++)
{

    a++;

   //printf("%d",a);

   printf("%d",a);
}
