#include <iostream>
using namespace std;

int sum(int, int)
double sum(int, int)
void	swapV(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}
void swapP(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void swapR(int &a, int &b){    // swap 할때 적합
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 10;
	int b = 20;
	swapV(a, b);
	cout << a << " " << b << endl;  //10 20
	swapP(&a, &b);
	cout << a << " " << b << endl;  //20 10
	swapR(a, b);
	cout << a << " " << b << endl;  //10 20

	
}