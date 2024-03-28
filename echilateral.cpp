#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include <stdio.h>
#include <math.h>
#include<iostream>
struct punct {
    double x, y;
};
int distanta(struct punct a, struct punct b) {

    return ceil(sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));  //ceil=operatii cu float dar returneaza intreg

}
double echilateral(int ab, int bc, int ac)
{
    if (ab == bc && bc == ac)
        return 1;
    else return 0;
}


int main() {
    struct punct a, b, c;
    int ab, bc, ac;

    printf("ax=");
    scanf("%lf", &(a.x));
    printf("\n ay=");
    scanf("%lf", &(a.y));
    printf("\n bx=");
    scanf("%lf", &(b.x));
    printf("\n by=");
    scanf("%lf", &(b.y));
    printf("\n cx=");
    scanf("%lf", &(c.x));
    printf("\n cy=");
    scanf("%lf", &(c.y));
    ab = distanta(a, b);
    bc = distanta(b, c);
    ac = distanta(a, c);
    printf("ab=%d \n", ab);
    printf("bc=%d \n", bc);
    printf("ac=%d \n", ac);

    if (echilateral(ab, bc, ac) == 1)
        printf("Triunghiul este echilateral\n");
    else printf("Triunghiul NU este echilateral\n");
}