#include <iostream>
using namespace std;
int main() {
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;  // 0, null ��� ����. ��������
	pArray = nArray;

	cout << nArray[0] << ", " << *pArray << endl;

	*pArray = 10;
	cout << nArray[0] << ", " << *pArray << endl;

	pArray = &nArray[1];
	cout << nArray[0] << ", " << *pArray << endl;    // 0,1

	pArray++;

	cout << nArray[0] << ", " << *pArray << endl;   // 0 2

	pArray = nArray;

	cout << *pArray << ", " << nArray[0] << endl;
	cout << pArray[0] << ", " << *nArray << endl;  //�����Ϳ� �迭�� ȣȯ�ؼ� �����ִ�

	//nArray = pArray; �� �ȵ� �º��� �迭���� �;��� nArray�� �ּҰ��� �ٲܼ� ��� ������

	cout << sizeof(pArray) << endl;   //4
	cout << sizeof(nArray) << endl;   //40  shrot �϶� 20 ,double �϶� 80
	cout << sizeof(*pArray) << endl;  //4   short �϶� 2 ,double �϶� 8






	return 0;
}