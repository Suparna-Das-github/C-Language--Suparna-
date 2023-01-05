
//Rhomus Pattern in C

#include <stdio.h>

int main() {

int space=10,i,k,j;

for(i=10;i>0;i--){

    for(j=12;j>space;j--){
        printf(" ");
    }
    
    for(k=1;k<8;k++){
        printf("❤");
    }
    space--;
    printf("\n");
}
    return 0;
}
