/*
  #include<stdio.h>                                           // Pattern 
  void main()                                                  1
{                                                              1 2       
    int row,col;                                               1 2 3
    for(row=1;row<=5;row++)                                    1 2 3 4
    {                                                          1 2 3 4 5
        for(col=1;col<=row;col++)
        printf("%d",col);
           printf("\n");
        
    }
    }
*/

#include<stdio.h>
void main()
{
  int row,col;                                                         
  for( row=1;row<=5;row++)
  {
   for(col=1;col<=6-row;col++)
    printf("%d",col);
        printf("\n");
  }                                                          

}


                                                        
                                                          
                                                        

      
