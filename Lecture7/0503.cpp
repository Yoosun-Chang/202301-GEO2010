//0503

// ����ü ���� ���
/*
#include <iostream>
using namespace std;

//���¿� ���õ� �����͵��� ����
struct Account {
char accID[20]; //���¹�ȣ
char secID[20]; // ��� ��ȣ
char name[20]; //�̸�
int balance; // �ܾ�
};

int main() {
Account kim = { "1234","2321","geo", 1000 };
cout << "���¹�ȣ: " << kim.accID << endl;
cout << "��й�ȣ: " << kim.secID << endl;
cout << "�� ��: " << kim.name << endl;
cout << "�� ��: " << kim.balance << endl;
return 0;
}
*/

//// ����ü 2
//#include <iostream>
//using namespace std;
//
////���¿� ���õ� �����͵��� ����
//class Account {
//public:
// char accID[20]; //���¹�ȣ
// char secID[20]; // ��� ��ȣ
// char name[20]; //�̸�
// int balance; // �ܾ�
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
// cout << "���¹�ȣ: " << kim.accID << endl;
// cout << "��й�ȣ: " << kim.secID << endl;
// cout << "�� ��: " << kim.name << endl;
// cout << "�� ��: " << kim.balance << endl;
//
// kim.Deposit(100);
//
// cout << "�� ��" << kim.balance << endl;
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
	cout << "���¹�ȣ: " << accID << endl;
	cout << "��й�ȣ: " << secID << endl;
	cout << "�� ��: " << name << endl;
	cout << "�� ��: " << balance << endl;
}

int main() {
	Account kim;
	kim.InitMembers("1234", "2341", "Geo", 1000);
	kim.showInfo();
	return 0;
}