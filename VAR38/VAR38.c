/*
	S1.	1) c)
		2)	a) 

		INITIAL: I cannot figure out, for the life of me,
				what this s#%t does.
		FINAL:


			b)
			c)
			d)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, p;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p = 1; 
		for (j = i; j <= 2; j--)
			p = p * j;
	}
	printf("%d %d", p / (i * 2));
}

/*
	S2.	2)	c)
*/