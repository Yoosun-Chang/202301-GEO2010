//0403
#include <iostream>
using namespace std;

int main() {

	//포인터 복습
	/*
	int x = 10, y = 20;

	cout << x << endl;
	cout << y << endl;
	cout << &x << endl; //16진수
	cout << (int)&x << endl; //10진수로 강제형변환
	// &: address of operator
	// *: reference operator
	// reference의 의미 : 그 주소에 직접 접근할게

	cout << *&x << endl;

	int* ptr_x = &x; //x라는 변수가 가지는 주소를 저장한 변수

	cout << endl;
	cout << ptr_x <<", "<< *ptr_x << endl;


	y = *ptr_x; // y = 10
	cout << y << endl;
	*/


	//1차원 배열과 포인터 복습
	/*
	int array[5] = { 1, 2, 3, 4, 5 };
	cout << array[0] << ", " << array[1] << endl;

	//배열을 포인터 처럼, 포인터를 배열처럼 사용하는 방법
	//배열의 다른 형테 = 포인터
	//포인터의 다른 형태 = 배열
	//결론 포인터 == 배열

	cout << array << ", " << &array[0] << endl;
	cout << *array << ", " << array[0] << endl;

	int* ptr_array = array;
	cout << *ptr_array << ", " << *(ptr_array + 1) << endl;

	//포인터를 배열처럼
	cout << ptr_array[0] << ", " << ptr_array[1] << endl;

	//공식
	//array[i] == *(array+i)
	*/





	// 동적할당 메모리


	//Eg 4.9 동적 배열 생성
	/*

	//정적 배열 (Stack memory)=빠르다.
	double p1[3] = {0.2, 0.5, 0.8};

	//동적 배열 (Heap memory)=데이터 조작이 느림. 유연하게 메모리 공간을 사용할 수 있는 장점
	//double* p3 = new double[3]{0.2, 0.5, 0.8};
	double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 할당
	p3[0] = 0.2; //p3을 배열 이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;


	cout << "p3[1]은 " << p3[1] << "입니다.\n";
	p3 = p3 + 1; //포인터를 증가
	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
	cout << "p3[1]이 " << p3[1] << "입니다.\n";
	p3 = p3 - 1; //다시 시작 위치를 지시
	delete[] p3; //배열 메모리를 해제
	*/


	//Eg 4.10 동적 배열 활용
	/*
	const int MAX_INPUT = 256;
	char input[MAX_INPUT] = { 0 };
	int length, ch;

	cout << "Enter what you want to convert" << endl;
	cin.getline(input, MAX_INPUT);
	length = strlen(input) + 1; //NULL울 포함한 문자열 길이
	char* output = new char[length]; //출력용 포인터 지정 및 메모리 할당

	for (ch = 0; ch < length; ch++) {
	if (input[ch] >= 'a' && input[ch] <= 'z')
	output[ch] = input[ch] + 'A' - 'a'; //소문자면 대문자로 변환
	//output[ch] = input[ch] - 32;
	else
	output[ch] = input[ch];
	}

	cout << "input: " << input << endl;
	cout << "output: " << output << endl;
	delete[] output; //메모리 반납
	*/

	return 0;
}
