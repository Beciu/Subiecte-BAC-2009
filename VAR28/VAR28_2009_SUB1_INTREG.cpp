/*
	S1. 1) b)
		2) a) x=120.12 => 2, nu 1 pentru ca linia 22

		Secventa de cod imparte numarul real in partea intreaga si partea 
		fractionara si, dupa niste ajustari, scrie 1 daca sunt egale sau 2 daca nu.

			d) 10.10
			b)
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float x;
//	int y;
//	scanf("%f", &x);
//	y = (int)x;
//	x = x - y;
//	while (x != (int)x)
//		x = x * 10;
//	if (x == y)				//converteste y la float si pierde valoarea
//		printf("1");
//	else
//		printf("2");
//}

//	c)
using namespace std;
#include<iostream>
//int main()
//{
//	double var;
//	cin >> var;
//	cout << floor(var);
//}

int main()
{
	double x;
	double y;
	cin>>x;
	y = floor(x);
	cout<<y<<"\n";
	x = x - y;
	cout<<x;
	cout << "\n";
	x = 0.12;
	y = 120;
	cout << "eroare";
	cout << "\n" << floor(x);
	cout << "\n" << floor(x);
	cout << "eroare";
	while (x != floor(x))
	{
		x = x * 10;
		cout << x;
		cout << "\n";
	}
	cout << "\n";
	if (x ==y)			
		cout<<"1";
	else
		cout<<"2";
}

//	S2. 1) b)