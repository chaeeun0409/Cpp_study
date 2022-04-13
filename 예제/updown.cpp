#include <iostream>
using namespace std;

int main() {
	int com, user;
	int cnt = 0;

	srand(time(0));
	com = rand() % 10+ 1;

	while (1) {
		cout << "수 입력 : ";
		cin >> user;
		if (user > 10 || user < 1) {
			cout << "잘못입력 하셨습니다." << endl;
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
				cout << "정답입니다!!" << endl;
				break;
			}
			if (cnt == 3) {
				cout << "기회가 없습니다!" << endl;
				cout << "정답은 : " << com << endl;
				break;
			} 
		}
	}
}