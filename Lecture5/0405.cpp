#include <iostream>
#include<cstdlib> //RAND_MAX가 정의되어있음
#include<ctime> // time 함수 적용

using namespace std;
int main() {

	//Eg 5.1 수학함수
	/*
	const double pi = 3.1415926535;

	cout << "sin(pi/2.0)= " << sin(pi / 2.0) << endl;
	cout << "cos(pi/2.0)= " << cos(pi / 2.0) << endl;
	cout << "tan(0.5)= " << tan(0.5) << endl;
	cout << "sqrt(pi)= " << sqrt(pi) << endl;
	cout << "log(10.0)= " << log(10.0) << endl;
	cout << "log10(100.0)= " << log10(100.0) << endl;
	cout << "exp(10.0)= " << exp(10.0) << endl;
	cout << "3^2= " << pow(3, 2) << endl;


	cout << endl << endl;
	cout << "sin(90degree)= " << sin(30 * (pi / 180)) << endl; //Degree to Radian(pi/180)
	*/

	//Eg 5.2 난수발생(1)
	/*
	int random;
	srand(time(NULL));//srand()함수의 인자 seed로 실행시간 대입
	//random = rand() % 10;
	//cout << random << endl;

	for (int j = 0; j < 10; j++) {
	random = rand() % 10;
	cout << random << " ";
	}
	*/


	//Lab 5.1 주사위 숫자 중의 임의의 수 추출
	/*
	int random;
	srand(time(NULL));//srand()함수의 인자 seed로 실행시간 대입
	random = rand() % 6+1;
	cout << random << endl;
	*/





	return 0;
}