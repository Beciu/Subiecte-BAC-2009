// Daca algoritmul gaseste o cifra impara din numarul introdus de la tastatura, va afisa inmultirea dintre toate cifrele gasite.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, k, c, p = 1;
	scanf("%d %d", &n, &k);
	while (n > 0 && k > 0)
	{
		c = n % 10;
		if (c % 2 == 1)
			p = p * c;
		n = n / 10;
		k--;
	}
	printf("%d", p);
}