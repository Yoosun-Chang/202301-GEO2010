//0529
// Eg 10.6
//시간에 대해 덧셈, 뺄셈, 곱셈 연산자와 <<연산자 오버로딩
/*
#include <iostream>
using namespace std;


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
	Time operator-(const Time& t);
	Time operator*(double mult);
	friend Time operator*(double m, Time &t)
	{
		return t * m;
	} //인라인 정의
	friend ostream& operator<<(ostream& os, const Time& t);
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

Time Time::operator-(const Time& t)
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double mult)
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

ostream& operator <<(ostream& os, const Time& t)
{
	os << t.hours << "시간, " << t.minutes << "분";
	return os;
}

int main()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida와 Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida*1.17: " << temp << endl;
	cout << "10*Tosca: " << 10 * tosca << endl;

	return 0;
}
*/

//대입연산자
//Eg 10.8
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
	Geoinfo& operator=(const Geoinfo& temp);
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

Geoinfo& Geoinfo::operator=(const Geoinfo& temp)
{
	if (this == &temp) return *this;
	delete[] pname;
	length = temp.length + 1;
	pname = new char[length];
	strcpy_s(pname, length, temp.pname);
	id = temp.id;
	age = temp.age;
	return *this;
}

void Geoinfo::ShowInfo() {
	cout << pname << endl;
	cout << id << endl;
	cout << age << endl;
	cout << endl << endl;
}

int main()
{
	Geoinfo x("Geo",10000,20);
	Geoinfo y("KyungHo", 20000, 20);
	Geoinfo z(x);
	x.ShowInfo();
	y.ShowInfo();
	x.ShowInfo();

	y = y;
	y.ShowInfo();

	y = x;
	y.ShowInfo();
	return 0;
}