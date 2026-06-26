#include<stdio.h>
int main() {
    int count=0,num,original_num; 
    printf("Enter a number: ");
    scanf("%d",&num);
    original_num=num;
    while(num!=0) {
        num=num/10;
        count++;
    }
    printf("Number of digits in %d is %d",original_num,count);
    return 0;
}