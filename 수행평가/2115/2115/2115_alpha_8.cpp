//2115 이채은
#include <iostream>
using namespace std;

int main() {
	char str[10];
	cout << "영어 단어의 값을 계산하는 프로그램입니다.('0'을 입력하면 프로그램을 종료합니다.)" << endl;
	cout << "원하는 영단어를 입력하세요.";
	cin >> str;
	while (str[0] !='0') {
			int result = 0;
			for (int i = 0; str[i] != '\0'; ++i) {

				if (str[i] >= 'a' && str[i] <= 'z') {
					result += str[i] - 'a' + 1;
				}
				else if (str[i] >= 'A' && str[i] <= 'Z') {
					result += str[i] - 'A' + 1;
				}
			}
			cout << str << " ==> " << result << endl;
			cout << "영어 단어의 값을 계산하는 프로그램입니다.('0'을 입력하면 프로그램을 종료합니다.)" << endl;
			cout << "원하는 영단어를 입력하세요.";
			cin >> str;
	}
	
}