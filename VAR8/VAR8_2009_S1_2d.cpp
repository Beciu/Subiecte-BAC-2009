#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k, nr = 0, p = 1;
	scanf("%d %d", &n, &k);
	while (n != 0 && k != 0)
	{
		if (n % 2 ==0)
		{
			nr = nr + n % 10 * p;
			p = p * 10;
		}
		else
			k--;
		n = n / 10;
	}
	printf("%d", nr);
}