/*
	S1.	1) b)
		2) 
		INITIAL: Se afiseaza catul impartirii pentru
				deimpartitul si restul introduse de la tast.
		FINAL: [la fel]

			a) x=12, y=3 => t=9
			b) 0
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y, z = 1, t = 0;
	scanf("%d %d", &x, &y);
	while (x > z)
	{
		if (x % z == y)
			t = z;
		z++;
	}
	printf("%d", t);
}

/*
			c)
*/
//int main()
//{
//	int x, y, z = 1, t = 0;
//	scanf("%d %d", &x, &y);
//	if (x > z)
//	{
//		do
//		{
//			if (x % z == y)
//				t = z;
//			z++;
//		} while (x > z);
//	}
//	printf("%d", t);
//}

/*
	S2.	1) a)
*/