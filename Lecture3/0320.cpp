//0320

#include <iostream>
int main() {
	using namespace std;

	// Eg 3.6
	/*
	int num;
	do {
	cout << "Enter the number (if zero,stop) : ";
	cin >> num;
	cout << "You entered " << num<<endl;
	} while (num != 0);
	cout << "The number is " << num << ". So terminate the loop." << endl;
	*/

	// Eg 3.7 절대값 구하기
	/*
	int num;

	cout << "Enter the number : ";
	cin >> num;

	if (num < 0)
	num = -num;

	cout << " The absolute value is " << num << endl;
	*/

	// Eg 3.8 짝홀수 판별하기
	/*
	int num;

	cout << "Enter the number : ";
	cin >> num;

	if (num % 2 == 1)
	cout << num << " is odd number." << endl;
	else
	cout << num << " is even number." << endl;
	*/

	// Lab 3.8
	/*
	int num1, num2;

	cout << "Enter the number1 : ";
	cin >> num1;

	cout << "Enter the number1 : ";
	cin >> num2;

	if (num1 > num2)
	cout << "최대값 : " << num1;
	else
	cout << "최대값 : " << num2;
	*/

	// Eg 3.9
	/*
	int val = 85;
	char level;
	switch (val / 10) {
	case 9: level = 'A'; break;
	case 8: level = 'B'; break;
	case 7: level = 'C'; break;
	default: level = 'D';
	}
	cout << "Hazard value " << val << " corresponds to level " << level << endl;
	*/
	 // Eg 3.10
	/*
	int total = 0;
	int i = 1;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0)
			break;
		total += i;
	}

	cout << "When i = " << i << ", escape the loop" << endl;
	cout << "total: " << total << endl;
	*/
	return 0;
}