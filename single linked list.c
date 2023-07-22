#include<stdio.h>
void main()
{
int m,n;
    printf("enter the no of row :");
    scanf("%d",&n);
    printf("enter the no of column:");
  scanf("%d",&m);
  int a[n][m];
    int i;
    int j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {

        scanf("%d",&a[i][j]);



       }

    }
       for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {

        printf("  %d",a[i][j]);



       }
       printf("\n");

    }



}
