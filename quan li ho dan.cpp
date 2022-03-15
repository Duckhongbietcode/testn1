#include<iostream>
#include <iomanip>
using namespace std;

struct hoDan{
	char mahodan[20];
	char tenchuho[25];
	char diachi[100];
	int thanhvien;
	unsigned long thunhap;
};
void nhapDanhSach(hoDan hodan[], int &n){
	cout << "\n\tDANH SACH HO DAN CUA XA\n";
	for(int i = 0; i <n; i++){
		cout << "STT" << i+1 << endl;
		cout << "Ma ho dan: ";
		cin.ignore();
		cin.getline(hodan[i].mahodan,20);
		cout << "Ten chu ho: ";
		cin.getline(hodan[i].tenchuho, 25);
		cout << "Dia chi: ";
		cin.getline(hodan[i].diachi, 100);
		cout << "So thanh vien: ";
		cin >> hodan[i].thanhvien;
		cout << "Thu nhap: ";
		cin >> hodan[i].thunhap;
		cout << endl;

	}
}

void in_danh_sach(hoDan	 hodan[], int n){
	cout << setw(4) << "STT" << setw(20) << "Ma chu ho" << setw(25) << "Ten chu ho" << setw(100) << "Dia chi";
	cout << setw(18) << "So thanh vien" << setw(15) << "Thu nhap" << endl;
	for(int i =0; i < n; i++){
		cout <<setw(3) <<   i+1;
		cout << setw(10) <<  hodan[i].mahodan;
		cout << setw(21) <<  hodan[i].tenchuho;
		cout << setw(9) <<  hodan[i].diachi;
		cout << setw(12) <<  hodan[i].thanhvien;
		cout << setw(22) <<  hodan[i].thunhap;
		cout << endl;
	} 
}
void sapxep(hoDan hodan[], int n){
	hoDan *ptr_dan = hodan;
	hoDan tg;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j< n; j++){
			if(ptr_dan[i].thunhap > ptr_dan[j].thunhap){
				tg = ptr_dan[i];
				ptr_dan[i] = ptr_dan[j];
				ptr_dan[j] = tg;
			}
		}
	}
}

void kt_hodan(hoDan hodan[], int n){
	for(int i=0; i < n-1; i++){
		if(hodan[i].thunhap < 5000000){
		cout <<setw(3) <<   i+1;
		cout << setw(10) <<  hodan[i].mahodan;
		cout << setw(21) <<  hodan[i].tenchuho;
		cout << setw(9) <<  hodan[i].diachi;
		cout << setw(12) <<  hodan[i].thanhvien;
		cout << setw(22) <<  hodan[i].thunhap;
		cout << endl;
		}
	}
}
int main() {
hoDan hodan[100];
int n;
cout << "Nhap so ho dan: "; cin >> n;
nhapDanhSach(hodan, n);
in_danh_sach(hodan,n);
cout << "\n\n\tDANH SACH HO DAN SAU KHI SAP XEP\n";
sapxep(hodan,n);
in_danh_sach(hodan,n);
cout << "\n\nDANH SACH HO DAN CO THU NHAP < 5000000\n";
kt_hodan(hodan, n);
return 0;
}