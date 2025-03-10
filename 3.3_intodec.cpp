//Đề: Hàm đổi số thập phân ra nhị phân
#include <iostream>
#include <iomanip>
#include <cmath>
//DQ 01
using namespace std;
void f(int n){
	if(n < 2){ // 1 có nhỏ hơn 2 hay không có
	 	cout<<n; // thực hiện dòng in này
	}else{
		f(n / 2); // chia lấy số nguyên
		cout<<n % 2; // chia lấy phần dư 
	}
}
int main(){	
	int n=0;
	cout<<"Nhap n: "; // Nhập vào 1 số nguyên 
	cin>>n;
	cout<<n<<" doi sang nhi phan la: ";
	f(n);
	return 0;
}
//#include <iostream>
//using namespace std;
//int f(int n, int tam) {
//	if(n==0){
//		return tam;
//	}else{
//		tam = tam*10+n%10;
//		return f(n/10, tam);
//	}
//	f(5)
//	tam = 0 + 5

//}
//int main() {
//	int n=0;
//	cin>>n;
//	cout<< f(n,0);
//	return 0;
//}