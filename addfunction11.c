#include<stdio.h>
int add(int x, int y){//10 30
int c=x+y;
return c;
}
int main(){
//add 2 numbers to execute
int a=10,b=20;
int sum=add(a,b);//calling function)
printf("%d",sum);
return 0;
}