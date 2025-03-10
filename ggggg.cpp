#include <iostream>
using namespace std;
//
//bool laTamGiac(int a, int b, int c) {
//    return (a + b > c && a + c > b && b + c > a);
//}

int main() {
    int a, b, c;
    cout << "Nhập do dai cac canh cua tam giac:\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << ((a + b > c && a + c > b && b + c > a) ? "Day la tam giac" : "Day khong phai la tam giac.") << endl;

    return 0;
}
