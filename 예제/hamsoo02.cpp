#include <iostream>
using namespace std;
int sum(int a, int b=1, int c =2, int d=3) {
	return a + b+c+d;
}
int main() {
	cout << sum(2,3,5) << endl; //15
	cout << sum(3) << endl; //15
	cout << sum(4,5,6,7) << endl; //22
	cout << sum(2,3) << endl; //14


}