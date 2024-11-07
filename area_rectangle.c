#include<stdio.h>
#include<math.h>
void area(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int recarea=a*b;
    printf("the area of rectangle is %d",recarea);

}
int main(){
    printf("Enter the length and breadth of the rectangle");
    area();
    return 0;
}