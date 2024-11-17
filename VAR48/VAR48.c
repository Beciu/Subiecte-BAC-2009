/*
	S1.	1) a)
		2)

		INITIAL: nu afiseaza nimic constructiv
		FINAL: ia 2 numere cu un pas de 2 si insereaza un 0 intre ele 

		a) n=6, x=2008 1965 2727 1861 11021 165=> 8 905 707 801 10001 105
		b) n=4, x=? => x(la intrare si iesire)=101 303 606 909
		d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, x, nr, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &x);
//		nr = 0;
//		while (x > 0)
//		{
//			nr = nr * 100 + x % 10;
//			x = x / 100;
//		}
//		while (nr > 0)
//		{
//			x = x * 10 + nr % 10;
//			nr = nr / 10;
//		}
//		printf("%d ", x);
//	}
//}

/*
			c)
*/
int main()
{
	int n, x, nr,i=0;
	scanf("%d", &n);
	if(n!=0)
	{
		do
		{
			scanf("%d", &x);
			nr = 0;
			while (x > 0)
			{
				nr = nr * 100 + x % 10;
				x = x / 100;
			}
			while (nr > 0)
			{
				x = x * 10 + nr % 10;
				nr = nr / 10;
			}
			i++;
			printf("%d ", x);
		} while (i<n);
	}
}

/*
	S2.	1) c)
		3) 1-2-3-4-6-5
		4) a.x;a.y
*/