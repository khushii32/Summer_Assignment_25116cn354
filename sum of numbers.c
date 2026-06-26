#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    { 
        sum=sum+i;
    }
    printf("the sum of numbers upto n is %d",sum);

    return 0;
}