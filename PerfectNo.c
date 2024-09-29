#include<stdio.h>
void main()
{
  int n,i,sum;
  printf("Enter a Number : ");
  scanf("%d",&n);
  sum=0;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
        // i is factor of n 
        sum=sum+i;
    }
  }
if(sum==n)
printf("Its a Perfect Number");
else
printf("Its not a Perfect Number");



}