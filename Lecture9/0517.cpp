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

Geoinfo::Geoinfo(const Geoinfo& p) //복사 생성자
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
