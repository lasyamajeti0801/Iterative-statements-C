
//WRITE A CODE FOR PRINT THE SUM OF FIRST N NATURAL NUMBERS

#include<stdio.h>
void main()
{
    int num,sum=0,start=1;
    printf("Enter n:");
    scanf("%d",&num);
    while(start<=num)
    {
        sum+=start;
        start++;
    }
    printf("%d",sum);
}
