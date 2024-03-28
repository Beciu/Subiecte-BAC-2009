#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10][10],min,max,m,n,i,j ,x[10];
	printf("nr linii \t nr coloane \n");
	scanf("%d %d", &m, &n);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < m; i++)
	{
		min = a[i][0];
		for (j = 0; j < n; j++)
		{
			if ( min> a[i][j])
			{
				min = a[i][j];
			}
		}
		x[i] = min;
		printf("%d ", x[i]);
	}

	printf("\n");
	max = x[0];
	for (i = 0; i < m; i++)
	{
		if (max < x[i])
			max = x[i];		
	}
	printf("%d", max);
}