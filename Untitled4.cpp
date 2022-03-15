#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tong = 0;
	for(int i=1; i<=n; i+=2){
			tong += i;
	}
	cout <<"Tong cac so le la: " << tong;
	
}