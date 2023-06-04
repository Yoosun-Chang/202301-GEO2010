//0517

//Eg 8.13 객체 배열
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
void ShowInfo() const;
};

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
strcpy_s(name, 20, ch);
id = a;
age = b;
}

void Geoinfo::ShowInfo() const
{
cout << name << endl;
cout << id << endl;
cout << age << endl;
}

int main()
{
Geoinfo x[2] = {
Geoinfo("Gewo",10000,20),
Geoinfo("Kyung-Ho",20000,20)
};
for (int i = 0; i < 2; i++)
{
x[i].ShowInfo();
}
return 0;
}
*/

//Eg 8.14 객체 배열
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
void ShowComplex() const;
};

Complex::Complex(int r, int i)
{
real = r;
image = i;
}

void Complex::ShowComplex() const
{
cout << "(" << real << " + " << image << "i)" << endl;
}

int main()
{
Complex arr[4] = {
Complex(1,2),
Complex(3,4),
Complex(5,6),
Complex(7,8)
};
Complex* ptr = arr;
for (int i = 0; i < 4; i++) {
arr[i].ShowComplex();
//(ptr + i)->ShowComplex();
//ptr[i].ShowComplex();
}
return 0;
}
*/

//Lab 8.2
/*
#include <iostream>
using namespace std;

class Rectangle
{
private:
int width, height;

public:
Rectangle(int a, int b);
double GetArea();
double GetGirth();
};

class Circle
{
private:
int r;
public:
Circle(int a);
double GetArea();
double GetGirth();
};

Rectangle::Rectangle(int a, int b)
{
width = a;
height = b;
}

double Rectangle::GetArea()
{
double area = width * height;
return area;
}

double Rectangle::GetGirth()
{
double girth = 2*(width + height);
return girth;
}

Circle::Circle(int a)
{
r = a;
}

double Circle::GetArea()
{
double const pi = 3.141592;
double area = pi * r * r;
return area;
}

double Circle::GetGirth()
{
double const pi = 3.141592;
double girth = 2 * r * pi;
return girth;
}

int main()
{
Rectangle rec(3,4);
cout << "Area: " << rec.GetArea() << endl;
cout << "Girth: " << rec.GetGirth() << endl;

Circle cir(5);
cout << "Area: " << cir.GetArea() << endl;
cout << "Girth: " << cir.GetGirth() << endl;

return 0;
}
*/

//Eg 9.1 디폴트 복사 생성자
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

void Geoinfo::ShowInfo()
{
cout << name << endl;
cout << id << endl;
cout << age << endl;
}

int main()
{
Geoinfo x;
Geoinfo y("goe", 20000, 20);
Geoinfo z(y); // z.name = y.name
// z.id = y.id
// z.age = y.age
x.ShowInfo();
y.ShowInfo();
z.ShowInfo();

return 0;
}
*/

//9.2 디폴트 복사 생성자
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
Geoinfo(const Geoinfo& p);
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

Geoinfo::Geoinfo(const Geoinfo& p)
{
strcpy_s(name, 20, p.name);
id = p.id;
age = p.age;
}

void Geoinfo::ShowInfo()
{
cout << name << endl;
cout << id << endl;
cout << age << endl;
}

int main()
{
Geoinfo x;
Geoinfo y("goe", 20000, 20);
Geoinfo z(y); // Geoinfo z = y;
x.ShowInfo();
y.ShowInfo();
z.ShowInfo();

return 0;
}
*/