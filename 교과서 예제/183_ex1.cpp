#include <iostream>
using namespace std;

class  Ride {
public:
	//virtual void rideFunc() {}  // 가상 함수 
	virtual void rideFunc() = 0;  // 순수 가상 함수 

};
class BusRide : public Ride {
public:
	int age;
	//void rideFunc() {
	//	cout << "버스를 타다" << endl;
	//}
};
class AirRide :public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {
	Ride* r1 = new BusRide(); // 순수 가상 함수를 상속받아서 순수 가상 클래스가 되어버림(busRide)

	r1->rideFunc();  //참조자로 쓸때 .으로
	//r1.age = 10;

	AirRide ar2;
	Ride& r2 = ar2;
	
	r2.rideFunc();
	return 0;
}