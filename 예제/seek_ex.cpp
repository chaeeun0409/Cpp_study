#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���µ� �����߽��ϴ�." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;

	input.clear(); // �Ʒ� ���� �ذ�
	input.seekg(-5, ios::cur); // v�� ������ (why)->  c++�� ��Ʈ���� eofbit ��� �÷��׸� �������ִµ�, ����� �Լ��� ���� ������ ���� �����ϰ� �� ��� �� ������ ���� �����ߴٴ� ���� 
								// �÷��װ� ������ �Ǹ� �� ���� ����� �Լ��� ������ �ʰ� �ȴ�.
	cout << (char)input.get() << endl;
	input.close();
	return 0;

	//peek  �Լ��� ����� �Լ��� �ƴϱ� ������ �̷� ���� ����. �̸� �ǵ����� ���ؼ��� eofbit�� �ٽ� �����ϴ� clear() �Լ��� ����ϸ� �ȴ�.
}