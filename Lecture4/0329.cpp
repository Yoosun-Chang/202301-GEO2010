#include <iostream>
int main() {
	using namespace std;

	// 0327
	// Lab 4.1
	/*
	int A[3][3] = { {1,1,1},{2,2,2},{3,3,3} };
	int B[3][3] = { {1,2,3},{1,2,3},{1,2,3} };

	int C[3][3] = { 0 };

	for (int i = 0; i <= 2; i++) {
	for (int j = 0; j <= 3; j++) {
	//cout << i << ", " << "j" << endl;
	C[i][j] = A[i][j] + B[i][j];
	}
	}

	cout << "\n�����\n";
	*/





	// ������
	/*
	int a = 10;
	cout << "a => " << a << endl; //��
	cout << "&a => " << &a << endl; //�ּ�
	cout << "*&a =>" << *&a << endl; //�ּҿ� �ִ� ��
	*/

	// 0329
	// Eg 4.5 ������ ������ �ǹ�
	/*
	int a = 10;
	int* p;
	p = &a; // �ʱ�ȭ , ���� a�� �ּҰ��� ������ ���� p�� ����
	// => int *p = &a; 

	cout << "a => " << a << endl;
	cout << "&a => " << &a << endl;
	cout << "p => " << p << endl;
	cout << "&p => " << &p << endl;
	cout << "*p => " << *p << endl;
	*/

	// Eg 4.6 ������ �̿� �� ���� ����
	/*
	int a = 10, b = 20;
	int *p = &a;
	cout << "a=> " << a << " b=> " << b << endl;
	cout << "*p=> " << *p << endl;

	b = *p;
	cout << "a=> " << a << " b=> " << b << endl;
	cout << "*p=> " << *p << endl;

	*p = 30;
	cout << "a=> " << a << " b=> " << b << endl;
	cout << "*p=> " << *p << endl;
	*/




	// Eg 4.7 +�����ڿ� ���
	/* 
	// �;���� 16���� �ߺ���
	short a[3] = { 0,1,2 };
	int b[3] = { 0,1,2 };
	//int b[3] = {0,3,6}

	cout << "Size of short: " << sizeof(short) << endl;

	cout << "a=> " << a << " ,\t &a[0]=>" << &a[0] << endl;
	cout << "a+1=> " << a + 1 << " ,\t &a[1]=>" << &a[1] << endl;
	cout << "a+2=> " << a + 2 << " ,\t &a[2]=>" << &a[2] << endl<<endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "b=> " << b << endl;
	cout << "b+1=> " << b + 1 << endl;
	cout << "b+2=> " << b + 2 << endl;

	cout << "\n\n\n";
	cout << "b[0]=> " << b[0]<< " *b=> "<< *b << endl;
	cout << "b[1]=> " << b[1] << " *b+1=> " << *b+1 << endl;
	cout << "b[1]=> " << b[1] << " *(b+1)=> " << *(b+1) << endl;
	*/

	// Eg 4.7
	
	int a[8] = { 10,20,30,40,50,60,70,80 };
	int* pa = a;
	
	//�迭�� ������ó�� Ȱ��
	cout << a[0] << endl;
	cout << *(a + 1) << endl;
	cout << *(&a[0] + 1) << endl;
	cout << "\n\n\n";

	//�����͸� �迭ó�� Ȱ��
	cout << pa[0] << endl;
	cout << *(pa + 1) << endl;
	cout << pa[1] << endl;

	//�迭�� ũ��
	cout << "\n\n\n";
	cout << "Array size is " << sizeof(a) << endl;
	cout << "Integer size is " << sizeof(int) << endl;
	cout << "Element # is " << sizeof(a) / sizeof(int) << endl;

	//�迭�� ����� ������ ����
	int s = sizeof(a) / sizeof(int);

	//"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �迭�� ���Ҹ� ���
	for (int i = 0; i < s; i++) {
		cout << a[i] << " ";
	}

	cout << "\n\n\n";

	//"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �����ͷ� ���Ҹ� ���
	for (int i = 0; i < s; i++) {
		cout << *(pa + i) << " ";
	}

	cout << "\n\n\n";

	//"�迭�� ����� ������ ����" ������ �̿��Ͽ�, �迭�� ������ó�� �̿��Ͽ� ���Ҹ� ���
	for (int i = 0; i < s; i++) {
		cout << *(a + i) << " ";
	}
	

	return 0;
}
