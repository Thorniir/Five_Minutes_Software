#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{




	int n;
	cout << "Ilosc pieter: "; cin >> n; cout << endl;
	for (int i = 1; i <= n - 1; i++)
	{
		for (int k = 1; k <= n - i - 1; k++)
			cout << " ";
		for (int h = 1; h <= 2 * i - 1; h++)
			cout << "*";
		cout << endl;



	}
	for (int pieniek = 1; pieniek <= n - 2; pieniek++)
		cout << " ";

	cout << "#";





	_getch();
}