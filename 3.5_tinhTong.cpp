//Đề: Tính tổng S(n) = 1 + 3 + 5 +....+(2n + 1) voi n >= 0
#include<iostream>
using namespace std;
int sum(int n){
	if(n == 0){
		return 1;
	}else{
		return sum(n - 1) + (2*n + 1);
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n; // 7
	}while(n < 0);
	cout<<"S = 1 + 3 + 5 + ... + "<<(2*n)+1<<" = "<<sum(n);
    return 0;
}