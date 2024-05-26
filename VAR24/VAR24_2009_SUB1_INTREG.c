/*
	S1. 1) d
		2) a) 75

		Alogoritmul preia 2 numere de la tastaura si scrie cmmmc al lor.

		   b) p=60, a=10 => b=12; 60
		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, p, q;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	p = a;
//	q = b;
//	if (p == 0 || q == 0)
//	{
//		p = p * q;
//		q = p * q;
//	}
//	while (p != q)
//	{
//		if (p < q)
//			p = p + a;
//		else
//			q = q + b;
//	}
//	printf("% d", p);
//}

//	d)
int main()
{
	int a, b, p, q;
	scanf("%d", &a);
	scanf("%d", &b);
	p = a;
	q = b;
	if (p == 0 || q == 0)
	{
		p = p * q;
		q = p * q;
	}
	do
	{
		if (p < q)
			p = p + a;
		else
			q = q + b;
	} while (p != q);
	printf("% d", p);
}

//	S2. 1) b) ?