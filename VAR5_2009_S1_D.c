#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, z, y = 0;
	scanf("%d %d", &x, &z);
	do
	{
		y = y * 10 + x % 10;
		x = x / 100;
	}
	while (x != 0);
	
	while (y * z > 0 && y % 10 == z % 10)
	{
		y = y / 10;
		z = z / 10;
	}
	if (y + z == 0)
		printf("1");
	else
		printf("0");
}