#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, s = -1;
	scanf("%d", &n);
	while (n > 0)
	{
		if (n % 10 > s)
			s = n % 10;
		else
			s = 11;
		n /= 10;
	}
	printf("%d", s);
}