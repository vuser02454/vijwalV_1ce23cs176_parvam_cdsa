#include<stdio.h>
void fibbonaci(){
    int n,
    int next,
    int f=0,
    int s=1;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",f);
        next=f+s;
        f=s;
        s=next;
        
    }
    int main()
    {
        printf("enter the number to give its fibbonacci ");
        fibbonaci();
    }

}