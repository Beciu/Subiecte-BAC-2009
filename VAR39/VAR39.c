/*
	S1.	1) b)
		2)	a) 23949

			Algoritmul modifica numarul de la tastatura si creste
			numerele cuprinse intre 1 si 8.

			b) 1009,1008
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, nr = 0, p = 1, c;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		c = n % 10;
//		if (c > 0 && c < 9)
//			c++;
//		nr = nr + c * p;
//		p = p * 10;
//		n = n / 10;
//	}
//	printf("%d", nr);
//}
/*
		c)
*/
int main()
{
	int n, nr = 0, p = 1, c;
	scanf("%d", &n);
	do
	{
		c = n % 10;
		if (c > 0 && c < 9)
			c++;
		nr = nr + c * p;
		p = p * 10;
		n = n / 10;
	} while (n != 0);
	printf("%d", nr);
}

/*
	S2.	1)	b)
		2)	c) ?
*/