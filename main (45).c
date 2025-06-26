//CHECK THE GIVEN NUMBER IS ARMSTRONG OR NOT

#include<stdio.h>
int main()
{
   int num;
   printf("Enter a number:");
   scanf("%d",&num);
   int safe = num;
   int nod=log10(num)+1;
   int sum=0;
   while(num>0)
   {
       int dig = num%10;
       num/=10;
       int exp1=nod;
       int sol=1;
       while(exp1>0)
       {
           sol *=dig;
           exp1--;
           
       }
       sum+=sol;
       
   }
   printf((sum==safe)?"Armstrong":"Not Armstrong");
}


