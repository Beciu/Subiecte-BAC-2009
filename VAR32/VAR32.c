/*
	S1.	1)  d)
		2)	a) 288

		Secventa de cod afiseaza fiecare putere a numarul introdus ... in a rezultatul celei mai mari puteri ale celui mai mic numar introdus.

			b) 32
			c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		c = b;
//		b = a;
//		a = c;
//	}
//	while (a <= b)
//	{
//		printf("%d\n", a);
//		a = a * 2;
//	}
//	printf("%d\t", a);
//}
/*
			d)
*/
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		c = b;
		b = a;
		a = c;
	}
	do 
	{
		printf("%d\n", a);
		a = a * 2;
	} while (a <= b);
	printf("%d\t", a);
}

/*
	S2.		1) b)
			2) d)
*/