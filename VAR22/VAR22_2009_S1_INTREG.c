/*
	S1. 1) d)	De ce b) si nu d)?
		2) a) 15

		Codul afiseaza cel mai mare divizor al numarului introdus, dar nu el insusi.

		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, d, i;
//	scanf("%d", &n);
//	if (n < 0)
//		n = -n;
//	d = 1;
//	for (i = 2; i <= (n / 2); i++)
//		if (n % i == 0)					//am stat mai mult de 30 de minute la linia asta
//										//sa imi dau seama ce insemna "|" din pseudocod
//										// pentru ca nu am citit "legenda" care explica cum este reprezentata partea intreaga si linia asta :,( 
//			d = i;
//	printf("%d", d);
//}

//	b)
//int main()
//{
//	int n, d, i=2;
//	scanf("%d", &n);
//	if (n < 0)
//		n = -n;
//	d = 1;
//	while( i <= (n / 2))
//	{ 
//		if (n % i == 0)
//			d = i;
//		i++;
//	}
//	printf("%d", d);
//}

//	d)
int main()
{
	int n, d, i;
	scanf("%d", &n);
	if (n < 0)
		n = -n;
	d = 1;
	for (i = n/2; i >= 2; i--)
		if (n % i == 0)
			d = i;
	printf("%d", d);	// d=45 => n=49
}