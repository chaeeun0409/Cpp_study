#include <iostream>
using namespace std;
struct Acount{
	char accID[20]; //���¹�ȣ
	char secID[20]; //��й�ȣ
	char name[20]; //�̸�
	int balance; //�ܾ�
	void Deposit(int money);
	void Withdraw(int money
	void print();
};

int main() {
	Acount mirim = { "1234","1357","������",1000 };
	mirim.print();
	mirim.Deposit(100);
	mirim.Withdraw(300);

}
void Acount::Deposit(int money) {  //�Ա�  �ݹ��� ���۷���
	balance += money;
}
void Acount::Withdraw(int money) {  //���  �ݹ��� ������ 
	balance -= money;
}