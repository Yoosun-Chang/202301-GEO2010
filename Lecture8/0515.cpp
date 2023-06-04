//Eg 8.8 소멸자
/*
#include <iostream>
using namespace std;

class AAA
{
public:
AAA()
{
cout << "생성자 호출" << endl;
}
~AAA()
{
cout << "소멸자 호출" << endl;
}
};

int main() {
AAA aaa1;
AAA aaa2;

return 0;
}
*/

//Eg 8.9 소멸자
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
Geoinfo(const char* ch, int a, int b);
~Geoinfo();
void ShowInfo();
};

Geoinfo::Geoinfo(const char* ch, int a, int b) {
strcpy_s(name, 20, ch);
id = a;
age = b;
cout << "Calling the constructor!" << endl;
}

Geoinfo::~Geoinfo() {
cout << "Calling the deconsturctor!" << endl;
}

void Geoinfo::ShowInfo() {
cout << name << endl;
cout << id << endl;
cout << age << endl;
}

int main() {
Geoinfo x("Geo", 10000, 20);
Geoinfo y("Kyung-Ho", 20000, 20);
x.ShowInfo();
y.ShowInfo();
return 0;
}
*/


//Eg 8.10 생성자, 소멸자와 동적 할당
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
~Person();
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

Person::~Person()
{
delete[]name;
delete[]phone;
}

void Person::ShowData()
{
cout << "name: " << name << endl;
cout << "phone: " << phone << endl;
cout << "age: " << age << endl;
}

int main()
{
Person p("Geo", "010-1234-1234", 20);
p.ShowData();


return 0;
}
*/

//Eg 8.11 객체 포인터
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
Geoinfo(const char* ch, int a, int b);
void ShowInfo();
};

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
Geoinfo x("Geo", 10000, 20);
Geoinfo y("Kyung-Ho", 20000, 20);
x.ShowInfo();
y.ShowInfo();

Geoinfo* ptr;
ptr = &x;
ptr->ShowInfo();
ptr = &y;
ptr->ShowInfo();
cout << sizeof(ptr) << endl; //????????????

return 0;
}
*/

//Eg 8.12 this 포인터 사용X
/*
#include <iostream>
using namespace std;

class Geoinfo
{
private:
int id;
int age;
public:
Geoinfo(int id, int age);
void ShowInfo();
};

Geoinfo::Geoinfo(int id, int age) {
id = id;
age = age;
}



void Geoinfo::ShowInfo() {
cout << id << endl;
cout << age << endl;
}

int main() {
Geoinfo x(10000, 49);
x.ShowInfo();

return 0;
}
*/


//Eg 8.12 this 포인터 사용
/*
#include <iostream>
using namespace std;

class Geoinfo
{
private:
int id;
int age;
public:
Geoinfo(int id, int age);
void ShowInfo();
};

Geoinfo::Geoinfo(int id, int age) {
this->id = id;
this->age = age;
}



void Geoinfo::ShowInfo() {
cout << this->id << endl;
cout << this->age << endl;
}

int main() {
Geoinfo x(10000, 20);
x.ShowInfo();

return 0;
}
*/