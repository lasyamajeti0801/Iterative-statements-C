//WRITE  A CODE TO CHECK THE GIVEN NUMBER IS PRIME OR NOT
   
 #include<stdio.h>
#include<math.h>
int main()
{
    int num,itr;
    printf("Enter a number:");
    scanf("%d",&num);
    int count=0;
    for( itr=1;itr<=num;itr++)
    {
        if(!(num%itr))
        {
            count++;
        }
    }
    printf((count==2)?"prime":"Composite");
}
    
