#include<stdio.h>
int main(){
    int i=1,fact=1,num;
    printf("enter the number to find the factorial");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    print("Fact of given number - \"%d\": %d",num, fact);

}