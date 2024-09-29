#include<stdio.h>
void main()
{
   int n ,i,a,count,last,prod,sum,b;
   printf("Enter a Number:  ");
   scanf("%d",&n);
     b=a=n;
    while(n!=0)
   {
        n=n/10 ;
        count++;
   }
    sum=0;
     while(a!=0)
   {
     last=a%10 ;
     a=a/10;
     prod=1;
     for(i=1;i<=count;i++)                     //last digits raised to count
       prod=prod*last;
       sum=sum+prod;
   }   
   if(b==sum)
   printf("%d is Armstrong number",b);
   else
   printf("%d is Not an Armstrong number",b);












}

