/*
	S1. 1) d) x ==> c) :'(
		2) a) n=11 => c=1,2,3,4,5,6,7,8,9,0,1

		Algoritmul scoate ultima cifra a tuturor numerelor din intervalul introdus.

		   d) trei de 1 afisati => n=21,22,23,24,25,26,27,28,29,30
		   b)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, c,i;
//	scanf("%d", &n);
//	c = 0;
//	for (i = 1; i <= n; i++)
//	{
//		c = (c + 1) % 10;
//		printf("%d", c);
//	}
//}

//	c)
//int main()
//{
//	int n, c, i;
//	scanf("%d", &n);
//	c = 0;
//	i = 1;
//	while(i <= n)
//	{
//		c = (c + 1) % 10;
//		printf("%d", c);
//		i++;
//	}
//}

//	S2. 1) b)




//BRUTEFORCE pt D)
int main()
{
	int n, c, i, contor,contor2;
	char solutie;
	for ( n = 10; n <= 99; n++)
	n = 21;
	c = 0;
	contor = 0;
	solutie = NULL;
		for (i = 1; i <= n; i++)
		{
			c = (c + 1) % 10;
			solutie = solutie + c;
			if (c == 1)
				contor++;
		}
		if (contor == 3)
			printf("%d \t %s", n,contor2);
		/*printf("rulare\n\n");*/
}