/*
	S1.	1) c)
		2)

		INITIAL: Programul suport arata daca numarul 
		introdus a avut vreo cifra para, lucru ce se 
		semnaleaza prin afisarea lui "1".

		FINAL:[la fel]

			a) 10326 => 1
			b) 50 (R=75)
			c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n, s = 0, nr = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		if (n % 2 == 0)
//			s = s * 10 + n % 10;
//		n /= 10;
//	}
//	if (s != 0)
//		nr = 1;
//	printf("%d", nr);
//}

/*
			d)
*/
int main()
{
	int n, s = 0, nr = 0;
	scanf("%d", &n);
	if (n != 0)
		do
		{
			if (n % 2 == 0)
				s = s * 10 + n % 10;
			n /= 10;
		} while (n != 0);
	if (s != 0)
		nr = 1;
	printf("%d", nr);
}

/*
	S2.	1) c)
		3) 5 1 2 3 4 9
*/