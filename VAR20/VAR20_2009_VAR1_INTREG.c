/*
	S1. 1) c)
		2) a) n=16389 => m=9831
		   b) m=0 => n=1000
		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, m, n;
//	scanf("%d", &n);
//	a = n % 10;
//	m = a;
//	while (n > 9)
//	{
//		n /= 10;
//		b = n % 10;
//		if (a > b)
//		{
//			m = m * 10 + b;
//			a = b;
//		}
//	}
//	printf("%d", m);
//}

//	d)
int main()
{
	int a, b, m, n;
	scanf("%d", &n);
	a = n % 10;
	m = a;
	for (int i = 0; i <= n;i++) 
	{
		if (n > 9)
		{
			n /= 10;
			b = n % 10;
		}
		if (a > b)
		{
			m = m * 10 + b;
			a = b;
		}
	}
	printf("%d", m);
}
//	S2. 1) ?