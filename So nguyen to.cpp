#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, dem=0;  
    cout <<"Nhap n = ";	cin >> n;  
    do
    {
        if(n%i == 0)  
		dem++; 
		i++;
    }
    while (i <= n);     
    if (dem==2) 
		cout << n <<" la so nguyen to" << endl;  
    else 
		cout << n <<"khong la so nguyen to" << endl;
}