#include<stdio.h>
int main()
{
    char ch[50];
    char s[50];
    printf("enter the name:");
    scanf("%s",ch);
    printf("enter the name:");
    scanf("%s",s);
    int i=0,j=0;
     while(ch[i]!='\0'||s[i]!='\0')

    {
        if(ch[i]==s[i])
        {

        i++;
        }else if(ch[i]!=s[i])
        {
            j++;
            break;
        }
    }

if(j==0){
    printf("sun");

}else

 {
     printf("go");
 }
    }


    /*if(ch==s)
    {
        printf("good");
    }
    else{

        printf("bad");
    }
return 0;*/

