// Prime Number in C

#include <stdio.h>

int main()
{
 
 int m,i, n , flag=0;
  
  
  printf("ebter\n");
  
  scanf("%d", &n);
   
 m = n/2;
   
  for(i=0; i<=m;i++)
       {
       if(n%i==0)
       {
           printf("not prime");
        
           flag = 1;
           break;
       }             
       }
 
 if(flag==0)  
 {
     printf("yes prime");
 }    
     
     
     
     
  return 0;  
       
       
       
       
 }
