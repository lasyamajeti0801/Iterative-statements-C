//Do while is the only exception where semicolon is allowed after a condition 

//WRITE A CODE FOR PRINTING 1 TO N NATURAL NUMBERS USING DO WHILE WHERE N IS USER INPUT

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   int start=1;
   do{
       printf("%d ",start);
       start++;
   } while(start<=n);

}
