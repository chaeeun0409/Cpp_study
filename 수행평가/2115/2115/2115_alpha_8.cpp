//2115 ��ä��
#include <iostream>
using namespace std;

int main() {
	char str[10];
	cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.)" << endl;
	cout << "���ϴ� ���ܾ �Է��ϼ���.";
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
			cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.)" << endl;
			cout << "���ϴ� ���ܾ �Է��ϼ���.";
			cin >> str;
	}
	
}