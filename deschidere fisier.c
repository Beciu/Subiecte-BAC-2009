#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* ifile = fopen("smax.in", "r"); //ifile=input file
	if (ifile == NULL) {
		printf("e gol");
		return 0;
	}
	int* v;
	int n, i, sum;
	fscanf(ifile,"%d",&n);
	v = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		fscanf(ifile, "%d", &v[i]);
	}
	for (i = 0;i < n; i++)
		printf("v[%d] = %d\n", i, v[i]);

	free(v);
	return 0;
}
