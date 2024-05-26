/*
	S1. 1) a)
		2) a) 2,8500				R:2,8333

		Algoritmul alcatuieste un numar zecimal din numerele introduse la tastatura.

		   c)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, n, i,ec1,ec2;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &n);
//	if (b == 0)
//		printf("gresit");
//	else
//	{
//		ec1 = a / b;
//		printf("%d", ec1);
//	
//		if (n > 0 && (a % b) != 0)
//		{
//			printf(",");
//			a = a % b;						
//			i = 0;
//
//			do
//			{
//				ec2 = (a * 10) / b;
//				printf("%d", ec2);
//				a = (a * 10) % b;
//				i++;
//			} 
//			while (i == n || a == 0);
//
//			//printf("\n%d", a);
//		}
//	}
//}


//	b)
int main()
{
	int a, b, n, i, ec1, ec2;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &n);
	if (b == 0)
		printf("gresit");
	else
	{
		ec1 = a / b;
		printf("%d", ec1);

		if (n > 0 && (a % b) != 0)
		{
			printf(",");
			a = a % b;
			i = 0;

			while (i != n || a != 0);
			{
				ec2 = (a * 10) / b;
				printf("%d", ec2);
				a = (a * 10) % b;
				i++;
			} 

			//printf("\n%d", a);
		}
	}
}

//	d) n-i=2 => a=
//				b=
//				n=

//	S2. 1) ?