#include<stdio.h>
void main()
{
   int n, count;
   printf("Enter an Number : ");
   scanf("%d",&n);
   count=0;
   if(n==0)
   count=1;
   while(n!=0)
   {
    n=n/10;
    count++;
   }
printf(" No of Digits is %d ",count);

}