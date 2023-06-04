//생성자, 디폴트매개변수
//1번 방법
/*
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0)
	{
		x = _x, y = _y;
	}
	void ShowData()
	{
		cout << x << ' ' << y << endl;
	}
};

int main()
{
	Point p1;
	p1.ShowData(); // Point(0,0)과 같음

	Point p2(10, 20);
	p2.ShowData();

	Point p3(10); //Point(10,0)과 같음
	p2.ShowData();

	return 0;
}
*/

//2번 방법
/*
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0);
	void ShowData();
};
Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Point::ShowData()
{
	cout << x << " " << y << endl;
}
int main()
{
	Point p1;
	p1.ShowData(); // Point(0,0)과 같음

	Point p2(10, 20);
	p2.ShowData();

	Point p3(10); //Point(10,0)과 같음
	p2.ShowData();

	return 0;
}
*/

//1번 방법 심화
/*
#include<iostream>
using namespace std;

class Geoinfo {
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo();
	Geoinfo(const char* ch, int a, int b);
	void ShowInfo();
};

Geoinfo::Geoinfo() {
	strcpy_s(name, 20, "undefined");
	id = 0;
	age = 1;
}
Geoinfo::Geoinfo(const char* ch, int a, int b) {
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo() {
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main() {
	Geoinfo x("Geo", 100000, 20);
	Geoinfo y("kyung_ho", 200000, 20);
	Geoinfo z;
	x.ShowInfo();
	y.ShowInfo();
	z.ShowInfo();
	return 0;

}
*/


//1번 방법 심화
/*
#include<iostream>
using namespace std;

class Geoinfo {
private:
   char name[20];
   int id;
   int age;
public:
   Geoinfo() {
      strcpy_s(name, 20, "undefined");
      id = 0;
      age = 1;
   };
   Geoinfo(const char* ch, int a, int b) {
      strcpy_s(name, 20, ch);
      id = a;
      age = b;
   
   };
   void ShowInfo();
};


void Geoinfo::ShowInfo() {
   cout << name << endl;
   cout << id << endl;
   cout << age << endl;
}

int main() {
   Geoinfo x("Geo", 100000, 20);
   Geoinfo y("kyung_ho", 200000, 20);
   Geoinfo z;
   x.ShowInfo();
   y.ShowInfo();
   z.ShowInfo();
   return 0;

}
*/

//생성자 오버로딩
/*
#include <iostream>
using namespace std;

class Geoinfo
{
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo();
	Geoinfo(const char* ch, int a, int b);
	void ShowInfo();
};

Geoinfo::Geoinfo()
{
	strcpy_s(name, 20, "undifined");
	id = 0;
	age = 1;
}

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo() {
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x("Geo", 100000, 20);
	Geoinfo y("kyung_ho", 200000, 20);
	Geoinfo z;
	x.ShowInfo();
	y.ShowInfo();
	z.ShowInfo();
	
	return 0;
}
*/

//생성자 오버로딩(디폴트 매개변수와 함수 오버로딩을 이용해서 함수 하나로 구현
/*
#include <iostream>
using namespace std;

class Geoinfo
{
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo(const char* ch="undifined", int a=0, int b=1);
	void ShowInfo();
};


Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo() {
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x("Geo", 100000, 20);
	Geoinfo y("kyung_ho", 200000, 20);
	Geoinfo z;
	x.ShowInfo();
	y.ShowInfo();
	z.ShowInfo();

	return 0;
}
*/

//Lab 8.1
/*
#include <iostream>
using namespace std;
class Time
{
private:
	int s, m, h;
public:
	Time(int _h = 0, int _m = 0, int _s = 0);
	void ShowTime();
	void ShowTimeinSec();
};

Time::Time(int _h, int _m, int _s)
{
	s = _s;
	m = _m;
	h = _h;
}

void Time::ShowTime()
{
	cout << h << "시 " << m << "분 " << s << "초" << endl;
}

void Time::ShowTimeinSec() 
{
	cout << s + m * 60 + h * 60 * 60 << endl;
}

int main()
{
	Time time1(9);
	Time time2(9, 10);
	Time time3(9, 10, 11);

	time1.ShowTime();
	time2.ShowTime();
	time3.ShowTime();
	cout << "=====================" << endl;
	time1.ShowTimeinSec();
	time2.ShowTimeinSec();
	time3.ShowTimeinSec();
	return 0;
}
*/

//Eg 8.7.1 생성자와 동적 할당
/*
#include <iostream>
using namespace std;

class Person
{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name, const char* _phone, int _age);
	void ShowData();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	int len1 = strlen(_name) + 1;
	name = new char[len1];
	strcpy_s(name, len1, _name);

	int len2 = strlen(_phone) + 1;
	phone = new char[len2];
	strcpy_s(phone, len2, _phone);

	age = _age;
}

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

int main()
{
	Person p("Kim", "010-1234-1234", 20);
	p.ShowData();
	return 0;
}
*/

//생성자와 동적할당 + 메모리 해제
/*
#include <iostream>
using namespace std;

class Person
{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name, const char* _phone, int _age);
	void ShowData();
	void DellMemory();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	int len1 = strlen(_name) + 1;
	name = new char[len1];
	strcpy_s(name, len1, _name);

	int len2 = strlen(_phone) + 1;
	phone = new char[len2];
	strcpy_s(phone, len2, _phone);

	age = _age;
}

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

void Person::DellMemory()
{
	delete[]name;
	delete[]phone;
}

int main()
{
	Person p("Kim", "010-1234-1234", 20);
	p.ShowData();
	return 0;
}
*/