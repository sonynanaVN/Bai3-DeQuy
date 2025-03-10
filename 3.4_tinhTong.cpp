//Đề: Tính tổng S(n) = 1 + 2 + 3 + ... + n với (n >= 0)
#include<iostream>
using namespace std;
int tong(int n){
    if(n == 1){
        return 1;
    }else{
    	return n + tong(n - 1);
	}
}
int main(){
    int n;
    do{
    	cout<<"Nhap n: ";
    	cin>> n;	
	}while(n < 0);
    cout<<"S = 1 + 2 + ... + "<<n<<" = "<<tong(n);
    return 0;
}