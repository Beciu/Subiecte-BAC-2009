#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int vector_de_cifre(int n, int v[])
{
    int i = 0;
    while (n != 0)
    {
        v[i] = n % 10;
        n = n / 10;
        i++;
    }
    return i;                           //numarul de cifre ale nr
}


void selection_sort(int m, int v[])
{
    int min, i, j, minmnr;//Selection sort Crescator

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

    int vector_de_cifre(int n, int v[])
    {
        int i = 0;
        while (n != 0)
        {
            v[i] = n % 10;
            n = n / 10;
            i++;
        }
        return i;                           //numarul de cifre ale nr
    }


    void selection_sort(int m, int v[])
    {
        int poz_min, i, j, min, aux;
        for (i = 0; i < m; i++)            //pozitie i
        {
            min = INT_MAX;
            for (j = i; j < m; j++)         //pozitie de gasire a minimului
            {
                if (v[j] < min)             //gasirea minimului + indetificarea pozitiei lui
                {
                    min = v[j];
                    poz_min = j;
                }
            }
            aux = v[i];                     //sortare
            v[i] = v[poz_min];
            v[poz_min] = aux;
        }
    }



    int main()
    {
        int n, m, i, j, v[1000];
        printf("n=");
        scanf_s("%d", &n);
        m = vector_de_cifre(n, v);
        selection_sort(m, v);
        for (int i = 0; i < m; i++)         //printarea vectorului
            printf("%d", v[i]);

        return 0;
    }

    for (i = 0; i < m; i++)
    {
        minmnr = INT_MAX;
        for (j = i; j < m; j++)
        {
            if (v[j] < minmnr)
            {
                minmnr = v[j];
                min = j;
            }
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
        ///printf("%d", min);
    }
}



int main()
{
    int n, m, i, j, v[1000];
    printf("n=");
    scanf_s("%d", &n);
    m = vector_de_cifre(n, v);
    selection_sort(m, v);
    for (int i = 0; i < m; i++)
        printf("%d", v[i]);

    return 0;
}