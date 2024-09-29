#include<stdio.h>
void main()
{
    int n,i,sum;
    printf("Enter an Number: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
      {
        sum=sum+i;
      }
printf("The sum is %d",sum);
}