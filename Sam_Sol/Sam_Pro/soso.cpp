#include <iostream>
using namespace std;

namespace definition {
	int jung = 10;
}

namespace justice {
	int jung = 20;
}
int main() {
	int a;
	cout << "ют╥б : ";
	cin >> a;
	cout << a;
	cout << definition::jung << endl << endl ;
	cout << justice::jung << endl << endl;

}