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

	cout << "\n행렬합\n";
	*/





	// 포인터
	/*
	int a = 10;
	cout << "a => " << a << endl; //값
	cout << "&a => " << &a << endl; //주소
	cout << "*&a =>" << *&a << endl; //주소에 있는 값
	*/

	// 0329
	// Eg 4.5 포인터 변수의 의미
	/*
	int a = 10;
	int* p;
	p = &a; // 초기화 , 변수 a의 주소값을 포인터 변수 p에 저장
	// => int *p = &a; 

	cout << "a => " << a << endl;
	cout << "&a => " << &a << endl;
	cout << "p => " << p << endl;
	cout << "&p => " << &p << endl;
	cout << "*p => " << *p << endl;
	*/

	// Eg 4.6 포인터 이용 값 설정 변경
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




	// Eg 4.7 +연산자와 출력
	/* 
	// 쫌어려움 16진수 잘보기
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
	
	//배열을 포인터처럼 활용
	cout << a[0] << endl;
	cout << *(a + 1) << endl;
	cout << *(&a[0] + 1) << endl;
	cout << "\n\n\n";

	//포인터를 배열처럼 활용
	cout << pa[0] << endl;
	cout << *(pa + 1) << endl;
	cout << pa[1] << endl;

	//배열의 크기
	cout << "\n\n\n";
	cout << "Array size is " << sizeof(a) << endl;
	cout << "Integer size is " << sizeof(int) << endl;
	cout << "Element # is " << sizeof(a) / sizeof(int) << endl;

	//배열에 저장된 원소의 개수
	int s = sizeof(a) / sizeof(int);

	//"배열에 저장된 원소의 개수" 정보를 이용하여, 배열로 원소를 출력
	for (int i = 0; i < s; i++) {
		cout << a[i] << " ";
	}

	cout << "\n\n\n";

	//"배열에 저장된 원소의 개수" 정보를 이용하여, 포인터로 원소를 출력
	for (int i = 0; i < s; i++) {
		cout << *(pa + i) << " ";
	}

	cout << "\n\n\n";

	//"배열에 저장된 원소의 개수" 정보를 이용하여, 배열을 포인터처럼 이용하여 원소를 출력
	for (int i = 0; i < s; i++) {
		cout << *(a + i) << " ";
	}
	

	return 0;
}
