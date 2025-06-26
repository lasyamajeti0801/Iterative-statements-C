//WRITE A CODE FOR PRINTING THE PRODUCT OF FIRST N NATURAL NUMBERS


#include<stdio.h>
void main()
{
    int num,product=1,start=1;
    printf("Enter n:");
    scanf("%d",&num);
    while(start<=num)
    {
        product*=start++;
        
    }
    printf("%d",product);
}

