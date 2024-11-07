#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        sum=i+sum;//0+1=1->2+1=3->3+3=6->4+6->55s
    }
    printf("sumof numbers 1 to 10=%d\n",sum);
return 0;
}