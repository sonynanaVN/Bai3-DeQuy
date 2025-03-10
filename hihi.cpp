#include<iostream>
#include<cmath>
using namespace std;
float sum(int n){
	if(n == 0){
		return 0;
	}else{
		return ((float) n  / pow(2, n)) + sum(n - 1);
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Sum = "<<sum(n);
	return 0;
}