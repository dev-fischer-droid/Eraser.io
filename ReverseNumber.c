#include<stdio.h>
void main()
{
   int n,last,reverse,a ;
   a=n;
   printf("Enter an Number : ");
   scanf("%d",&n);
    
    reverse=0;
   while(n!=0)
   {
       last=n%10;
       n=n/10;
       reverse=reverse*10+last;

     
   }
printf("The reverse is %d",reverse);
}























































/**********************************

       Another Logic Designed by User 

#include<stdio.h>
 void main()
{    
    int n,i,last;
    printf("Enter an Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        last=n%10;
        n=n/10;
        printf("%d",last);
    }


}
*//////////////////////////////////////