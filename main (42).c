//WRITE A CODE FOR FINDING NUMBER OF DIGITS IN A NUMBER

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
      int dig=0;
      while(num>0)
      {
          num/=10;
          dig++;
      }
      printf("%d",dig);
      }
