/*
	S1. 1) a)
		2) a) n=4 => ***#***

		Codul verifica daca numerele din intervalul introdus sunt pare, afisand '#', iar apoi '*'.

		   b) 66 de * => n=12

		   c) |
			  v
*/			  

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i, n, j;
//	printf("n= ");
//	scanf("%d", &n);
//	for (i = 1; i <= n - 1; i++)
//	{
//		if (i % 2 == 0)
//			printf("#");
//		for (j = i + 1; j <= n; j++)
//			printf("*");
//	}
//}


	//d)

int main()
{
	int i, n, j,contor=0;
	printf("n= ");
	scanf("%d", &n);
	i = 1;
	while (i<=n-1)

	{
		if (i % 2 == 0)
			printf("#");
		j = i + 1;
		while(j <= n)
		{
			printf("*");
			contor++;
			j++;
		}
		i++;
	}
	printf("\n%d", contor);
}

// S2. 1) b)




