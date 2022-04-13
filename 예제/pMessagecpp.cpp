#include <iostream>
using namespace std;
int main() {
	int i;
	const char*pMessage = "weclome to korea";
	for (int i = 0; *(pMessage + i) != NULL; i++) {
		cout <<"=="<< *(pMessage+i) << endl;
	}
	cout << i << endl;
}