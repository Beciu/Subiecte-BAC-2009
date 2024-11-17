/*
	S1.	1) b)
		2)

		INITIAL: Se va afisa cea mai mica cifra a numarului introdus de la tast.
					cu un pas de 2 de la final la inceputul lui.
		FINAL: Se va afisa cifra cea mai mica de pe numarul zecilor dintre numere.

			a) 2
			b) k=9 => x=999 899 690 192
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, x, k, c;
//	scanf("%d", &n);
//	k = 9;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &x);
//		c = x / 10 % 10;
//		if (c < k)
//			k = c;
//	}
//	printf("%d", k);
//}
/*
			c)
*/
int main()
{
	int n, x, k, c;
	scanf("%d", &n);
	k = 9;
	if (n!=0)
	{
		int i = 0;
		do
		{
			scanf("%d", &x);
			c = x / 10 % 10;
			if (c < k)
				k = c;
			i++;
		} while (i<n);
	}
	printf("%d", k);
}

/*
	S2.	1) c)
		3) 2
*/