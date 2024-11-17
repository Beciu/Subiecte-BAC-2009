/*
	S1. 1) a)
		2) 
		
		Algoritmul ia 2 numere de la tast. si face media lor aritmetica.

		a) 9
		b)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	while (n <= m)
	{
		n++;
		m--;
	}
	while (m < n)
	{
		m++;
		n--;
	}
	printf("%d", n);
}
/*
		c) n=15;1  m=5;19 
		d) 
*/
int main()
{
	int n, m,sum_a;
	scanf("%d %d", &n, &m);
	sum_a = (n + m) / 2;
	printf("%d", sum_a);
}
//	S2. 1) a)