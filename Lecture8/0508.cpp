//0508

/*
// Eg 8.1.1
// ���� �߻� ���� ã�ƶ�~
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
//class�� ���� �� �� main�Լ����� p��ü �����ϰ� �ʱ�ȭ�Ҷ� �ܺ������� ������ ���� => ����
//class�� ������� ��ü�� �����ϴµ� ��ü�� ���� �ʱ�ȭ�� ��� ȿ�������� �� �������� �߿���

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
//������ �κ�
//�ּ�ó���ϸ� �̻��Ѱ� ����
AAA()
{
cout << "������ ȣ��" << endl;
i = 10, j = 20;
}

void ShowData()
{
cout << i << ' ' << j << endl;
}
};

int main()
{
AAA aaa; //Ŭ�����̸�.��ü�̸�
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
Point p1(10, 20); //10�� 20�� ���ڷ� �޴� ������ ȣ��

p1.ShowData();

//�������� �ּ�ó��
//Point p2; //void ������ ȣ��
//p2.ShowData();
return 0;
}
*/
//Error : no appropriate default constructor available
//���α׷��Ӱ� ������ ���� �����ڰ� �ϳ��� �����ϸ�,
//default �����ڴ� �ڵ����� ���Ե��� ����!!

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
Point p1(10, 20); //10�� 20�� ���ڷ� �޴� ������ ȣ��

p1.ShowData();

Point p2; //void ������ ȣ��
p2.ShowData();
return 0;
}
*/
