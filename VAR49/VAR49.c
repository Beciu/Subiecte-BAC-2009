/*
	S1.	1) d)
		2) 

		INITIAL: Nr citit de la tast. este afisat 
				de la coada la cap cu un pas de 2.
		FINAL: Nr citit de la tast. este afisat 
				de la cap la coada cu un pas de 2.

			a) 210345 => 204 
			b) afisat 987 => 270819
			d) 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int x, k = 0;
//	scanf("%d", &x);
//	while (x != 0)
//	{
//		k = k * 10 + x % 10;
//		x /= 10;
//	}
//	while (k != 0)
//	{
//		x = x * 10 + k % 10;
//		k /= 100;
//	}
//	printf("%d", x);
//}

/*
			c)
*/
int main()
{
	int x, k = 0;
	scanf("%d", &x);
	do
	{
		if (x != 0)
		{
			k = k * 10 + x % 10;
			x /= 10;
		}
	} while (x != 0);
	do
	{
		if (k != 0)
		{
			x = x * 10 + k % 10;
			k /= 100;
		}
	} while (k != 0);
	printf("%d", x);
}

/*
	S2.	1) b)
		3) x.med1+x.med2=medie_an

*/