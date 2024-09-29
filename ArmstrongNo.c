#include<stdio.h>
void main()
{
   int n,a,last,sum;
   printf("Enter an Number: ");
   scanf("%d",&n);
   a=n;
   sum=0;
   while(n!=0)
   {
    last=n%10;
    n=n/10;
    sum=sum+(last*last*last);
   }
if(sum==a)
printf(" It is Armstrong No");
else
printf("It is not a Armstrong no");


}