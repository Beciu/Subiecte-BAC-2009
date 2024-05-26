/*
	S1. 1) a)
		2) a)x=2;y=9 => ****

		Algoritmul foloseste diferenta dintre cele doua numere introduse de la tastatura si calculeaza
		de cate ori intra cifra '2' in aceasta.

		   b)y=79;40 de stelute => x1=0 ; x2=1

		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, y, temp;
//	int contor=0;
//	scanf("%d", &x);
//	scanf("%d", &y);
//	if (x > y)
//	{
//		x == temp;
//		temp == y;
//		y == x;
//	}
//	if (x % 2 == 0)
//		x = x + 1;
//	while (x <= y)
//	{
//		x = x + 2;
//		printf("*");
//		contor++;
//	}
//	printf("\n%d stelute", contor);
//}

	//d)

int main()
{
	int x, y, temp;
	int contor=0;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > y)
	{
		x == temp;
		temp == y;
		y == x;
	}
	if (x % 2 == 0)
		x = x + 1;
	for (int i = 0; i <= y; i++)
	{
		if (x <= y)
		{
			x = x + 2;
			printf("*");
			contor++;

		}
	}
	printf("\n%d stelute", contor);
}

//	S2. 1) ?