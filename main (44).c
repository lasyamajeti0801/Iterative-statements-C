//GIVEN BASE AND EXPPONENT VALUE  RAISE THE BASE TO THE EXPONENT POWER


    #include<stdio.h>
int main()
{
    int base,exp1,sol=1;
    printf("Enter the values for base and exponent:");
    scanf("%d %d",&base,&exp1);
    
    while(exp1>0)
    {
    sol = sol*base;
    exp1--;
    }
    printf("%d",sol);
}
