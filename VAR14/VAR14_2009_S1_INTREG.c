/*
	1) a)
	2) a) 
	x=12 7 354 9 1630 0 => n=27596

	Algoritmul preia cea mai mare cifra din numar si formeaza un altul cu cele gasite.

	   b)
	x=76 54 10 0

	   c) |
	      v
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, n, y, c;
	scanf("%d", &x);
	n = 0;
	while (x != 0)
	{
		y = x;
		c = 0;
		while (y > 0)
		{
			if (y % 10 > c)
				c = y % 10;
			y = y / 10;
		}
		n = n * 10 + c;
		scanf("%d", &x);
	}
	printf("%d", n);
}

	//	d) 

	//#define _CRT_SECURE_NO_WARNINGS
	//#include<stdio.h>
	//int main()
	//{
	//	int x, n, y, c;
	//	scanf("%d", &x);
	//	n = 0;
	//	if(x!=0)
	//	{
	//		y = x;
	//		c = 0;
	//		if(y>0)
	//		{
	//			if (y % 10 > c)
	//					c = y % 10;
	//				y = y / 10;
	//			do 
	//			{
	//				if (y % 10 > c)
	//					c = y % 10;
	//				y = y / 10;
	//			}
	//			while(y>0);
	//		do
	//		{
	//		n = n * 10 + c;
	//		scanf("%d", &x);
	//		}
	//		while(x!=0);
	//	}
	//}

//	S2. 1) b)