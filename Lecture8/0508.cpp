//0508

/*
// Eg 8.1.1
// 오류 발생 이유 찾아라~
#include<iostream>
using namespace std;
const int SIZE = 20;

class Geoinfo
{
char name[SIZE];
int id;
int age;
public:
void ShowInfo();
};

void Geoinfo::ShowInfo()
{
cout << "name: " << name << endl;
cout << "id: " << id << endl;
cout << "age: " << age << endl;
}

int main()
{
Geoinfo p = { "kim",200227,20 };
p.ShowInfo;

return 0;
}
*/
//class는 구현 잘 됨 main함수에서 p객체 생성하고 초기화할때 외부접근이 허용되지 않음 => 오류
//class를 기반으로 객체를 생성하는데 객체에 대한 초기화를 어떻게 효율적으로 할 것인지가 중요함

// Eg 8.1.2
/*
#include<iostream>
using namespace std;
const int SIZE = 20;

class Geoinfo
{
char name[SIZE];
int id;
int age;
public:
void ShowInfo();
void SetData(const char* _name, int _id, int _age);
};

void Geoinfo::ShowInfo()
{
cout << "name: " << name << endl;
cout << "id: " << id << endl;
cout << "age: " << age << endl;
}

void Geoinfo::SetData(const char* _name, int _id, int _age)
{
strcpy_s(name, 20, _name);
id = _id;
age = _age;
}

int main()
{
Geoinfo p;
p.SetData("kim",200227,20);
p.ShowInfo();

return 0;
}
*/

// Eg 8.1.3
/*
#include <iostream>
using namespace std;

class AAA
{
int i, j;
public:
//생성자 부분
//주석처리하면 이상한값 나옴
AAA()
{
cout << "생성자 호출" << endl;
i = 10, j = 20;
}

void ShowData()
{
cout << i << ' ' << j << endl;
}
};

int main()
{
AAA aaa; //클래스이름.객체이름
aaa.ShowData();
return 0;
}
*/


// Eg 8.2
/*
#include<iostream>
using namespace std;

class Geoinfo
{
private:
char name[20];
int id;
int age;
public:
Geoinfo();
void ShowInfo();
};

Geoinfo::Geoinfo()
{
strcpy_s(name, 20, "Geo");
id = 10000;
age = 20;
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
x.ShowInfo();
return 0;
}
*/

// Eg 8.3
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
Geoinfo x("Geo", 11111, 20);
Geoinfo y("Kyungho", 22222, 20);
x.ShowInfo();
y.ShowInfo();
return 0;
}
*/

// Eg 8.4.1
/*
#include <iostream>
using namespace std;

class Point
{
int x, y;
public:
Point(int _x, int _y)
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
Point p1(10, 20); //10과 20을 인자로 받는 생성자 호출

p1.ShowData();

//오류나서 주석처리
//Point p2; //void 생성자 호출
//p2.ShowData();
return 0;
}
*/
//Error : no appropriate default constructor available
//프로그래머가 정의해 놓은 생성자가 하나라도 존재하면,
//default 생성자는 자동으로 삽입되지 않음!!

// Eg 8.4.2
/*
#include <iostream>
using namespace std;

class Point
{
int x, y;
public:
Point()
{
x = y = 0;
}
Point(int _x, int _y)
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
Point p1(10, 20); //10과 20을 인자로 받는 생성자 호출

p1.ShowData();

Point p2; //void 생성자 호출
p2.ShowData();
return 0;
}
*/
