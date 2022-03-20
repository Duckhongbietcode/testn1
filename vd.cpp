#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cout << "Nhap n =";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout <<"a["<<i<<"] = ";
		cin >> a[i];
	}
	int tich = 1;
	for(int i = 0; i < n; i++){
		tich = tich * a[i];
	}
	cout <<"Tich = " << tich << endl;
}
