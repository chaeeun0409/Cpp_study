#include <iostream>
using namespace std;

int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}
int sum(double a, double b) {
	double sum;
	sum = a + b;
	return sum;
}
int main() {
	cout << sum(2, 3) << endl;
	cout << sum(2.2, 3.3) << endl;
 }