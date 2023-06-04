//0417
#include <iostream>
using namespace std;

//int main() {
// int gorp = 16;
// int chips = 12;
// /*
// const int* p_snack = &gorp;
//
// cout << *p_snack << endl;
//
// p_snack = &chips;
//
// cout << *p_snack << endl;
// */
//
//
// int* const p_snack = &gorp;
//
// cout << *p_snack << endl;
//
// //p_snack = &chips;
//
// cout << *p_snack << endl;
//
// return 0;
//}

//Eg. 5.6 함수 오버로딩
void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(double& a, double& b) {
	double temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1, b = 2;
	swap(a, b);
	cout << a << ", " << b << endl;

	double c = 0.1, d = 0.2;
	swap(c, d);
	cout << c << ", " << d << endl;
	return 0;
}
