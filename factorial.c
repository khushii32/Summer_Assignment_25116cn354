#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("enter a number to find the factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;

    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;

}