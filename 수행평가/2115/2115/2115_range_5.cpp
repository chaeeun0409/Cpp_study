//2115 ��ä��
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
	cout << "���� �Է� : ";
	cin >> range;

	while (1)
	{
		cout << "1~" << num << "������ �� : " << factorial(num) << endl;
		if (factorial(num) > range)
			break;
		num++;
	}
	cout << "------------------------------------------" << endl;
	cout << "1~" << num - 1 << "������ �� :" << factorial(num - 1)<<endl;
	cout << "------------------------------------------" << endl;
	return 0;
}