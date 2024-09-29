#include<stdio.h>
void main()
{
   int n;
   printf("Enter an Number :");
   scanf("%d",&n);
   if(n%9==0)
   printf("9");
   else
   printf("Sum is %d ",n%9);

}