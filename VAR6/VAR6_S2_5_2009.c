#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char vector[255];
	int i;
	printf("Cuvintele ce vor fi introduse cu un space intre ele sunt: ");
	fgets(vector, sizeof(vector), stdin);											// read string
//	puts(vector);																	// display string

	vector[0] = toupper(vector[0]);
	i = 0;
	while (i < sizeof (vector))														//verificare spatiu + majuscula
	{
		if (vector[i] == 32)
		{
			if (vector[i + 1] != 32)
				vector[i + 1] = toupper(vector[i + 1]);
		}
		i++;
	}
	printf("%s", vector);
}