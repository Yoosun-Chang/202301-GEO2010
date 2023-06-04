//0503

// 구조체 등장 배경
/*
#include <iostream>
using namespace std;

//계좌와 관련된 데이터들의 모임
struct Account {
char accID[20]; //계좌번호
char secID[20]; // 비밀 번호
char name[20]; //이름
int balance; // 잔액
};

int main() {
Account kim = { "1234","2321","geo", 1000 };
cout << "계좌번호: " << kim.accID << endl;
cout << "비밀번호: " << kim.secID << endl;
cout << "이 름: " << kim.name << endl;
cout << "잔 액: " << kim.balance << endl;
return 0;
}
*/

//// 구조체 2
//#include <iostream>
//using namespace std;
//
////계좌와 관련된 데이터들의 모임
//class Account {
//public:
// char accID[20]; //계좌번호
// char secID[20]; // 비밀 번호
// char name[20]; //이름
// int balance; // 잔액
//
// void Deposit(int money)
// {
// balance += money;
// }
// void Withdraw(int money)
// {
// balance -= money;
// }
//};
//
//int main() {
// Account kim = { "1234","2321","geo", 1000 };
// cout << "계좌번호: " << kim.accID << endl;
// cout << "비밀번호: " << kim.secID << endl;
// cout << "이 름: " << kim.name << endl;
// cout << "잔 액: " << kim.balance << endl;
//
// kim.Deposit(100);
//
// cout << "잔 고" << kim.balance << endl;
// return 0;
//}



#include <iostream>
using namespace std;

class Account {
private:
	char accID[20];
	char secID[20];
	char name[20];
	int balance;

public:
	void InitMembers(const char* acc, const char* sec, const char* n, int bal);

	void Deposit(int money);

	void Withdraw(int money);

	void showInfo();
};

void Account::InitMembers(const char* acc, const char* sec, const char* n, int bal) {
	strcpy_s(accID, 20, acc);
	strcpy_s(secID, 20, sec);
	strcpy_s(name, 20, n);
	balance = bal;
}

void Account::Deposit(int money) {
	balance += money;
}

void Account::Withdraw(int money) {
	balance -= money;
}

void Account::showInfo() {
	cout << "계좌번호: " << accID << endl;
	cout << "비밀번호: " << secID << endl;
	cout << "이 름: " << name << endl;
	cout << "잔 액: " << balance << endl;
}

int main() {
	Account kim;
	kim.InitMembers("1234", "2341", "Geo", 1000);
	kim.showInfo();
	return 0;
}