/********************************
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n==1)
    printf("1 Is Neither Prime nor Composite");
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d Is Not A Prime Number",n);
            break;
        }
    }
if(i==n)
printf("%d is Prime",n);
}        
 */////////////////////////////////
  
  // 2nd Logic

  #include<stdio.h>
  void main()
  {

    int n,i,count;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n==1)
    printf("1 Is Neither Prime Nor Composite");
    count=0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        {
            count++;

        }

    }
if(count==0)
printf("Its a Prime Number");
else
printf("Its  Not A Prime Number");
}