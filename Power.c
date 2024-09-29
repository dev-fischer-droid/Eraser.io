#include<stdio.h>
void main()
{
int a,b,prod,i;
printf("Enter the Base : ");
scanf("%d",&a);
printf("Enter the Power : ");
scanf("%d",&b);
prod=1;
for(i=1;i<=b;i++)
{
    prod=prod*a;
}
printf("The anser is %d",prod);




}