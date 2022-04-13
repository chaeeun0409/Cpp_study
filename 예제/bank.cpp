#include <iostream>
using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;
	static int cnt;
public:
	//������ �ۼ�
	CBank() {
		this->name = "";
		this->account = "";
		this->balance = 0;
	}
	CBank(string name, string account, int balance) {  //������
		this->name = name;
		this->account = account;
		this->balance = balance;
		cout << "����" << endl;
	}
	void refer() {     //�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
		cout << "������ : " << this->name << endl;
		cout << "���¹�ȣ : " << this->account << endl;
		cout << "�ܾ� : " << this->balance << endl;
	}
	~CBank() {
		this->balance -1;
		cout << this->account<< "�Ҹ�" << endl;
	}
	void deposit() {
		int money;
		cout << "�Աݱݾ� : ";
		cin >> money;
		balance += money;
	}
	void withdraw() {
		int money;
		cout << "��ݱݾ� : ";
		cin >> money;
		balance -= money;
	}
	void account_create() {

		string name = " ";
		string account_no = " ";
		int balance = 0;
		cout << "�̸� : ";
		cin >> name;
		cout << "���¹�ȣ : ";
		cin >> account_no;
		cout << "�Ա� �ݾ� : ";
		cin >> balance;
		this->name = name;
		this->account = account_no;
		this->balance = balance;
		this->refer();
		cnt++; //���

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
		cout << "���¹�ȣ : ";
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
	//����Ÿ reading
	while (1) {
		int menu;
		cout << "1. ���»���" << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ���" << endl;
		cout << "4. �ܾ���ȸ" << endl;
		cout << "5. ��������" << endl;
		cout << "6. ��ü ���� ��ȸ" << endl;
		cout << "0. ����" << endl;
		cout << "�޴� ���� ==> ";
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
			else cout << "���¹�ȣ ����"<<endl;
			break;

		case 3:
			se_loc = search();
			if (se_loc != -1)cb[se_loc]->withdraw();
			else cout << "���¹�ȣ ����" << endl; break;

		case 4:
			se_loc = search();
			if (se_loc != -1)cb[se_loc]->refer();
			else cout << "���¹�ȣ ����" << endl; break;

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