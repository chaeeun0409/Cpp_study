#include <iostream>
using namespace std;
int main() {
	int nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	cout << *pArray << ", " << nArray[0] << endl;
	*pArray = 10;
	cout << *pArray << ", " << nArray[0] << endl;
	pArray = &nArray[1];
	cout << *pArray << ", " << nArray[1] << endl;
	cout << sizeof(pArray)<<endl;  // 4
	cout << sizeof(*pArray)<<endl;  //4
	cout << sizeof(nArray)<<endl;  //40



	

	/*int count = sizeof(nArray) / sizeof(int);
	for (int i = 0; i < 10; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;*/
	return 0;

}