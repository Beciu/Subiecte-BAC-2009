#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fractie {
	int a;
	int b;
};

	/*""nu ai tip"" fractie(tip? a,tip? b) {
		int fs;
		fs = { 2020 * f.b - 2021 * f.a, 2021 * f.b };
	}*/
struct fractie diferenta(struct fractie f1, struct fractie f2) {
	struct fractie rezultat;
	rezultat.a = (f1.a * f2.b - f1.b * f2.a);
	rezultat.b = (f1.a * f2.b);
		return rezultat;
}

int main()
{
	struct fractie fs,f,x;
	x.a = 2020;
	x.b = 2021;
	printf("a=");
	scanf("%d", &f.a);
	printf("b=");
	scanf("%d", &f.b);
	//fs.a = (2020 * f.b - 2021 * f.a);
	//fs.b = 2021 * f.b;
	fs = diferenta(x, f);
	
	printf("fs=%d\n%d", fs.a,fs.b);
}