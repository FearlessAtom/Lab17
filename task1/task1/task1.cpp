#include <stdio.h>
double onepercent(double number) { return number / 100; }
int main() {
	printf("Enter a number : "); double number; scanf_s("%lf", &number);
	printf("One percent of that would be : %.2lf", onepercent(number));
	return 0;}