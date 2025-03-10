//Đề: Tính N!
#include<iostream>
using namespace std;
int giaithua(int n){
    if(n < 2){ // 1 có nhỏ hơn 2 hay không?
        return 1; // thực hiện dòng này
    }else{//không thực hiện các dòng dưới này
    	return n * giaithua(n - 1);
	}
}
int main(){
	int n;
	cout<<"Nhap n: "; // 5
	cin>>n;
	cout<<n<<"! = "<<giaithua(n);
    return 0;
}