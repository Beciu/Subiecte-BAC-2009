#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<iostream>

struct punct {
    double x, y;
};

int distanta(struct punct a, struct punct b) {

    return ceil(sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));  //ceil=operatii cu float dar returneaza intreg

}

int dreptunghic(int ab, int bc, int ac)
{
    int rezultat = 0;
    if (ac * ac == ab * ab + bc * bc)
        rezultat = 1;
    if (bc * bc == ac * ac + ab * ab)
        rezultat = 1;
    if (ab * ab == bc * bc + ac * ac)
        rezultat = 1;
    return rezultat;
}


int main() {
    struct punct a, b, c;
    int ab, bc, ac;

    printf("ax=");
    scanf("%lf", &(a.x));

    printf("\nay=");
    scanf("%lf", &(a.y));

    printf("\nbx=");
    scanf("%lf", &(b.x));

    printf("\nby=");
    scanf("%lf", &(b.y));

    printf("\ncx=");
    scanf("%lf", &(c.x));

    printf("\ncy=");
    scanf("%lf", &(c.y));

    ab = distanta(a, b);
    bc = distanta(b, c);
    ac = distanta(a, c);
    printf("ab=%d \n", ab);
    printf("bc=%d \n", bc);
    printf("ac=%d \n", ac);

    if (dreptunghic(ab, bc, ac) == 1)
        printf("Triunghiul este dreptunghic\n");
    else printf("Triunghiul NU este dreptunhic\n");
}

//exemple de puncte pitagoreice:    1;0         5;0         1;3