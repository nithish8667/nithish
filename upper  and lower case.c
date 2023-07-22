#include<stdio.h>
#include<string.h>
void main()
{

    char ch[50];
    printf("enter the char :");
    scanf("%[^\n]s",ch);
   // printf("%s",ch);
 //  printf("%s",strupr(ch));
   //printf("%s",strlwr(ch));
 /*  int a;
   for(int i=0;ch[i]='\0';i++)
   {
       a++;
   }*/
   int i;
   int c;
   while(ch[i]!='\0')
{


   /* c=ch[i]+32;
    printf("%c",c);
    i++;

}*/

if(ch[i]>=97&&ch[i]<=122)
{
     c=ch[i]-32;
    printf("%c",c);
    i++;

}else
{
    printf("%c",ch[i]);
    i++;
}


}
}







