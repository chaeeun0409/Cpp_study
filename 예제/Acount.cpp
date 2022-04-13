#include <iostream>
using namespace std;
struct Acount{
	char accID[20]; //계좌번호
	char secID[20]; //비밀번호
	char name[20]; //이름
	int balance; //잔액
	void Deposit(int money);
	void Withdraw(int money
	void print();
};

int main() {
	Acount mirim = { "1234","1357","개나리",1000 };
	mirim.print();
	mirim.Deposit(100);
	mirim.Withdraw(300);

}
void Acount::Deposit(int money) {  //입금  콜바이 레퍼런스
	balance += money;
}
void Acount::Withdraw(int money) {  //출금  콜바이 포인터 
	balance -= money;
}