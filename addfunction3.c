#include<stdio.h>
int add(){
    int x=10,y=20;
    return x+y;
}
int main(){
//add 2 numbers to execute
//int a=10,b=20;
int res=add();//calling function)
printf("%d",res);
return 0;
}