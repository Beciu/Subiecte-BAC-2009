#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // For sqrt function


struct punct {
	float x, y;
};
float distanta(struct punct a, struct punct b) {
	float ab;
	ab = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	return ab;
}


int main()
{
	int n;
	printf("introdu cate numere vrei sa fie folosite: ");
	scanf("%d", &n);
	

	// Define a constant maximum size for the array
    #define MAX_PUNCTE 100  // Adjust this value as needed

	struct punct puncte[MAX_PUNCTE];

	for (int i = 0; i < n; i++)
	{
		scanf("%f", &puncte[i].x);
		scanf("%f", &puncte[i].y);
	}

	float D = 0;
	int N = 0;
	struct punct origine;
	origine.x = 0;
	origine.y = 0;

	for (int i = 0; i < n; i++)
	{
		float dist = distanta(puncte[i], origine);

		if (dist > D) {
			D = dist;
			N = 0;
		}

		if (dist==D)
		{
			N++;
		}
	}

	printf("distanta maxima a punctelor este %f \n", D);
	printf("numarul de puncte cu distanta la fel %d", N);

}