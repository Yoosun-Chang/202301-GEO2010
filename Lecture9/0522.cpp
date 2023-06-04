//Eg 9.3 복사 생성자1
//오류남
/*
#include <iostream>
using namespace std;
class Geoinfo
{
private:
char* pname;
int id;
int age;
int length;
public:
Geoinfo();
Geoinfo(const char* ch, int a, int b);
~Geoinfo();
void ShowInfo();
};

Geoinfo::Geoinfo()
{
length = 1;
pname = new char[length];
strcpy_s(pname, 20, "");
id = 0;
age = 1;
}

Geoinfo::Geoinfo(const char* ch, int a, int b) {
length = strlen(ch) + 1;
pname = new char[length];
strcpy_s(pname, length, ch);
id = a;
age = b;
}

Geoinfo::~Geoinfo() {
delete[] pname;
length = 0;
pname = NULL;
}

void Geoinfo::ShowInfo() {
cout << pname << endl;
cout << id << endl;
cout << age << endl;
cout << endl << endl;
}

int main()
{
Geoinfo x("Geo Kim", 10000, 20);
Geoinfo y(x);
x.ShowInfo();
y.ShowInfo();
return 0;
}
*/

//Eg 9.4 복사 생성자2

#include <iostream>
using namespace std;
class Geoinfo
{
private:
char* pname;
int id;
int age;
int length;
public:
Geoinfo();
Geoinfo(const char* ch, int a, int b);
~Geoinfo();
Geoinfo(const Geoinfo& obj);
void ShowInfo();
};

Geoinfo::Geoinfo()
{
length = 1;
pname = new char[length];
strcpy_s(pname, length, "");
id = 0;
age = 1;
}

Geoinfo::Geoinfo(const char* ch, int a, int b) {
length = strlen(ch) + 1;
pname = new char[length];
strcpy_s(pname, length, ch);
id = a;
age = b;
}

Geoinfo::~Geoinfo() {
delete[] pname;
length = 0;
pname = NULL;
}

Geoinfo::Geoinfo(const Geoinfo& obj) {
length = obj.length;
pname = new char[length];
strcpy_s(pname, length, obj.pname);
id = obj.id;
age = obj.age;
}

void Geoinfo::ShowInfo() {
cout << pname << endl;
cout << id << endl;
cout << age << endl;
cout << endl << endl;
}

int main()
{
Geoinfo x("Geo", 10000, 20);
Geoinfo y("KyungHo", 10000, 20);
Geoinfo z(x);
x.ShowInfo();
y.ShowInfo();
x.ShowInfo();
return 0;
}
