//0524
//Eg 10.4 �ð��� ���� ������ ���� �����ڸ� �����ε��ϴ� ���α׷��� �����Ͻÿ�
/*
#include <iostream>
using namespace std;

//Time Ŭ����(������ �����ε� ����)
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
cout << hours << "�ð�, " << minutes << "��";
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
total = weeding + waxing; //������ ǥ��
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