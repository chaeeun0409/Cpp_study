//2115 이채은
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int range, num = 1;
	cout << "범위 입력 : ";
	cin >> range;

	while (1)
	{
		cout << "1~" << num << "까지의 곱 : " << factorial(num) << endl;
		if (factorial(num) > range)
			break;
		num++;
	}
	cout << "------------------------------------------" << endl;
	cout << "1~" << num - 1 << "까지의 곱 :" << factorial(num - 1)<<endl;
	cout << "------------------------------------------" << endl;
	return 0;
}