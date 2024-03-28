#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fractie {
	int numarator;
	int numitor;
};

int main()
{
	//int a, b, c, d;/*
	//printf("numerele sunt:\n");
	//scanf("%d %d %d %d", &a, &b, &c, &d);*/
	//struct fractie f1, f2;
	//f1.numarator = a*d ;
	//f1.numitor = b*d;
	//f2.numarator = c*b;
	//f2.numitor = d*b;


	//if (f1.numarator > f2.numarator)
	//	printf("%d\n%d", a, b);
	//else
	//	printf("%d\n%d", c, d);


	struct fractie f1, f2;
	printf("f1.numarator=");
	scanf("%d",&f1.numarator);
	printf("f1.numitor=");
	scanf("%d", &f1.numitor);
	printf("f2.numarator=");
	scanf("%d", &f2.numarator);
	printf("f2.numitor=");
	scanf("%d", &f2.numitor);/*
	f1.numarator = f1.numarator * f2.numitor;
	f2.numarator = f2.numarator * f1.numitor;*/
	if (f1.numarator * f2.numitor > f2.numarator * f1.numitor)
		printf("%d\n%d", f1.numarator,f1.numitor);
	else
		printf("%d\n%d",f2.numarator,f2.numitor);
}