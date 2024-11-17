/*
	S1.	1) b)
		2) a) 80

		INITIAL: calcule indescifrabile
		FINAL: Se afiseaza cel mai mare deimpartit pentru care
			nu exista rest.

			b) y=3 => x= 1,2,4,5,7,8
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	scanf("%d %d", &x, &y);
//	while (y > 0)
//	{
//		z = x % y;
//		x = 2 * y;
//		y = 2 * z;
//	}
//	printf(" % d", x);
//}
/*
			c)
*/
int main()
{
	int x, y, z;
	scanf("%d %d", &x, &y);
	if (y > 0)
		do
		{
			z = x % y;
			x = 2 * y;
			y = 2 * z;
		} while (y != 0);
	printf(" % d", x);
}

/*
	S2.	1) a)
*/