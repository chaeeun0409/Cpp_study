#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {} // ���� ���� �Լ��� �����Լ��� �ٲٸ� ���� �ȳ� �������̵��� ���ص�.
	//���� ���� �Լ��� �ϸ� ������ �ؿ��� ���� Ȯ���ϰ� �������̵��� �ϰ� �� ������ �����Լ��� ���� �Ǹ� �������̵��� ���ص� ������ �ȳ�

	virtual void number(){} //�Ƶ鲨 ���� ���ؼ� ���Ƿ� �������. virtual ���������� �Ƶ鲨 ���
};
class BusRide :public Ride {
public:
	int age;
	//void rideFunc() {  //������ �ƺ��� Ÿ�� ���
	//cout << "������ Ÿ��" << endl;
	//}
	void number() {
		cout << "152" << endl;
	}
}; 
class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();
	r1->number(); //number ��� �޼ҵ�� �ƹ��� �ʿ� ���
	delete r1;
	
	Ride* r2 = new AirRide();
	r2->rideFunc();
	delete r2;
	
	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;
	return 0;
}