#include <iostream>
using namespace std;

int main() {
	int com, user;
	int cnt = 0;

	srand(time(0));
	com = rand() % 10+ 1;

	while (1) {
		cout << "�� �Է� : ";
		cin >> user;
		if (user > 10 || user < 1) {
			cout << "�߸��Է� �ϼ̽��ϴ�." << endl;
		}
		if (user < 10 && user>1) {
			if (user > com) {
				cout << "Down!" << endl;
				cnt++;
			}
			else if (user < com) {
				cout << "Up!" << endl;
				cnt++;
			}

			else if (com == user) {
				cnt++;
				cout << "�����Դϴ�!!" << endl;
				break;
			}
			if (cnt == 3) {
				cout << "��ȸ�� �����ϴ�!" << endl;
				cout << "������ : " << com << endl;
				break;
			} 
		}
	}
}