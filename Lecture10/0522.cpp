//0522
//10장 시작
//Eg 10.1.1 (+) 연산자 오버로딩
//연산자 오버로딩 안쓴 코드
/*
#include <iostream>
using namespace std;
class Complex {
private:
int real;
int image;
public:
Complex(int r = 0, int i = 0);
void ShowComplex();
Complex Sum(Complex rvalue);
};

void Complex::ShowComplex()
{
if (image > 0)
cout << "(" << real << " + " << image << "i)" << endl;
else if (image < 0)
cout << "( " << real << image << "i)" << endl;
else
cout << real << endl;
}

Complex::Complex(int r, int i)
{
real = r;
image = i;
}

Complex Complex::Sum(Complex rvalue)
{
Complex res;
res.real = this->real + rvalue.real;
res.image = this->image + rvalue.image;
return res;
}

int main()
{
Complex x(3, 4), y(1, 2);
Complex z;
z = x.Sum(y);
x.ShowComplex();
y.ShowComplex();
z.ShowComplex();
return 0;
}
*/

//Eg 10.1.2 (+) 연산자 오버로딩
/*
#include <iostream>
using namespace std;
class Complex {
private:
int real;
int image;
public:
Complex(int r = 0, int i = 0);
void ShowComplex();
Complex operator+(Complex rvalue);
};

void Complex::ShowComplex()
{
if (image > 0)
cout << "(" << real << " + " << image << "i)" << endl;
else if (image < 0)
cout << "( " << real << image << "i)" << endl;
else
cout << real << endl;
}

Complex::Complex(int r, int i)
{
real = r;
image = i;
}

Complex Complex::operator+(Complex rvalue)
{
Complex res;
res.real = real + rvalue.real;
res.image = image + rvalue.image;
return res;
}

int main()
{
Complex x(3, 4), y(1, 2);
Complex z;
z = x + y; // z= x.operator+(y);
x.ShowComplex();
y.ShowComplex();
z.ShowComplex();
return 0;
}
*/

//Eg 10.2
//시간에 대해 덧셈 연산을 하는 다음 프로그램을 실행하시오.
//오버로딩 전
/*
#include <iostream>
using namespace std;

//Time Class
class Time
{
private:
int hours;
int minutes;
public:
Time();
Time(int h, int m = 0);
void AddMin(int m);
void AddHr(int h);
void Reset(int h = 0, int m = 0);
Time Sum(const Time& t);
void Show();
};

Time::Time()
{
hours = minutes = 0;
}

Time::Time(int h, int m)
{
hours = h;
minutes = m;
}

void Time::AddMin(int m)
{
minutes += m;
hours += minutes / 60;
minutes %= 60;
}

void Time::AddHr(int h)
{
hours += h;
}

void Time::Reset(int h, int m)
{
hours = h;
minutes = m;
}

Time Time::Sum(const Time& t)
{
Time sum;
sum.minutes = minutes + t.minutes;
sum.hours = hours + t.hours + sum.minutes / 60;
sum.minutes %= 60;
return sum;
}

void Time::Show()
{
cout << hours << "시간, " << minutes << "분";
}

int main()
{
Time planning;
Time coding(2, 40);
Time fixing(5, 55);
Time total;

cout << "planning time = ";
planning.Show();
cout << endl;

cout << "coding time = ";
coding.Show();
cout << endl;

cout << "fixing time = ";
fixing.Show();
cout << endl;

total = coding.Sum(fixing);
cout << "coding.Sum(fixing) = ";
total.Show();
cout << endl;
return 0;
}
*/


//Eg 10.3
//시간에 대해 덧셈 연산을 하는 다음 프로그램을 실행하시오.
//오버로딩 후
/*
#include <iostream>
using namespace std;

//Time Class
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t);
	void Show();
};

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time& t)
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

void Time::Show()
{
	cout << hours << "시간, " << minutes << "분";
}

int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing; //연산자 표기
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	cout << endl;

	total = morefixing.operator+(total); //함수표기
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;
	return 0;
}
*/

