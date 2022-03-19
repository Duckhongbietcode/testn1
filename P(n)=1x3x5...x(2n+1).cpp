#include <iostream>
using namespace std;


int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if (x < 0)
			cout << "Nhap sai, yeu cau nhap lai!";
	} while (x < 0);
	return x;
}

long Tinh(int n)
{
	long p = 1;
	for (int i = 0; i <= n; i++)
		p = p * (2 * i + 1);
	return p;
}

int main()
{
	int n; 

	cout << "Nhap so nguyen n: ";
	n = Nhap();
	cout << "Ket qua la: "<< Tinh(n) << endl;

	return 0;
}
