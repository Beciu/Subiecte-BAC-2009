/*
	S1.	1) a)
		2) a) x=30, y=25 => x=5 => x+y=5 
							y=0

		INITIAL: Suma ultimelor doua resturi ale numerelor
				introduse se va afisa.
		FINAL: [la fel]

					(prin formula)
			b) y=26 ==============> x=13 39 65 91
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	while (x * y!=0)
//	{
//		if (x > y)
//			x = x % y;
//		else
//			y = y % x;
//	}
//	printf("%d", x + y);
//}

/*
			c)
*/
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x * y != 0)
	{
		do
		{
			if (x > y)
				x = x % y;
			else
				y = y % x;
		} while (x * y != 0);
	}
	printf("%d", x + y);
}

/*
	S2.	1) b)
*/