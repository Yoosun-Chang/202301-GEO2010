#include <iostream>
using namespace std;

int main() {
	/*int a[5] = { 85,90,75,100,95 };
	int total=0;
	for (int i = 0; i < 5; i++) {
		total += a[i];
	}
	cout << total << endl;
	cout << (double)(total / 5.0) << endl;*/

	/*int a[5];
	int max;

	for (int i = 0; i < 5; i++) {
		cout << "a[" << i << "]-> ";
		cin >> a[i];
	}

	max = a[0];
	for (int i = 1; i < 5; i++) {
		if (max < a[i])
			max = a[i];
	}

	cout << max << endl;*/
	
	//int score[3][5] = { 0 };
	//for (int i = 1; i < 4; i++) {
	//	score[i - 1][0] = i;
	//	cout << score[i - 1][0] << "��° �л��� ���� �Է�\n";
	//	for (int j = 1; j < 4; j++) {
	//		cout << j << "��° ����: ";
	//		cin >> score[i - 1][j];
	//		score[i - 1][4] += score[i - 1][j];
	//	}	
	//}

	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 5; j++)
	//		cout << "\t" << score[i][j];
	//	cout << '\n';
	//}

	//short a[3] = { 0,1,2 };
	//int b[3] = { 0,1,2 };
	////int b[3] = {0,3,6}

	//cout << "Size of short: " << sizeof(short) << endl;

	//cout << "a=> " << a << " ,\t &a[0]=>" << &a[0] << endl;
	//cout << "a+1=> " << a + 1 << " ,\t &a[1]=>" << &a[1] << endl;
	//cout << "a+2=> " << a + 2 << " ,\t &a[2]=>" << &a[2] << endl << endl;

	//cout << "Size of int: " << sizeof(int) << endl;
	//cout << "b=> " << b << endl;
	//cout << "b+1=> " << b + 1 << endl;
	//cout << "b+2=> " << b + 2 << endl;

	//cout << "\n\n\n";
	//cout << "b[0]=> " << b[0] << " *b=> " << *b << endl;
	//cout << "b[1]=> " << b[1] << " *b+1=> " << *b + 1 << endl;
	//cout << "b[1]=> " << b[1] << " *(b+1)=> " << *(b + 1) << endl;

	//int a[8] = { 10,20,30,40,50,60,70,80 };
	//int* pa = a;

	////�迭�� ������ó�� Ȱ��
	//cout << a[0] << endl;
	//cout << *(a + 1) << endl;
	//cout << *(&a[0] + 1) << endl;
	//cout << "\n\n\n";

	////�����͸� �迭ó�� Ȱ��
	//cout << pa[0] << endl;
	//cout << *(pa + 1) << endl;
	//cout << pa[1] << endl;

	////�迭�� ũ��
	//cout << "\n\n\n";
	//cout << "Array size is " << sizeof(a) << endl;
	//cout << "Integer size is " << sizeof(int) << endl;
	//cout << "Element # is " << sizeof(a) / sizeof(int) << endl;

	////�迭�� ����� ������ ����
	//int s = sizeof(a) / sizeof(int);

	////"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �迭�� ���Ҹ� ���
	//for (int i = 0; i < s; i++) {
	//	cout << a[i] << " ";
	//}

	//cout << "\n\n\n";

	////"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �����ͷ� ���Ҹ� ���
	//for (int i = 0; i < s; i++) {
	//	cout << *(pa + i) << " ";
	//}

	//cout << "\n\n\n";

	////"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �迭�� ������ó�� �̿��Ͽ� ���Ҹ� ���
	//for (int i = 0; i < s; i++) {
	//	cout << *(a + i) << " ";
	//}

	//int x = 10, y = 20;

	//cout << x << endl; 
	//cout << y << endl;
	//cout << &x << endl; //16����
	//cout << (int)&x << endl; //10������ ��������ȯ
	//// &: address of operator
	//// *: reference operator
	//// reference�� �ǹ� : �� �ּҿ� ���� �����Ұ�

	//cout << *&x << endl;

	//int* ptr_x = &x; //x��� ������ ������ �ּҸ� ������ ����

	//cout << endl;
	//cout << ptr_x <<", "<< *ptr_x << endl;


	//y = *ptr_x; // y = 10
	//cout << y << endl;


	//int array[5] = { 1, 2, 3, 4, 5 };
	//cout << array[0] << ", " << array[1] << endl;

	////�迭�� ������ ó��, �����͸� �迭ó�� ����ϴ� ���
	////�迭�� �ٸ� ���� = ������
	////�������� �ٸ� ���� = �迭
	////��� ������ == �迭

	//cout << array << ", " << &array[0] << endl;
	//cout << *array << ", " << array[0] << endl;

	//int* ptr_array = array;
	//cout << *ptr_array << ", " << *(ptr_array + 1) << endl;

	////�����͸� �迭ó��
	//cout << ptr_array[0] << ", " << ptr_array[1] << endl;

	////����
	////array[i] == *(array+i)



	////���� �迭 (Stack memory)=������.
	//double p1[3] = {0.2, 0.5, 0.8};

	////���� �迭 (Heap memory)=������ ������ ����. �����ϰ� �޸� ������ ����� �� �ִ� ����
	////double* p3 = new double[3]{0.2, 0.5, 0.8};
	//double* p3 = new double[3]; //double�� ������ 3���� ������ �� �ִ� ������ �Ҵ�
	//p3[0] = 0.2; //p3�� �迭 �̸�ó�� ���
	//p3[1] = 0.5;
	//p3[2] = 0.8;


	//cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	//p3 = p3 + 1; //�����͸� ����
	//cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
	//cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	//p3 = p3 - 1; //�ٽ� ���� ��ġ�� ����
	//delete[] p3; //�迭 �޸𸮸� ����
}