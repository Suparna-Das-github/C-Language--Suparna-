#include <stdio.h>
#include <string.h>

int main() 
{
for(int i=0;i<135;i++)
{
printf("ErrorNo (%d) %s\n",i,strerror(i));
}
    return 0;
}
