#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
#include <limits.h>

int main()
{
	int a[SIZE][SIZE], min, max, m, n, i, j;
	printf("nr linii \t nr coloane \n");
	scanf("%d %d", &m, &n);
	max = INT_MIN;

	for (i = 0; i < m; i++)								//citire matrice
	{
		min = INT_MAX;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			if (min > a[i][j])
				min = a[i][j];
		}
		if (max < min )
			max = min;
		printf("%d", max);
	}

	/*for (i = 0; i < m; i++)							//afisare matrice
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < m; i++)								//minimul
	{
		min = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
		x[i] = min;
		printf("%d ", x[i]);
	}

	printf("\n");
	max = x[0];
	for (i = 0; i < m; i++)								//maximul
	{
		if (max < x[i])
			max = x[i];
	}
	printf("%d", max);
}*/