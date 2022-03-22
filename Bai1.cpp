#include<iostream>
using namespace std;

int main(){
	int number[1000];
	int n;
	cout <<"Nhap n= ";
	cin >> n;
	for(int i=0; i<n; i++ ){
		cout <<"number["<<i<<"]= ";
		cin >> number[i];
	}
	cout <<"Cac so chia het cho 2 " << endl;
	for(int i=0; i<n; i++){
		if(number[i]%2 == 0){
			cout << number[i] <<" ";
		}
	}
}
