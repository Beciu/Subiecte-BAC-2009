#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int z, x, y;
	scanf("%d %d", &z, &x);
	while (x > 0)
	{
		scanf("%d", &y);
		if (z < y - x)
			printf("%d", x % 10);
		else
			printf("%d", y % 10);
		x = y;
	}
	return 0;
}