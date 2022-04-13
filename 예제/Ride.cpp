#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {} // 순수 가상 함수를 가상함수를 바꾸면 에러 안남 오버라이딩을 안해도.
	//순수 가상 함수를 하면 좋은점 밑에서 에러 확인하고 오버라이딩을 하게 됨 하지만 가상함수를 쓰게 되면 오버라이딩을 안해도 오류가 안남

	virtual void number(){} //아들꺼 쓰기 위해서 임의로 만들어줌. virtual 붙혀놓으면 아들꺼 출력
};
class BusRide :public Ride {
public:
	int age;
	//void rideFunc() {  //없으면 아빠쪽 타다 출력
	//cout << "버스를 타다" << endl;
	//}
	void number() {
		cout << "152" << endl;
	}
}; 
class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};
int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();
	r1->number(); //number 라는 메소드는 아버지 쪽에 없어서
	delete r1;
	
	Ride* r2 = new AirRide();
	r2->rideFunc();
	delete r2;
	
	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;
	return 0;
}