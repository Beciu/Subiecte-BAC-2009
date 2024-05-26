/*
	S1.	1) d)
		2) a) 1

		Algoritmul preia 2 numere de la tastatura si le imparte pe ambele la 2 pana cand devin impare.

		   b) c=0 => a=1; b=3
		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, i, j;
	scanf("%d", &a);
	scanf("%d", &b);
	c = 0;
	do
	{
		i = a % 2;
		j = b % 2;
		if (i + j == 0)
			c++;
		a = a * i + (1 - i) * (a / 2);
		b = b * j + (1 - j) * (b / 2);
	} while (i * j != 1);
	printf("%d", c);
}

	//d)
//int main()
//{
//	int a, b, c, i, j;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	i=0;
//	j=0;
//	c = 0;
//	while (i * j != 1);
//	{
//		i = a % 2;
//		j = b % 2;
//		if (i + j == 0)
//			c++;
//		a = a * i + (1 - i) * (a / 2);
//		b = b * j + (1 - j) * (b / 2);
//	} 
//	i = a % 2;
	//j = b % 2;
	//if (i + j == 0)
	//c++;
	//a = a * i + (1 - i) * (a / 2);
	//b = b * j + (1 - j) * (b / 2);
//	printf("%d", c);
//}

//	S2. 1) b)