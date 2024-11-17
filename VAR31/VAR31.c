/*
	S1.		1) b)
			2) a) b=1; k=6

			Algoritmul gaseste catul impartirii prin variabila k si restul prin b.

			b) 3,5
			c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, k = 0, b;
//	scanf("%d", &a);
//	b = ((a + 1) * (a + 2)) / 2;
//	while (b >= a)
//	{
//		b = b - a;
//		k++;
//	}
//	printf("b=%d d=%d", b, k);
//}

/*
			d) 
*/
int main()
{
	int a, k, b, coconut;
	scanf("%d", &a);
	coconut = ((a + 1) * (a + 2)) / 2;
	k = coconut / a;
	b = coconut - (k * a);
	printf("b=%d d=%d", b, k);
}

/*
	S2.	1) c)
*/