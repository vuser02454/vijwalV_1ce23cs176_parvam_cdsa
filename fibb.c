#include<stdio.h>
int main(){
    int n,next,f=0,s=1;
    printf("enter the number to find its fibbonacci sequence:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",f);
        next=f+s;
        f=s;
        s=next;
        
    }

}