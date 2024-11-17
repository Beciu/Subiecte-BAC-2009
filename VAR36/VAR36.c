/*
	S1.	1) b)
		2) a) 249

		INITIAL: Textul ordonat vertical citeste numere introduse de la
				tastatura si face suma dintre ultimele 2 cifre ale fiecaruia.
		FINAL:Textul ordonat vertical citeste numere introduse de la
				tastatura si face suma dintre ultimele 2 cifre ale fiecaruia,
				schimbandu-le pozitia.

			b) 4950
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int s = 0, v, a, b;
//	printf("numar: ");		//for terminated press 0
//	scanf("%d", &v);
//	while (v != 0)
//	{
//		a = v % 10;
//		b = v / 10 % 10;
//		s = s + a * 10 + b;
//		printf("numar: ");		//for terminated press 0
//		scanf("%d", &v);
//	}
//	printf("%d", s);
//}

/*
			c)
*/
int main()
{
	int s = 0, v, a, b;
	printf("numar: ");		//for terminated press 0
	scanf("%d", &v);
	for(int i=0;i<v;i++)
		if (v != 0)
		{
			a = v % 10;
			b = v / 10 % 10;
			s = s + a * 10 + b;
			printf("numar: ");		//for terminated press 0
			scanf("%d", &v);
		}
	printf("%d", s);
}

/*
	S2.	1) d)
		2) d)
*/