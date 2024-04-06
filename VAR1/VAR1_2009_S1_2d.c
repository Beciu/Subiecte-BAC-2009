#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, z=0, p=1, c;
	scanf("%d", &n);
	while (n > 0)
	{
		c = n % 10;
		n = n / 10;
		if (c % 3 == 0)
		{
			z += p * (9 - c);
			p = p * 10;
		}
	}
	printf("%d", z);
}