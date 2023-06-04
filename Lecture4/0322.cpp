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

	// 작은 따옴표 큰 따옴표 차이 확인하기
	/*
	char ch0 = 'A';
	cout << ch0 << endl;

	char ch1 = "A"; // 에러
	cout << ch1 << endl;
	*/

	// char 문자열 선언 방식 확인하기
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

	// 교재 예제 6.3
	/*
	int a[5];
	int max, i;
	cout << "정수형 데이터 5개를 입력하라\n";
	for (i = 0; i <= 4; i++) 
		cout << "a[" << i << "] ->\n";
		cin >> a[i];
	
	
	max = a[0];

	for (i = 1; i < 5; i++)
		if (a[i] > max)
			max = a[i];
			*/

// 길이와 폭을 입력받아 사각형의 둘레길이와 넓이를 계산하시오. 
/*
int a, b, length, area;
cout << "길이와 폭을 입력하시오 : "<< endl;
cin >> a >> b;
length = 2 * (a + b);
area = a * b;

cout << "사각형의 둘레: " << length << " 사각형의 넓이: " << area;
*/

// 입력한 수의 역수를 출력하시오. (제어문을 사용할 것)
/*
int a;
cout << "수를 입력하시오: ";
cin >> a;

while (a != 0) { 12
	cout << a % 10; 
	a = a / 10;  
}
*/

// 주어진 배열에서 가장 큰 수와 작은 수, 가장 큰 빈도수를 찾아서 출력하시오.
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
// For 문을 이용하여 , 주어진 밑수의 거듭제곱 값을 구하는 프로그램을 작성하시오 단, pow 함수는 사용하지 말것
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
int num; //변수 선언
int max = 0;
cout << "Print the largest number during a series of input (quit: negative number)" << endl;
while (true)
{
	cout << "Input any positive number: " << endl;
	cin >> num;
	if (num < 0) break; //-1일때 종료
	if (num > max)
	{
		max = num;
		cout << "The largest number is " << max << endl;
	}
	else cout << "increase your number more than" << max - num << endl; //차이출력
}
*/


return 0;
}

