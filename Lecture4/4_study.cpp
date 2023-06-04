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
	//	cout << score[i - 1][0] << "번째 학생의 점수 입력\n";
	//	for (int j = 1; j < 4; j++) {
	//		cout << j << "번째 과목: ";
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

	////배열을 포인터처럼 활용
	//cout << a[0] << endl;
	//cout << *(a + 1) << endl;
	//cout << *(&a[0] + 1) << endl;
	//cout << "\n\n\n";

	////포인터를 배열처럼 활용
	//cout << pa[0] << endl;
	//cout << *(pa + 1) << endl;
	//cout << pa[1] << endl;

	////배열의 크기
	//cout << "\n\n\n";
	//cout << "Array size is " << sizeof(a) << endl;
	//cout << "Integer size is " << sizeof(int) << endl;
	//cout << "Element # is " << sizeof(a) / sizeof(int) << endl;

	////배열에 저장된 원소의 개수
	//int s = sizeof(a) / sizeof(int);

	////"배열에 저장된 원소의 개수" 정보를 이용하여, 배열로 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << a[i] << " ";
	//}

	//cout << "\n\n\n";

	////"배열에 저장된 원소의 개수" 정보를 이용하여, 포인터로 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << *(pa + i) << " ";
	//}

	//cout << "\n\n\n";

	////"배열에 저장된 원소의 개수" 정보를 이용하여, 배열을 포인터처럼 이용하여 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << *(a + i) << " ";
	//}

	//int x = 10, y = 20;

	//cout << x << endl; 
	//cout << y << endl;
	//cout << &x << endl; //16진수
	//cout << (int)&x << endl; //10진수로 강제형변환
	//// &: address of operator
	//// *: reference operator
	//// reference의 의미 : 그 주소에 직접 접근할게

	//cout << *&x << endl;

	//int* ptr_x = &x; //x라는 변수가 가지는 주소를 저장한 변수

	//cout << endl;
	//cout << ptr_x <<", "<< *ptr_x << endl;


	//y = *ptr_x; // y = 10
	//cout << y << endl;


	//int array[5] = { 1, 2, 3, 4, 5 };
	//cout << array[0] << ", " << array[1] << endl;

	////배열을 포인터 처럼, 포인터를 배열처럼 사용하는 방법
	////배열의 다른 형테 = 포인터
	////포인터의 다른 형태 = 배열
	////결론 포인터 == 배열

	//cout << array << ", " << &array[0] << endl;
	//cout << *array << ", " << array[0] << endl;

	//int* ptr_array = array;
	//cout << *ptr_array << ", " << *(ptr_array + 1) << endl;

	////포인터를 배열처럼
	//cout << ptr_array[0] << ", " << ptr_array[1] << endl;

	////공식
	////array[i] == *(array+i)



	////정적 배열 (Stack memory)=빠르다.
	//double p1[3] = {0.2, 0.5, 0.8};

	////동적 배열 (Heap memory)=데이터 조작이 느림. 유연하게 메모리 공간을 사용할 수 있는 장점
	////double* p3 = new double[3]{0.2, 0.5, 0.8};
	//double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 할당
	//p3[0] = 0.2; //p3을 배열 이름처럼 취급
	//p3[1] = 0.5;
	//p3[2] = 0.8;


	//cout << "p3[1]은 " << p3[1] << "입니다.\n";
	//p3 = p3 + 1; //포인터를 증가
	//cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
	//cout << "p3[1]이 " << p3[1] << "입니다.\n";
	//p3 = p3 - 1; //다시 시작 위치를 지시
	//delete[] p3; //배열 메모리를 해제
}