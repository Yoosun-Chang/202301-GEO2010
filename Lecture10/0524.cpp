//0524
//Eg 10.4 시간에 대해 뺄셈과 곱셈 연산자를 오버로딩하는 프로그램을 실행하시오
/*
#include <iostream>
using namespace std;

//Time 클래스(연산자 오버로딩 이후)
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
Time operator+(const Time& t) const;
Time operator-(const Time& t);
Time operator*(double mult);
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

Time Time::operator+(const Time& t) const
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

void Time::Show()
{
cout << hours << "시간, " << minutes << "분";
}

int main()
{
Time weeding(4,35);
Time waxing(2, 47);
Time total;
Time diff;
Time adjusted;

cout << "weeding time = ";
weeding.Show();
cout << endl;

cout << "waxing time = ";
waxing.Show();
cout << endl;

cout << "total work time = ";
total = weeding + waxing; //연산자 표기
cout << "weeding + waxing = ";
total.Show();
cout << endl;

diff = weeding - waxing;
cout << "weeding time - waxing time = ";
diff.Show();
cout << endl;
Time morefixing(3, 28);

adjusted = total * 1.5;
cout << "adjusted work time = ";
adjusted.Show();
cout << endl;

return 0;
}
*/

//Eg 10.5
/*
#include<iostream>
using namespace std;

class coord
{
private:
	int x, y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	friend ostream& operator << (ostream& os, const coord& ob);
	friend istream& operator >> (istream& is, coord& ob);
};

ostream& operator<<(ostream& os, const coord& ob)
{
	os << "(" << ob.x << ", " << ob.y << ")" << endl;
	return os;
}

istream& operator>>(istream& is, coord& ob)
{
	cout << "Enter x and y values: ";
	is >> ob.x >> ob.y;
	return is;
}

int main()
{
	coord a;
	cin >> a;
	cout << a;

	return 0;
}
*/