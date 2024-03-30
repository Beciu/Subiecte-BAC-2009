#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[20][20], p, n, i, j, contor = 1;
	scanf("%d", &n);
	scanf("%d", &p);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			a[i][j] = contor * contor;
			contor = contor + 2;
			printf("%d	", a[i][j]);
		}
		printf("\n");
	}

}