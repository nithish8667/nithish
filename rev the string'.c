#include<stdio.h>
void main()
{

    char ch[50];
    gets(ch);
    char c[50];
   /* strcpy(c,ch);
    //puts(c);
    printf("%s",c);*/
    int i=0,j=0;
    while(ch[i]!='\0')
    {

       c[j]=ch[i];
       i++;
       j++;

    }
    printf("%s",c);

}
