//0410
#include <iostream>
using namespace std;


//입력, 반환 x
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

//입력, 반환 o
/*
float c2f(float);
int main() {
float tc;
cout << "섭씨 온도를 입력하시오." << endl;
cin >> tc;
float tf = c2f(tc);
cout << " 섭씨 " << tc << " 도는 ";
cout << "화씨로 " << tf << " 도 이다." << endl;
return 0;
}

float c2f(float t) {
return 1.8 * t + 32.0;
}
*/

//교수님 설명 코드
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

//=>반환 있는걸로 고치기?
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

// 함수를 안쓰면 지저분하다!
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


//그럼 함수로 간단하게~
/*
void sum(int n);//1부터 n까지의 합

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
// 값이 변하지 않음 왜?

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
// 값이 변하지 않음 왜?

void swap(int* a1, int* b1) {
int temp;
temp = *a1;
*a1 = *b1;
*b1 = temp;
}
*/

//참조에 의한 전달방식
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
// 값이 변하지 않음 왜?

void swap(int &a, int &b) {
int temp;
temp = a;
a = b;
b = temp;
}
*/