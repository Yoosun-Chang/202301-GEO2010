//0410
#include <iostream>
using namespace std;


//�Է�, ��ȯ x
/*
void simple();
int main() {
cout << "main() will call the simple() function:\n";
simple();
return 0;
}

void simple() {
cout << "I'm but a simple function.\n";
}
*/

//�Է�, ��ȯ o
/*
float c2f(float);
int main() {
float tc;
cout << "���� �µ��� �Է��Ͻÿ�." << endl;
cin >> tc;
float tf = c2f(tc);
cout << " ���� " << tc << " ���� ";
cout << "ȭ���� " << tf << " �� �̴�." << endl;
return 0;
}

float c2f(float t) {
return 1.8 * t + 32.0;
}
*/

//������ ���� �ڵ�
/*
void sumtwonum(int i, int j);
int main() {
int x = 5, y = 8;
sumtwonum(x, y);
return 0;
}
void sumtwonum (int i, int j) {
int f = i + j;
cout << f << endl;
}
*/

//=>��ȯ �ִ°ɷ� ��ġ��?
/*
int sumtwonum(int i, int j);
int main() {
int x = 5, y = 8;
int z = sumtwonum(x, y);
cout << z << endl;
return 0;
}
int sumtwonum(int i, int j) {
int f = i + j;
return f;
//reutrn i+j;
}
*/

// �Լ��� �Ⱦ��� �������ϴ�!
/*
int main() {
int total;
int a = 10;
int i;

//1~10
total = 0;
for (i = 1; i <= a; i++) {
total += i;
}
cout << total << endl;

//1~100
total = 0;
for (i = 1; i <= 100; i++) {
total += i;
}
cout << total << endl;

//1~5
total = 0;
for (i = 1; i <= 5; i++) {
total += i;
}
cout << total << endl;
}
*/


//�׷� �Լ��� �����ϰ�~
/*
void sum(int n);//1���� n������ ��

int main() {
sum(10);
return 0;
}
void sum(int n) {
int total = 0;
for (int i = 1; i <= n; i++) {
total += i;
}
cout << total << endl;
}
*/

//Eg 5.3
/*
void output(int taken);

int main() {
int given = 1;
cout << "the address of the given value = " << &given << endl;
output(given);
return 0;
}

void output(int taken) {
cout << "the address of the taken value = " << &taken << endl;
}
*/

/*
int main() {
int a = 10, b = 20;
cout << "a=> " << a << " b=> " << b << endl;
int temp;
temp = a;
a = b;
b = temp;
cout << "a=> " << a << " b=>" << b << endl;
return 0;
}
*/

//Eg 5.4
/*
void swap(int a, int b);

int main() {
int a = 1, b = 2;
cout << "before call: a= " << a << " b=> " << b << endl;
swap(a, b);
cout << "after call: a= " << a << " b=> " << b << endl;
return 0;
}
// ���� ������ ���� ��?

void swap(int a, int b) {
int temp;
temp = a;
a = b;
b = temp;
}
*/

//Lab 5.2
/*
void swap(int* a, int* b);

int main() {
int a = 1, b = 2;
cout << "before call: a= " << a << " b=> " << b << endl;
swap(&a, &b);
cout << "after call: a= " << a << " b=> " << b << endl;
return 0;
}
// ���� ������ ���� ��?

void swap(int* a1, int* b1) {
int temp;
temp = *a1;
*a1 = *b1;
*b1 = temp;
}
*/

//������ ���� ���޹��
/*
int main() {
int a = 10;
int& b = a;
cout << "a = " << a << " b = " << b << endl;
b += 300;
cout << "b = " << b << endl;
cout << "a = " << a << endl;
return 0;
}
*/

// Eg 5.5
/*
void swap(int &a, int &b);

int main() {
int a = 1, b = 2;
cout << "before call: a= " << a << " b=> " << b << endl;
swap(a, b);
cout << "after call: a= " << a << " b=> " << b << endl;
return 0;
}
// ���� ������ ���� ��?

void swap(int &a, int &b) {
int temp;
temp = a;
a = b;
b = temp;
}
*/