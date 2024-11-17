/*
	S1.	1) c)
		2) a) x=168 => 2 si 7

		INITIAL: Algorimtul afiseaza primul si ultimul numar
				la care s-a impartit numarul introdus de la tast.
		FINAL: 

			b) 16
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, d = 2, y = 0, z = 0, p;
//	scanf("%d", &x);
//	while (x != 1)
//	{
//		p = 0;
//		while (x % d == 0)
//		{
//			p++;
//			x = x / d;
//		}
//		if (p != 0)
//		{
//			if (y == 0)
//				y = d;
//			z = d;
//		}
//		d++;
//	}
//	printf("%d \t%d", y, z);
//}

/*
			c)
*/
int main()
{
	int x, d = 2, y = 0, z = 0, p;
	scanf("%d", &x);
	if (x != 1)
		do
		{
			p = 0;
			if (x % d == 0)
				do
				{
					p++;
					x = x / d;
				} while (x % d == 0);
				if (p != 0)
				{
					if (y == 0)
						y = d;
					z = d;
				}
			d++;
		} while (x != 1);
	printf("%d \t%d", y, z);
}


/*
	S2.	1) d)
*/
