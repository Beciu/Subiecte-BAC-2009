/*
	S1. 1) c)
	    2) a) a=10; b=20; c=6 => a=12,18

		Algoritmul foloseste cele 3 numere de la tastatura pentru a determina multimplii primul numar in raport cu ultimul.

		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a <= b)
//	{
//		if (a % c == 0)
//			printf("\n%d", a);
//		a++;
//	}
//}

//	b)
//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	for (int i = a; i <= b;i++)
//	{
//		if (a % c == 0)
//			printf("\n%d", a);
//		a++;
//	}
//}

//	d)
int main()
{
	int a, b, c, t,contor=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (a <= b)
	{
		if (a % c == 0)	
			contor++;
		a++;
	}
	printf("%d numere se afiseaza", contor);
}

//	 S2. 1) c)