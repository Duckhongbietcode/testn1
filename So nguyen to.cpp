#include<iostream>
using namespace std;


bool check(int n){
    int tong = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i == 0) 
            tong +=i;
    }
    	if(tong == n)
			 return true; 
	return false;
}
int main(){
    int n;
    cout <<"Nhap gia tri cho n =  ";
    cin >> n;
    if(check(n) )
        cout <<n<<" la so hoan hao";
    else
        cout <<n<<" khong la so hoan hao";
        cout <<endl ;
    return 0;
}
