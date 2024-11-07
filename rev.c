#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter the number to find its reverse:");
    scanf("%d",&num);
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("enter the reverse of the number is %d",rev);
    return 0;
}