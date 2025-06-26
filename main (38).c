//WRITE A CODE FOR PRINT THE FACTORS OF THE USER INPUT

#include<stdio.h>
void main()
{
    int num,start=1;
    printf("Enter n:");
    scanf("%d",&num);
    while(start<=num)
    {
        if(num%start==0) {
            printf("%d\n",start);
        }
        start++;
    }
}
