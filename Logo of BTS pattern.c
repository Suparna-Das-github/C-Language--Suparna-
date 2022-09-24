// Created by Suparna Das

// BTS logo in C language

// Thanks for watching 💜💜



/*       
         *       *
         **     **
         ***   ***
         **** ****
         **** ****
         **** ****
         **** ****
         **** ****
         ***   ***
         **     **
         *       *

*/





#include<stdio.h>
int main()
{

    int i,j; int n=7;
    
    
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(2*n); j++)
        {
            // right part 
            if (i<j)
            {
                printf(" "); 
            }
            else
            {
                printf("*");
            }
            
            // left part 
            if (i<=((2*n)-j))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    
    //middle part
    for(i=1 ; i<=7; i++)
    {
        for(j = 1; j<=14; j++)
        {
                                           
            if(j==8)
            {                
                printf(" ");
            }

            
            printf("* ");
                       
        }
        printf("\n");
    
   } 
    
    

    
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=14; j++)
        {
        
            //right part
            if (i>(n-j+1))
            {
                printf(" ");
                
                                                   
            }
            else
            {
                printf("*");                
             
            }
                
                                                          
            //left part
            if ((i+n)>j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    printf("\n           \t💜BTS💜");

    return 0;
}
