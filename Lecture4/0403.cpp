//0403
#include <iostream>
using namespace std;

int main() {

	//������ ����
	/*
	int x = 10, y = 20;

	cout << x << endl;
	cout << y << endl;
	cout << &x << endl; //16����
	cout << (int)&x << endl; //10������ ��������ȯ
	// &: address of operator
	// *: reference operator
	// reference�� �ǹ� : �� �ּҿ� ���� �����Ұ�

	cout << *&x << endl;

	int* ptr_x = &x; //x��� ������ ������ �ּҸ� ������ ����

	cout << endl;
	cout << ptr_x <<", "<< *ptr_x << endl;


	y = *ptr_x; // y = 10
	cout << y << endl;
	*/


	//1���� �迭�� ������ ����
	/*
	int array[5] = { 1, 2, 3, 4, 5 };
	cout << array[0] << ", " << array[1] << endl;

	//�迭�� ������ ó��, �����͸� �迭ó�� ����ϴ� ���
	//�迭�� �ٸ� ���� = ������
	//�������� �ٸ� ���� = �迭
	//��� ������ == �迭

	cout << array << ", " << &array[0] << endl;
	cout << *array << ", " << array[0] << endl;

	int* ptr_array = array;
	cout << *ptr_array << ", " << *(ptr_array + 1) << endl;

	//�����͸� �迭ó��
	cout << ptr_array[0] << ", " << ptr_array[1] << endl;

	//����
	//array[i] == *(array+i)
	*/





	// �����Ҵ� �޸�


	//Eg 4.9 ���� �迭 ����
	/*

	//���� �迭 (Stack memory)=������.
	double p1[3] = {0.2, 0.5, 0.8};

	//���� �迭 (Heap memory)=������ ������ ����. �����ϰ� �޸� ������ ����� �� �ִ� ����
	//double* p3 = new double[3]{0.2, 0.5, 0.8};
	double* p3 = new double[3]; //double�� ������ 3���� ������ �� �ִ� ������ �Ҵ�
	p3[0] = 0.2; //p3�� �迭 �̸�ó�� ���
	p3[1] = 0.5;
	p3[2] = 0.8;


	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 + 1; //�����͸� ����
	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 - 1; //�ٽ� ���� ��ġ�� ����
	delete[] p3; //�迭 �޸𸮸� ����
	*/


	//Eg 4.10 ���� �迭 Ȱ��
	/*
	const int MAX_INPUT = 256;
	char input[MAX_INPUT] = { 0 };
	int length, ch;

	cout << "Enter what you want to convert" << endl;
	cin.getline(input, MAX_INPUT);
	length = strlen(input) + 1; //NULL�� ������ ���ڿ� ����
	char* output = new char[length]; //��¿� ������ ���� �� �޸� �Ҵ�

	for (ch = 0; ch < length; ch++) {
	if (input[ch] >= 'a' && input[ch] <= 'z')
	output[ch] = input[ch] + 'A' - 'a'; //�ҹ��ڸ� �빮�ڷ� ��ȯ
	//output[ch] = input[ch] - 32;
	else
	output[ch] = input[ch];
	}

	cout << "input: " << input << endl;
	cout << "output: " << output << endl;
	delete[] output; //�޸� �ݳ�
	*/

	return 0;
}
