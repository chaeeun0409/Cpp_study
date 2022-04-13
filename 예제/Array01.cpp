#include <iostream>
using namespace std;
int main() {
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;  // 0, null 상관 없다. 같은값임
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
	cout << pArray[0] << ", " << *nArray << endl;  //포인터와 배열은 호환해서 쓸수있다

	//nArray = pArray; 는 안됨 좌변에 배열명이 와야함 nArray는 주소값을 바꿀수 없어서 에러남

	cout << sizeof(pArray) << endl;   //4
	cout << sizeof(nArray) << endl;   //40  shrot 일때 20 ,double 일때 80
	cout << sizeof(*pArray) << endl;  //4   short 일때 2 ,double 일때 8






	return 0;
}