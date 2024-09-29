#include<stdio.h>
void main()
{
   int n,i,product;
   printf("Enter an Number: ");
   scanf("%d",&n);
   product=1;
   for(i=2;i<=n;i++)
   {
    product=product*i ;

   }
printf("Product upto n number is %d",product);


}
