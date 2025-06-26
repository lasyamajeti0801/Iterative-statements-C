
//WRITE A CODE TO PRINT FIRST N NATURAL NUMBERS IN REVERSE ORDER STARTING FROM N AND ENDING FROM 1

#include<stdio.h>
void main()
{
    int num;
    printf("Enter n:");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d\n",num);
        num--;
    }
}
