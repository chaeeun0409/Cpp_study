#include <iostream>
using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;
	static int cnt;
public:
	//생성자 작성
	CBank() {
		this->name = "";
		this->account = "";
		this->balance = 0;
	}
	CBank(string name, string account, int balance) {  //생성자
		this->name = name;
		this->account = account;
		this->balance = balance;
		cout << "생성" << endl;
	}
	void refer() {     //입금되는 금액을 출력하는 함수 작성
		cout << "예금주 : " << this->name << endl;
		cout << "계좌번호 : " << this->account << endl;
		cout << "잔액 : " << this->balance << endl;
	}
	~CBank() {
		this->balance -1;
		cout << this->account<< "소멸" << endl;
	}
	void deposit() {
		int money;
		cout << "입금금액 : ";
		cin >> money;
		balance += money;
	}
	void withdraw() {
		int money;
		cout << "출금금액 : ";
		cin >> money;
		balance -= money;
	}
	void account_create() {

		string name = " ";
		string account_no = " ";
		int balance = 0;
		cout << "이름 : ";
		cin >> name;
		cout << "계좌번호 : ";
		cin >> account_no;
		cout << "입금 금액 : ";
		cin >> balance;
		this->name = name;
		this->account = account_no;
		this->balance = balance;
		this->refer();
		cnt++; //대기

	}
		static int getCnt() {
			return cnt;
		}
		string getName() {
			return name;
		}
		string getAccount() {
			return account;
		}
		int getBalance() {
			return balance;
		}
};
	CBank* cb[10];
	int CBank::cnt = 0;

	int  search() {   
		string account_no = " ";
		cout << "계좌번호 : ";
		cin >> account_no;
		for (int i = 0; i < CBank::getCnt(); i++)
			if (account_no == cb[i]->getAccount()) {
				cout << account_no<<" "<< cb[i]->getAccount()<<endl;
				return i;
			}
	}
	void All_Search() {
		for (int i = 0; i < CBank::getCnt(); i++) {
			if (cb[i] != nullptr) {
				cout << cb[i]->getName() << "  " << cb[i]->getAccount() << "  " << cb[i]->getBalance() << endl;
			}

		}

}

int main() {
	//데이타 reading
	while (1) {
		int menu;
		cout << "1. 계좌생성" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4. 잔액죄회" << endl;
		cout << "5. 계좌해지" << endl;
		cout << "6. 전체 계좌 조회" << endl;
		cout << "0. 종료" << endl;
		cout << "메뉴 선택 ==> ";
		cin >> menu;
		string account_no;
		int tmp_cnt =0;
		int se_loc;
		switch (menu) {
		case 1:
			tmp_cnt = CBank::getCnt(); //0
			cb [tmp_cnt ] = new CBank;
			cb [tmp_cnt]->account_create(); break;
		case 2:
			se_loc = search();
			if (se_loc !=-1)cb[se_loc]->deposit();
			else cout << "계좌번호 오류"<<endl;
			break;

		case 3:
			se_loc = search();
			if (se_loc != -1)cb[se_loc]->withdraw();
			else cout << "계좌번호 오류" << endl; break;

		case 4:
			se_loc = search();
			if (se_loc != -1)cb[se_loc]->refer();
			else cout << "계좌번호 오류" << endl; break;

		case 5:
			se_loc = search();
			if (se_loc != -1) {
				cb[se_loc] = nullptr;
				delete cb[se_loc]; break;
			}
		case 6:
			All_Search(); break;
		case 0: return 0;

		}
	}
}