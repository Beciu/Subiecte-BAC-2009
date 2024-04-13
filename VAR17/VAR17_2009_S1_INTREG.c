/*
S1.
	1) b)
	2) a) x=2 y=9 => ABABABAB

		Algoritmul citeste de la tastatura 2 numere, le interschimba, iar apoi face diferenta dintre ele, afisand 'AB', pana cand primul este mai mare sau egal cu al doilea.

	   b) 12 caractere 'AB' => X=2 , Y=11

	   c) |
		  v
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;
	printf("x respectiv y= ");
	scanf("%d%d", &x, &y);
	if (x < y)
	{
		x = x - y;
		y = x + y;
		x = y - x;
	}
	while (x >= y)
	{
		printf("A");
		x = x - y;
		printf("B");
	}
}

	//d)
//int main()
//{
//	int x, y;
//	printf("x respectiv y= ");
//	scanf("%d%d", &x, &y);
//	if (x < y)
//	{
//		x = x - y;
//		y = x + y;
//		x = y - x;
//	}
//	if (x >= y)
//		do
//		{
//			printf("A");
//			x = x - y;
//			printf("B");
//		} while (x >= y);
//}

//	S2. 1) a)