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

	cout << "1���� 10������ ���� " << total << endl;
	*/

	// Eg 3.2
	/*
	cout << "�� 5���� �հ�� ����� ���մϴ�." << endl;
	cout << "�� 5���� �Է��Ͻʽÿ�." << endl;
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
	cout << "�� " << i << ": ";
	cin >> number;
	sum += number;

	cout << "checking sum: " << sum << endl; //�߰��ջ� ��� Ȯ��
	}

	cout << "�� 5���� ��� �ԷµǾ����ϴ�." << endl;
	cout << "�Է��� �� 5���� �հ�� " << sum << "�Դϴ�." << endl;
	cout << "�Է��� �� 5���� ����� " << sum / 5 << "�Դϴ�." << endl; //�ڵ�����ȯ
	cout << "�����մϴ�." << endl;
	*/

	
	// Lab 3.1
	/*
	int even_num = 0;
	for (int i = 1; i <= 100; i++) {
	if (i % 2 != 0) {
	even_num += i;
	}

	}
	cout << "1���� 100���� Ȧ���� ���� " << even_num << " �Դϴ�.\n" << endl;
	*/

	//Lab 3.2
	/*
	int odd_num = 0;
	for (int i = 1; i <= 100; i++) {
	if (i % 2 == 0) {
	odd_num += i;
	}

	}
	cout << "1���� 100���� ¦���� ���� " << odd_num << " �Դϴ�." << endl;
	*/

	// Lab 3.1 , 3.2 ������ �ڵ�
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
	cout << " ���ϴ� ���� �Է��Ͻÿ� : " ;
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
	cout << "����" << i << "�� : " << "ȭ��: " << 1.8 * i + 32.0 << endl;
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
	 cout << "1���� 10������ ���� " << total << endl;
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