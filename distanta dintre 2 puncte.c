
#include<cstdio>
#include <stdio.h>
#include <math.h>
#include<iostream>
struct punct{
	double x, y;
};
double distanta(struct punct a, struct punct b) {
	double ab;
	ab = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	return ab;
}


int main() {
	struct punct a, b;
	double ab;
	printf("ax=");
	scanf("%lf", &(a.x));
	printf("ay=");
	scanf("%lf", &(a.y));
	printf("bx=");
	scanf("%lf", &(b.x));
	printf("by=");
	scanf("%lf", &(b.y));
	ab = distanta(a, b);
	printf("ab=%lf", ab);
}