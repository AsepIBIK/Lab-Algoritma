// unary => satu buah operand, contoh : 5
// unary => dua buah operand, Contoh : 5 + 10
// unary => Satu tiga operand, contoh : (5 + 10) - 5

#include <iostream>
using namespace std;

int main () {
	int a, b, c = 0, d = 0;
	
	cout << "Masukkan nilai A: ";
	cin >> a;
	cout << "Masukkan nilai B: ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Hasil nilai C dari A % B = " << c << endl;
	cout << "Hasil nilai D dari A * B = " << d << endl;
	
	return 0;
}
