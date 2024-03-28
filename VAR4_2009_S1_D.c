#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, x, aux;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	for (x = a; x >= b; x--)
	{
		if (x % 2 != 0)
			printf("%d ", x);
	}
}