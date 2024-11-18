// bai14 _giaithua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
	cout << "TINH GIAI THUA\n" << endl;

	int so, giaithua = 1;
	cout << "nhap so de tinh giai thua:"; cin >> so;
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "! =" << giaithua;
	return 0;
}