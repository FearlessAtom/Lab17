#include <stdio.h>
#include <math.h>
double triangleperimeter(int a, int height) {
	double b = sqrt(pow(height, 2) - pow((a / 2.0), 2));
	return a + b * 2;}
int main() {
	printf("What is the value of the base a? : "); int a; scanf_s("%d", &a);
	printf("What is the value of the height? : "); int height; scanf_s("%d", &height);
	printf("Perimeter : %.2lf", triangleperimeter(a, height));
	return 0;}