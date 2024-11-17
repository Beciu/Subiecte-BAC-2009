/*
	S1.	1) c)
		2) a) 4

		INITIAL: Pseudocodul din subiectul prezentat verifica de cate ori se poate imparti numarul introdus de la tastatura.
		FINAL: la fel?

			b) 240
			c) 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, s = 0, f = 2, p;
	scanf("%d", &x);
	while (x > 1)
	{
		p = 0;
		while (x % f == 0)
		{
			x = x / f;
			p++;
		}
		s = s + p;
		f = f + 1;
	}
	printf("%d", s);
}

/*
		d) [7,28]=>7,11,13,17,19,21,23,29


		S2.	1) d)
*/

