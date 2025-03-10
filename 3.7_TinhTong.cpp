//Đề: Tính S(n) = 1^2 + 2^2 + 3^2 +...+ n^2 với n > 0;
#include<iostream>
#include<cmath>
using namespace std;
unsigned long long sum(int n){
	if(n == 0){ //kiểm tra 0 có bằng 0 hay không? có
		return n;//trả về n || không thực hiện dòng này
	}else{
		return sum(n - 1) + pow(n,2); //muốn dùng hàm pow phải khai báo thư viện cmath
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n (n > 0): ";
		cin>>n;
	}while(n <= 0);
	cout<<"S = 1^2 + 2^2 + 3^2 +....+"<<n<<"^2 ="<<sum(n);
	return 0;
}
