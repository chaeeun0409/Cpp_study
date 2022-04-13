#include <iostream>
using namespace std;
//템플릿 사용하면 오버로딩을 줄일수 있다
//템플릿도 오버로딩 가능
//typename 말고 class라고 써도됨

template <typename TT> 
void swapTest(TT& x, TT& y);

template <typename T>
void swap(T& x, T& y, int&);

int main() {
	/*int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;
	cout << "x = " << x << ", y = " << y << endl;
	swapTest<int>(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;
	swapTest<double>(x1, y1);
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;   */

	double a[] = { 1.1,2,3,4.1,5 };
	double b[] = { 6,7,8.1,9,10.1 };
	//cout << "a = " << a[0] <<" " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << "b = " << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << " " << b[4] << endl;
	swap(a, b);
	
	//cout << "a = " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << "b = " << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << " " << b[4] << endl;


}
template <typename TT> 
void swapTest(TT& x, TT& y) {
	TT temp;
	temp = x;
	x = y;
	y = temp;
}
template <typename T>
void swap(T& x, T& y, int&) {
	T temp;
	temp = x;
	x = y;
	y = temp;
	
}
template <typename T>
void printdata(double a[],double b[]) {
	for (int i = 0; i <5; i++) {
		cout << a[i] << endl;
	}
}