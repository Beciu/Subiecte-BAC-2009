/*
	S1. 1) a)
		2) a) a=493 b=1836 => d=2329

		Algorimtul foloseste cele 2 numere citite de la tastatura pentru a compune unul nou folosind treptat cifrele lor de la dreapta la stanga.

		b)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c, d, p;
//	scanf("%d %d", &a, &b);
//	c = 0;
//	d = 0;
//	p = 1;
//	while (a + b + c > 0)
//	{
//		c = a % 10 + b % 10 + c;
//		d = d + (c % 10) * p;
//		p = p * 10;
//		a = a / 10;
//		b = b / 10;
//		c = c / 10;
//	}
//	printf("%d", d);
//}

//	c)
//int main()
//{
//	int a, b, c, d, p;
//	scanf("%d %d", &a, &b);
//	c = 0;
//	d = 0;
//	p = 1;
//	do
//	{
//		c = a % 10 + b % 10 + c;
//		d = d + (c % 10) * p;
//		p = p * 10;
//		a = a / 10;
//		b = b / 10;
//		c = c / 10;
//	} while (a + b + c > 0);
//	printf("%d", d);
//}

//	d)
int main()
{
	int a, b, c, d, p;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
}

//	S2. 1) a)