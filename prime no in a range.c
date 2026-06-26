prime no in a range
#include<stdio.h>
int main(){
    int i,j,n1,n2,flag;
    printf("Enter the range:");
    scanf("%d%d",&n1,&n2);
    printf("Prime numbers between %d and %d are:",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        if(i==0 || i==1)
            continue;
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ",i);
    }
    return 0;
}