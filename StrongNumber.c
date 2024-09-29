#include<stdio.h>
void main()
{

   int n,i,last,prod,sum,a;
   printf("Enter a Number : ");
   scanf("%d",&n);
   a=n;
   sum=0;
   while(n>0)
   {
     last=n%10;                  // No Extracting
     n=n/10;
       prod=1;
       for(i=1;i<=last;i++)       // Factorial Product
       {
         prod=prod*i;
       }
         sum=sum+prod;               // Sum Of All Digits
       
    }
if(sum==a)             // loop becomes 0 that why save n in a.
printf("%d is Strong Number",a); 
else
printf(" %d Is not a strong number",a);

}