/*
	1) d)
	2) a) a=25 n=6 => a=4

	Algoritmul preia numarul de la tastatura si scade, respectiv il creste, daca este par, respectiv impar, cu patratul intervalului introdus.

		c) a=18 rez:a=8 => n=4

		b)	|
			v
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, n, i;
	printf("a= ");
	scanf("%d", &a);
	printf("n= ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			a -= i * i;
		else
			a += i * i;
	}
	printf("%d", a);
}

	/*
		d) impar => a = n * n;
		   par   => a = 0;

		S2. 1) d)
	*/
