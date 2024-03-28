#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[20][20],p,n,ordin;
	printf("Ordinul matricei este? ");
	scanf("%d", &ordin);
	printf("Elementele matriceu sunt? ");
	for (n = 2; n <= 20; n++)
	{
		for (p = 1; p <= 20; p++)
		{
			scanf("%d", &a[n][p]);

		}
		printf("%d", a[n][p]);
	}


	// INCOMPLET


}
