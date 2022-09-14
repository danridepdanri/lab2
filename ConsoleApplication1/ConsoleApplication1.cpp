
#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");    //русский язык


		Fraction N, M, A;
		N.read();
		cout << "\nNumber 1: ";
		N.display();
		M.read();
		cout << "\nNumber 2: ";
		M.display();
		A.Add(N, M);
		A.Sub(N, M);
		A.Mul(N, M);
		A.Equal(N, M);
		M.ToString();
		system("pause");
		return 0;
	

	return 0;
}

