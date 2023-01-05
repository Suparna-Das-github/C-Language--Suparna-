
//Coded by Suparna






/*Printing pattern




    A 1 A 2 A 3 
    A 1 A 3 A 2
    A 2 A 3 A 1
    A 2 A 1 A 3
    A 3 A 2 A 1
    A 3 A 1 A 2



*/

#include<stdio.h>

int main()
{

int k;

for(int i =1; i<=6; i++)
{
  for(int j =1; j<=6; j++){
  if(j%2 !=0){
     printf("%c ", 65);}
     
   
   if((j==2 && i<3) || (j==4 && i == 4 )|| (j==4 && i== 6) || (j==6 && i== 3) || (j==6 && i== 5))
     {
       printf("%d ", k=1);       
     }
     
    if((j==2 && i==3) || (j==2 && i==4) || (j==4 && i == 1 )|| (j==4 && i== 5) || (j==6 && i== 2) || (j==6 && i== 6))
     {
       printf("%d ", k=2);       
     } 
     
     
     
     if((j==2 && i>4) || (j==4 && i == 2 )|| (j==4 && i== 3) || (j==6 && i == 1) || (j==6 && i== 4))
     {
       printf("%d ", k=3);       
     }
      
      
        
    }
    
    
    printf("\n");
}
    return 0;
}
