#include <iostream>
using namespace std;
int main() {
	/*void* pValue = 0;
	int val = 100;
	pValue = &val;
	*(int*)pValue = 200;  //에러 => 따라간 곳이 int타입인줄 모른다. (void)타입인줄 안다. 그래서 형변환 해줘야함!!
	cout << *(int*)pValue << endl;*/

	char pMessage[] = "Welcome to Korea";
	char* pp = pMessage;
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pp << endl; //w
		pp++;

		int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
		int* pArray;
		pArray = nArray;
		nArray = pArray;	//배열명이 가지고 있는주소는 바꿀수없다. 그래서 오류

	}

	
}