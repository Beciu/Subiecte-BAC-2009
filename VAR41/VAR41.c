/*
	S1.	1) a)
		2) a) 100 => 100 50 25 5 1

		INITIAL: Codul prezentat in limbaj pascal ilustreaza
				atat numarul introdus de la tastatura, cat si
				de cate ori poate fi impartit, precum si rezultatele
				acestor operatii.	[il gandisem bine dar nu e exprimat conform]

		FINAL: Codul prezentat in limbaj pascal ilustreaza
				atat numarul introdus de la tastatura, cat si
				impartirea continua a acestuia.

			b) 97
			d) 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x, d = 2;
//	scanf("%d", &x);
//	printf("%d", x);
//	while (x >= d)
//	{
//		while (x % d == 0)
//		{
//			x = x / d;
//			printf(" %d", x);
//		}
//		d++;
//	}
//}
/*
			c)
*/
int div(int x, int d)
{
    if (x % d == 0)
    {
        printf(" %d", x);
        x /= d;
        div(x, d);
    }
    else
        return x;
}

int main()
{
    int x = 64;
    int d = 2;
    while (x > d)
    {
        x = div(x, d);
        d++;
    }
    printf(" %d", x);
}

/*
	S2.	1) b)
*/
