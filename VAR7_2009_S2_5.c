#define _CRT_SECURE_NO_WARNINGS						//exemplu de introdus:		mare	frig	saci
#include <stdio.h>
#include <string.h>
												
int main()
{
	char vect[255];
	char consoane[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
	int i, flag = 0, pozitie;
	printf("Introdu cuvintele dorite : ");
	fgets(vect, sizeof(vect), stdin);				// read string
//	puts(vect);										// display string


	i = strlen(vect);
	printf("Consoana identificata se afla pe locul %d\n", i);

	while (i != 0 && flag==0)
	{
		for (int j = 0; j < sizeof(consoane); j++)
			{
				if (vect[i] == consoane[j])
				{
					pozitie = i;
					flag = 1;
				}
			}
		i--;
	}

	for (int j = pozitie; j < sizeof(vect); j++)
		vect[j] = vect[j + 1];
	printf("%s ", vect);
}