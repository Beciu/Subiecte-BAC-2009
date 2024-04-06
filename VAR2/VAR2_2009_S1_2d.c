#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d", &x);
	while (x > 0)
	{
		scanf("%d", &y);
		if (x > y)
			printf("%d",x % 10);
		else
			printf("%d",y % 10);
		x = y;
	}
	return 0;
}