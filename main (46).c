/*WRITE A CODE TO CHECK THE GIVEN NUMBER IS STRONG NUMBER OR NOT

STRONG NUMBER: a number Is said to be strong number if sum of factorials of each digit is equal to initial number

Ex : 145

     5   4   1

5!  +  4! +  1!   =     120     +    24   +   1 =    145*/


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int sum=0,safe=num;
    while(num>0)
    {
        int dig = num%10;
        int start = 1, fact =1;
        while(start<=dig)
        {
            fact *= start;
            start++;
        }
        sum+= fact;
        num/=10;
        
        }
        printf((safe==sum)?"strong":"Not Strong");
        
    }

