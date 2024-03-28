#include <stdio.h>

struct date
{
	char CNP[14];
	int anNastere;
};
struct angajat
{
	struct date dp;
	int venit;
} a[30];





int main()
{
	a[0].venit = 2000;
	a[0].dp.anNastere = 4000;
	printf("an nastere angajat = %d\n", a[0].dp.anNastere);
	printf("venit angajat = %d", a[0].venit);
}