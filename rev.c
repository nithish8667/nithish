#include <stdio.h>
void main()
{
    int n,rem,res=0;
    printf("ENTER THE N VALUE:");
    scanf("%d",&n);
    int c=n;
    while(n!=0)
    {
        rem=n%10;
        res=res*10+rem;
      //  res=res+rem*rem*rem;
        n/=10;
        printf("%d",res);

    }

//printf("%d",res);
}


