/*
	S1.	1) d)
		2)

		INITIAL: Codul identifica cea mai mare cifra din numarul
				introdus de la tastatura.

		FINAL:Codul identifica cea mai mare cifra din numarul
				introdus de la tastatura, mai putin ultima.

			a) 27349 => max=7
			b) 130,131,132,133,134,135,136,137,138,139  |
				230,231,232,233,...						|=>30 nr.
				300,301,302,303,...						|
			d) 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, max = 0;
//	scanf("%d", &n);
//	do
//	{
//		n /= 10;
//		if (max < n % 10)
//			max = n % 10;
//	}while (n != 0);
//	printf("%d", max);
//}

//			c)
int main()
{
	int n, max = 0;
	scanf("%d", &n);
	while (n == 0);
	{
		n /= 10;
		if (max < n % 10)
			max = n % 10;
	}
	printf("%d", max);
}

/*
	S2.	1) c)
		2) d)
*/