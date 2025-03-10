//Đề: Tính tích P(n) = 1.3.5...(2n + 1) với n >= 0
#include<iostream>
using namespace std;
unsigned long long P(int n){
    if(n == 0){
    	return 1;
	}else{
		return P(n - 1) * (2*n + 1);
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n < 0);
	cout<<"Tich cua day so la: "<<P(n);
    return 0;
}