#include <stdio.h>

struct sala
{
	int nrLocuri;
	int pret;
} t[15];

int main()
{
	for (int i = 14; i >= 0; i--)
	{
		t[i].nrLocuri = 30 + i * 3;
		t[i].pret = 50;
	}

	int s = 0;

	for (int i = 14; i >= 0; i--)
		s += t[i].pret * t[i].nrLocuri;
	printf("suma totala bilete teatru: %d", s);
}

