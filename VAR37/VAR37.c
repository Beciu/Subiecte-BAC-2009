/*
	S1.	1) c)
		2)  a) 122.322

		INITIAL: Codul afisaza primul numar introdus de la coada la cap,
				plus cel putin o repetare a unei cifre.
		FINAL: [la fel; nice]

			b) n=22 ; k=2
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, k, nr = 0, p = 1, c;
//	scanf("%d %d", &n, &k);
//	while (n != 0)
//	{
//		c = n % 10;
//		nr = nr + c * p;
//		p = p * 10;
//		if (c == k)
//		{
//			nr = nr + c * p;
//			p = p * 10;
//		}
//		n = n / 10;
//	}
//	n = nr;
//	printf("%d", n);
//}

/*
			c)
*/
int main()
{
	int n, k, nr = 0, p = 1, c;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
	{
		if (n != 0)
		{
			c = n % 10;
			nr = nr + c * p;
			p = p * 10;
			if (c == k)
			{
				nr = nr + c * p;
				p = p * 10;
			}
			n = n / 10;
		}
	}
	n = nr;
	printf("%d", n);
}

/*
	S2.	1)	d)	
*/