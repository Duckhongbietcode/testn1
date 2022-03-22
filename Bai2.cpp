#include<iostream>
using namespace std;

int main(){
	int a[1000];
	int n;
	cout << "Nhap n= ";
	cin >> n;
	for(int i=0; i<n; i++){
		cout <<"a["<<i<<"]= ";
		cin >> a[i];
	}
	int tong = 0;
	for(int i=0; i<n; i++){
		tong = tong + a[i];
	}
	cout <<"Tong n so nguyen = " << tong << endl;
	if(tong%2 == 0){
		cout << "Tong cac so chia het cho 2 " << endl;
	}
	else{
		cout << "Tong cac so khong chia het cho 2 " << endl;
	}
}
