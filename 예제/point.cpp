#include <iostream>
using namespace std;
int main() {
	/*void* pValue = 0;
	int val = 100;
	pValue = &val;
	*(int*)pValue = 200;  //���� => ���� ���� intŸ������ �𸥴�. (void)Ÿ������ �ȴ�. �׷��� ����ȯ �������!!
	cout << *(int*)pValue << endl;*/

	char pMessage[] = "Welcome to Korea";
	char* pp = pMessage;
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pp << endl; //w
		pp++;

		int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
		int* pArray;
		pArray = nArray;
		nArray = pArray;	//�迭���� ������ �ִ��ּҴ� �ٲܼ�����. �׷��� ����

	}

	
}