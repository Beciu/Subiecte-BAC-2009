/*
	S1. 1) b)
		2) a) a=312, b=1354 => 2,3,4 

		Algoritmul preia 2 numere de la tastatura si le compara ultimele 2 cifre.
		Daca acestea sunt egale, o afiseaza pe cea din urma.

		   b) afisare 2 valori => a=10, b=31
		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, i,cifra;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	a = (a / 10) % 10 * 10 + a % 10;
//	b = (b / 10) % 10 * 10 + b % 10;
//	for (i = a; i <= b; i++)
//	{
//		if (i % 10 == i / 10)
//		{
//			cifra = i % 10;
//			printf("%d", cifra);
//		}
//	}
//}

//	d)
int main()
{
	int a, b, i, cifra;
	scanf("%d", &a);
	scanf("%d", &b);
	a = (a / 10) % 10 * 10 + a % 10;
	b = (b / 10) % 10 * 10 + b % 10;
	i = a;
	while(i<=b)
	{
		if (i % 10 == i / 10)
		{
			cifra = i % 10;
			printf("%d", cifra);
		}
		i++;
	}
}

//	S2. 1) c)