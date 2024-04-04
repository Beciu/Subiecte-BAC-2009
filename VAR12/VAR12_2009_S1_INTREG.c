/*
	1. b)
	2. a) 12,7,354,9,630,0 => y = 17396
	Algoritmul preia prima cifra a numarului/numerelor introdus(e) si compune un altul cu cele gasite.
	b) y=321 ? => x=39,27,14,0
	d)

	citeste x
	y=0
	if(x<>0)
	{
		do
		{
			if(x>9)
			{
				x=x/10
				do
				{
				x=x/10
				while(x>9)
				}
			}
				y=y*10+x
				citeste x
		}
		while(x<>0)
	}
	
	c) |
	   v
*/


#define _CRT_SECURE_NO_WARNINGS		//avand doua main-uri, care dintre ele ruleaza?
#include <stdio.h>

int main()				//varianta din subiect
{
	int x, y = 0;
	printf("x= ");
	scanf("%d", &x);
	while (x != 0)
	{
		while (x > 9)
			x /= 10;
		y = y * 10 + x;
		scanf("%d", &x);
	}
	printf("%d", y);
	printf("\nCUCUBAU");
}


int main()				//varianta cu do-while de la punctul d)
{
	int x, y = 0;
	printf("x= ");
	scanf("%d", &x);
	if (x != 0)
	{
		do
		{
			if (x > 9)
			{
				do
					x = x / 10;
				while (x > 9);
			}
			y = y * 10 + x;
			scanf("%d", &x);
		}
		while (x != 0);
	}
	printf("%d", y);
	printf("\nCUCUBAUBAU");
}