//교재 452p
/*
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex operator+(Complex rightHand);
	Complex operator-(const Complex& rightHand) const;
	Complex operator-() const;
};

void Complex::ShowComplex()
{
	if (image > 0)
		cout << "(" << real << "+" << image << "i)" << endl;
	else if (image < 0)
		cout << "(" << real << image << "i)" << endl;
	else
		cout << real << endl;
}

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex Complex::operator+(Complex rightHand) //값에 의한 전달 방식
{
	Complex res;
	res.real = this->real + rightHand.real;
	res.image = this->image + rightHand.image;
	return res;
}

Complex Complex::operator-(const Complex &rightHand) const //참조에 의한 전달 방식
{
	Complex res;
	res.real = this->real - rightHand.real;
	res.image = this->image - rightHand.image;
	return res;
}

Complex Complex::operator-() const //단항연산자이므로 매개변수 기술X
{
	Complex res;
	res.real = -real;
	res.image = -image;
	return res;
}

int main()
{
	Complex x(10, 20), y(20, 40), z;

	cout << "--두 Complex 객체에 대한 덧셈--" << endl;
	z = x + y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "--두 Complex 객체에 대한 뺄셈--" << endl;
	z = x - y; //z=x.operator-(y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "--Complex 객체의 부호 변경--" << endl;
	z = -x;
	x.ShowComplex();
	z.ShowComplex();
}
*/

//프렌드
/*
class Time {
	...
public:
	...
		friend Time operator*(double m, comst Time& t);
	...
};

Time operator*(double m, const Time& t) //friend 키워드 사용 안함
{
	Time result;
	long totalminutes = t.hours * m * 60 + t.minutes * m;
	reult.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
*/

//두 복소수를 더하는 프렌드 함수(교재 예제)
/*
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	friend Complex Sum(Complex leftHand, Complex rightHand);
};

void Complex::ShowComplex()
{
	cout << "( " << real << " + " << image << "i )" << endl;
}

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex Sum(Complex leftHand, Complex rightHand) //일반함수
{
	Complex res;
	res.real = leftHand.real + rightHand.real;
	res.image = leftHand.image + rightHand.image;
	return res;
}

int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;
	z = Sum(x, y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
*/

//자신의 값을 1만큼 증가시키는 멤버함수(교재 예제)
/*
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex AddOnePrefix();
	Complex AddOnePostfix();
};

void Complex::ShowComplex()
{
	cout << "( " << real << " + " << image << "i )" << endl;
}

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex Complex::AddOnePrefix()
{
	++this->real;
	++this->image;
	return *this;
}

Complex Complex::AddOnePostfix()
{
	Complex temp;
	temp = *this;
	++this->real;
	++this->image;
	return temp;
}

int main()

{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout << "---선행처리---\n";
	z = x.AddOnePrefix();
	x.ShowComplex();
	z.ShowComplex();

	cout << "---후행처리---\n";
	z = y.AddOnePostfix();
	y.ShowComplex();
	z.ShowComplex();

	return 0;
}
*/
//자신의 값을 1만큼 증가시키는 프렌드함수(교재 예제)
/*
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	friend Complex &AddOnePrefix(Complex &Operand);
	friend Complex AddOnePostfix(Complex& Operand);
};

void Complex::ShowComplex()
{
	cout << "( " << real << " + " << image << "i )" << endl;
}

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex &AddOnePrefix(Complex& Operand)
{
	++Operand.real;
	++Operand.image;
	return Operand;
}

Complex AddOnePostfix(Complex& Operand)
{
	Complex temp;
	temp = Operand;
	++Operand.real;
	++Operand.image;
	return temp;
}

int main()

{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout << "---선행처리---\n";
	z = AddOnePrefix(x);
	x.ShowComplex();
	z.ShowComplex();

	cout << "---후행처리---\n";
	z = AddOnePostfix(y);
	y.ShowComplex();
	z.ShowComplex();

	return 0;
}
*/