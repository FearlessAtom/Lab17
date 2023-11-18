#include <stdio.h>
#include <math.h>
int quadraticequation(int a, int b, int c) {
    int d = pow(b, 2) - 4 * a * c;
    if (a == 0 || b == 0 || c == 0){return -1;}
    else if (d == 0){return 1;}
    else if (d < 0){return 0;}
    else{return 2;}}
int main() {
    printf("What is the value of a : ");int a;scanf("%d", &a);
    printf("What is the value of b : ");int b;scanf("%d", &b);
    printf("What is the value of c : ");int c;scanf("%d", &c);
    printf("Index : %d", quadraticequation(a, b, c));
    return 0;}