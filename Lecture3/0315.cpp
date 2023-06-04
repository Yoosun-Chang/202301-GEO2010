#include <iostream>

int main()
{
	using namespace std;

	// Eg 3.1
	/*
	int i;
	int total = 0;

	for (i = 1; i <= 10; i++) {
		total += i;
	}

	cout << "1부터 10까지의 합은 " << total << endl;
	*/

	// Eg 3.2
	/*
	cout << "값 5개의 합계와 평균을 구합니다." << endl;
	cout << "값 5개를 입력하십시오." << endl;
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
	cout << "값 " << i << ": ";
	cin >> number;
	sum += number;

	cout << "checking sum: " << sum << endl; //중간합산 결과 확인
	}

	cout << "값 5개가 모두 입력되었습니다." << endl;
	cout << "입력한 값 5개의 합계는 " << sum << "입니다." << endl;
	cout << "입력한 값 5개의 평균은 " << sum / 5 << "입니다." << endl; //자동형변환
	cout << "감사합니다." << endl;
	*/

	
	// Lab 3.1
	/*
	int even_num = 0;
	for (int i = 1; i <= 100; i++) {
	if (i % 2 != 0) {
	even_num += i;
	}

	}
	cout << "1부터 100까지 홀수의 합은 " << even_num << " 입니다.\n" << endl;
	*/

	//Lab 3.2
	/*
	int odd_num = 0;
	for (int i = 1; i <= 100; i++) {
	if (i % 2 == 0) {
	odd_num += i;
	}

	}
	cout << "1부터 100까지 짝수의 합은 " << odd_num << " 입니다." << endl;
	*/

	// Lab 3.1 , 3.2 교수님 코드
	/*
	int i;
	int sum = 0;
	//Lab 3.1. odd number
	//Lab 3.2. even number => i=2
	for (i = 1; i <= 100; i = i + 2) {
		//cout << i << endl;
		sum = sum + i;
	}
	cout << "Sum is " << sum << endl;
	*/

	// Lab 3.3
	/*
	int input;
	cout << " 원하는 단을 입력하시오 : " ;
	cin >> input;

	for (int i = 1; i <= 9; i++) {
	cout << input << " * " << i << " = " << input * i << endl;
	}
	*/


	// Lab 3.4
	/*
	int num = 1;
	for (int i = 1; i <= 7; i++) {

	num = num * 2;
	cout << num/2 << " "; //(num = num *2) /2
	}

	//for (int i = 1; i <= 7; i++) {
	//	cout << pow(2, i - 1) << " ";
	//}
	*/

	// Lab 3.5
	/*
	for (int i = 100; i >= 0; i -= 5) { // i=i-5
	cout << "섭씨" << i << "도 : " << "화씨: " << 1.8 * i + 32.0 << endl;
	}
	*/

	//Eg 3.3
	/*
	 for (int i = 2; i <= 9; i++)
	 for (int j = 1; j <= 9; j++)
	 cout << i << "*" << j << "=" << i * j << endl;
	 */

	//Eg 3.4
	/*
	 int i = 1;
	 int total = 0;
	
	 while (i <= 10) {
	 total += i;
	 i++;
	 }
	 cout << "1부터 10까지의 합은 " << total << endl;
	 */

	//Eg 3.5
	/*
	int num;
	cout << "Enter the number (if zero, stop) : ";
	cin >> num;
	while (num != 0) {
	 cout << "You entered " << num << endl;
	 cout << "Enter the number (if zero, stop) : ";
	 cin >> num;
	}
	cout << "The number is " << num << ". So terminate the loop." << endl;
	*/

	//Lab 3.6
	/*
	int i = 0;
	int total = 0;
	while (i <= 100)
	{
	 total += i;
	 i += 2;
	
	}
	cout << total;
	*/
	return 0;
}