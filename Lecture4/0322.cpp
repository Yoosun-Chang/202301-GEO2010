//0322

#include <iostream>

int main() {
	using namespace std;

	// Eg 4.1
	/*
	int s, sum = 0;
	int score[8] = { 75,85,100,60,55,88,45,95 };

	for (s = 0; s < 8; s++)
	sum += score[s];
	cout << "Total : " << sum << endl;
	cout << "Average : " << (double)sum / 8 << endl;
	*/

	// ���� ����ǥ ū ����ǥ ���� Ȯ���ϱ�
	/*
	char ch0 = 'A';
	cout << ch0 << endl;

	char ch1 = "A"; // ����
	cout << ch1 << endl;
	*/

	// char ���ڿ� ���� ��� Ȯ���ϱ�
	/*
	char ch1[6] = "Apple";
	char ch2[6] = { 'A','p','p','l','e','\0'};

	cout << ch1 << endl;
	cout << ch2 << endl;
	*/

	/*
	char ch3[15] = "Good afternoon";
	char ch4[15] = "Good\0afternoon";
	cout << ch3 << endl;
	cout << ch4 << endl;
	*/

	// Eg 4.2
	/*
	const int arsize = 20;
	char name[arsize];
	char dessert[arsize];

	cout << "enter your name : " << endl;
	cin >> name;
	cout << "enter yout favorite dessert : " << endl;
	cin >> dessert;
	cout << "I will serve delicious " << dessert;
	cout << " for you, " << name << " ! " << endl;
	*/

	// Eg 4.3
	/*
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "enter your name : " << endl;
	cin.getline(name, ArSize);
	cout << "enter yout favorite dessert : " << endl;
	cin.getline(dessert, ArSize);
	cout << "I will serve delicious " << dessert;
	cout << " for you, " << name << " ! " << endl;
	*/

	// Eg 4.4
	/*
	const int FST = 4;
	const int SND = 3;
	int f, s;
	int sum = 0;
	int score[FST][SND] = {
	{65, 70, 55},
	{75, 85, 79},
	{98, 92, 88},
	{80, 82, 89} };

	for (s = 0; s < SND; s++) {
		sum = 0;
		for (f = 0; f < FST; f++)
		{
			sum += score[f][s];
		}
		cout << s + 1 << " total = " << sum << " , average = " << (double)sum / FST << endl;
	}
	*/

	// ���� ���� 6.3
	/*
	int a[5];
	int max, i;
	cout << "������ ������ 5���� �Է��϶�\n";
	for (i = 0; i <= 4; i++) 
		cout << "a[" << i << "] ->\n";
		cin >> a[i];
	
	
	max = a[0];

	for (i = 1; i < 5; i++)
		if (a[i] > max)
			max = a[i];
			*/

// ���̿� ���� �Է¹޾� �簢���� �ѷ����̿� ���̸� ����Ͻÿ�. 
/*
int a, b, length, area;
cout << "���̿� ���� �Է��Ͻÿ� : "<< endl;
cin >> a >> b;
length = 2 * (a + b);
area = a * b;

cout << "�簢���� �ѷ�: " << length << " �簢���� ����: " << area;
*/

// �Է��� ���� ������ ����Ͻÿ�. (����� ����� ��)
/*
int a;
cout << "���� �Է��Ͻÿ�: ";
cin >> a;

while (a != 0) { 12
	cout << a % 10; 
	a = a / 10;  
}
*/

// �־��� �迭���� ���� ū ���� ���� ��, ���� ū �󵵼��� ã�Ƽ� ����Ͻÿ�.
/*
int nums[10] = { 1,2,3,5,5,5,6,6,8,9 };
int max = nums[0];
int min = nums[0];


for (int i = 1; i <= 9; i++) {
	if (nums[i] > max)
		max = nums[i];
}
cout << "max : " << max<<endl;
for (int i = 1; i <= 9; i++) {
	if (nums[i] < min)
		min = nums[i];
}
cout << "min : " << min;

*/
// For ���� �̿��Ͽ� , �־��� �ؼ��� �ŵ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ� ��, pow �Լ��� ������� ����
/*
int a, b;
int c = 1;
cout << "Enter the base: " << endl;
cin >> a;

cout << "Enter the exponent: " << endl;
cin >> b;

for (int i = 1; i <= b; i++)
c *= a;

cout << a << "^" << b << "=" << c;
*/

//
/*
int num; //���� ����
int max = 0;
cout << "Print the largest number during a series of input (quit: negative number)" << endl;
while (true)
{
	cout << "Input any positive number: " << endl;
	cin >> num;
	if (num < 0) break; //-1�϶� ����
	if (num > max)
	{
		max = num;
		cout << "The largest number is " << max << endl;
	}
	else cout << "increase your number more than" << max - num << endl; //�������
}
*/


return 0;
}

