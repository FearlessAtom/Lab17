#include <stdio.h>
#include <math.h>
double length(int xa, int ya, int xb, int yb) {
	return sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));}
double perimeter(int ax, int ay, int bx, int by, int cx, int cy) {
	return length(ax, ay, bx, by) + length(ax, ay, cx, cy) + length(cx, cy, bx, by);}
double area(int ax, int ay, int bx, int by, int cx, int cy) {
	double p = perimeter(ax, ay, bx, by, cx, cy) / 2;
	return sqrt(p * (p - length(ax, ay, bx, by)) * (p - length(bx, by, cx, cy)) * (p - length(cx, cy, ax, ay)));}
double distance(int cx, int cy, int ax, int ay, int bx, int by) {
	return (2 * area(ax, ay, bx, by, cx, cy)) / length(ax, ay, bx, by);}
double altitudes(int px, int py, int ax, int ay, int bx, int by) {
	return distance(px, py, ax, ay, bx, by);}
int main() {
	int ax = 0, ay = 12;
	int bx = 5, by = 0;
	int cx = 0, cy = 0;
	int px = 2, py = 2;
	double ah, bh, ch;
	printf("length AB = %.2lf\n", length(ax, ay, bx, by));
	printf("length AC = %.2lf\n", length(ax, ay, cx, cy));
	printf("length CB = %.2lf\n", length(cx, cy, bx, by));
	printf("perimeter = %.2lf\n", perimeter(ax, ay, bx, by, cx, cy));
	printf("area = %.2lf\n", area(ax, ay, bx, by, cx, cy));
	printf("distance from P to AB = %   .2lf\n", distance(px, py, ax, ay, bx, by));
	printf("altitude from A: %.2lf\n", altitudes(cx, cy, ax, ay, bx, by));
	printf("altitude from B: %.2lf\n", altitudes(bx, by, ax, ay, cx, cy));
	printf("altitude from C: %.2lf\n", altitudes(ax, ay, cx, cy, bx, by));
	return 0;}