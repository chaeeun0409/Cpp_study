#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<string> v1; //���� �Ҵ� 
	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");
	for (auto e : v1) {  //v1���� �����ðž� e��� ���� / auto�� ó������ ������
		cout << " " << e;
	}
	cout << endl;
	return 0;

}
