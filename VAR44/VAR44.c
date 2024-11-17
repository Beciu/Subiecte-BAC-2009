/*
	S1.	1) d)
		2) a) 555

		INITIAL: ??? (Scade ultima cifra a nr introdus din 9
						pe fiecare pozitie)
		FINAL: [la fel]

			b) 278
			d)
*/
#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main()
{
	int x, y = 0;
	scanf("%d", &x);
	while (x > y)
		y = y * 10 + 9 - x % 10;
	printf("%d", y);
}*/

/*
			c)
*/

int main()
{
	int x, y = 0;
	scanf("%d", &x);
	if (x > y)
	{
		do
			y = y * 10 + 9 - x % 10;
		while (x > y);
	}
	printf("%d", y);
}

/*
	S2.	1) c)
*/