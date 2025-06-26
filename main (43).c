//WRITE A CODE FOR PRINTING THE LARGEST 10 POWER WHICH WILL PROVIDE UNIT DIGIT QUOTIENT

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int den=1;
    while((num/den)>9)
    {
        den *=10;
    }
    printf("%d",den);
    }

