/*
S1.
	1) b)
	2) a) x=2 y=9 => ABABABAB

		Algoritmul citeste de la tastatura 2 numere, le interschimba, iar apoi le imparte, afisand 'AB'*2 pentru rezultatul gasit.

	   b) 12 caractere 'AB' => X & Y = [1,6;2,12;3,18;4,24;5,30;6,36;7,42;8,48;9,54,...] (posibilitati totale)
					 [1,20] => X & Y = [1,6;2,12;3,18] => 3 perechi de nr.

	   c) |
		  v
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int contor = 0;

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

		contor++;						//modificare ajutatoare

		x = x - y;
		printf("B");

		contor++;						//modificare ajutatoare

	}

	printf("\n%d", contor);				//modificare ajutatoare

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