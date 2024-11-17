/*
	S1. 1)  d)
		2)  a) n=5172 => m=4061

		Secventa de cod prezentata preia cifrele de la dreapta la stanga si le scade cu 1 pe fiecare.

			b)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, m = 0, p = 1, c;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		c = n % 10;
//		if (c > 0)
//			c--;
//		m = m + c * p;
//		p = p * 10;
//		n = n / 10;
//	}
//	printf("%d", m);
//}
//			c)
//	int main()
//{
//	int n, m = 0, p = 1, c;
//	scanf("%d", &n);
//	for(int i=0;i<n;i++)
//	{	
//		if (n > 0)
//		{
//			c = n % 10;
//			if (c > 0)
//				c--;
//			m = m + c * p;
//			p = p * 10;
//			n = n / 10;
//		}
//	}
//	printf("%d", m);
//}
/*
			d) -> incercare de bruteforce pt ca
			nu ma pot gandi decat la un singur raspuns (3119)
*/
	int main()
	{
		int n, m = 0, p = 1, c;
		printf("numarul pe care il cautam este: ");
		scanf(" % d", &n);
		n++;
		for (int i = 0; i <10000 ; i++)
		{
				c = n % 10;								// DE GANDIT RESTUL CODULUI
				if (c > 0)
					c--;
				m = m + c * p;
				p = p * 10;
				n = n / 10;
			if(m==n)
				printf("%d", m);
		}
	}

//	S2. 1) c)