#include<stdio.h>
#include<string.h>
void main()
{
    char ch[50];
    char s[50];
 //   char a[50];
    gets(ch);
    gets(s);
   // printf("the concated string is     %s",strcat(ch,s));
   int i=0;
   int j=0;
   int a=0;
   while(ch[a]!=0)
   {
       i++;
       a++;
   }

   while(s[j]!=0)
   {
       ch[i]=s[j];

       j++;
       i++;
   }
  // ch[i]!='0';
      printf("%s",ch);
   }




