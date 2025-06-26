    //GIVEN A LOWER AND UPPER LIMIT PRINT ALL THE PRIME VALUES IN THAT RANGE  INCLUDING UPPER LIMIT


#include<stdio.h>
#include<math.h>
int main()
{
    int ll,ul;
    printf("enter lower and upper limits:");
    scanf("%d %d",&ll,&ul);
    if (ll==1)
    ll++;
    int num;
    for(num=(ll==1)?ll+1:ll;num<=ul;num++)
    {
    int count=0;
    int itr;
    for(itr=2;itr<=(sqrt(num));itr++){
        if(!(num%itr))
        {
            count++;
        }
    }
    
    if(count==0)
    {
        printf("%d ",num);
    }
}
}
