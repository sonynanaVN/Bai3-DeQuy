//Đề: Tính số Fibonacci
#include <iostream>
using namespace std;
int fib(int n) 
{
    if (n < 2)
    {
        return n;// ko thực hiện dòng này
    }else{
    	return fib(n - 1) + fib(n - 2);    	
	}
}
int main() 
{
	int n;	
	cout<<"Nhap n: ";
	cin>>n;
    cout <<"Fibonaci("<<n<<") = "<<fib(n);
    return 0;
}
