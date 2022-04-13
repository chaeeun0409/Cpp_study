#include <iostream>
using namespace std;

int main()
{
	int num, i;
	int sum = 1;

	for (i = 2; i <= 20; i++) {
		num = sum + i;
		cout << sum << " + " << i << " = " << num << endl;
		sum = num;
	}
}
