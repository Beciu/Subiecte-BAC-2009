/*
	S1.	1) a)
		2) a) 384756

		INITIAL: Codul ajunge la numarul comun, plecand de la 2 altele complet diferite.
		FINAL (dupa test): Codul ajunge la mijlocul secventelor crescatoare si descrescatoare, plecand de la 2 altele complet diferite.

			b) 145 si 100
			c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, y, aux;
//	scanf("%d %d", &x, &y);
//	x = x % 10;
//	y = y % 10;
//	if (y < x)
//	{
//		aux = y;
//		y = x;
//		x = aux;
//	}
//	
//	while (x <= y)
//	{
//		aux = x * 10 + y;
//		printf("%d", aux);
//		x++;
//		y--;
//	}
//}

/*
			d)
*/
int main()
{
	int x, y, aux;
	scanf("%d %d", &x, &y);
	x = x % 10;
	y = y % 10;
	if (y < x)
	{
		aux = y;
		y = x;
		x = aux;
	}

	for (int i=0;i<y;i++)
	{
		if(x <= y)
		{
			aux = x * 10 + y;
			printf("%d", aux);
			x++;
			y--;
		}
	}
}
/*
	S2.	1) c)
		2) c)
*/