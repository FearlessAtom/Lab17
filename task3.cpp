#include <stdio.h>
#include <math.h>
double triangleperemeter(int a,int height){
    double b = sqrt(pow(height,2) - pow((a / 2.0),2));
    return a + b * 2;}
int main(){
    printf("What is the value of the base a? : ");int a;scanf("%d",&a);
    printf("What is the value of the height? : ");int height;scanf("%d",&height);
    printf("Peremeter : %.2lf\n",triangleperemeter(a,height));
    return 0;}