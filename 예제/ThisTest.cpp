#include <iostream>
using namespace std;

class Car {
	int ton, price;
	public:
	static int count;
	Car() {
		ton = 0; price = 1000;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price;
	}
	static int getCount() {
		return count;
	~Car() {
		count--;
		cout << count << endl;
	}
};
int Car::count = 0;  //class �ۿ�����  static ������ �ȵ�. ���� ������ �ʱ�ȭ
int main() {
	//static int count=0;
	//count ++ ;
	Car car1;
	cout << "������ �ڵ����� �� : " << car1.count << endl;
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.count << endl;
	return 0;
}