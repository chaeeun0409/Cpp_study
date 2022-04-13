#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse() 생성자" << endl;}
	virtual ~Horse() {cout << "Horse() 소멸자" << endl;}
	virtual void speak() {
		cout << "히히힝~~" << endl;
	}
};
class Bird {
public:
	Bird() { cout << "Bird() 생성자" << endl; }
	virtual ~Bird() { cout << "Bird() 소멸자" << endl; }  // virtual 하면 형변환 굳이 안해 도됨
	void speak() {
		cout << "짹짹~~" << endl;
	}
	void fly() {
		cout << "날다" << endl;
	}
};

class Pegasus : public Horse, public Bird { //여기서 먼저써준 생성자 부터 간다
public:
	Pegasus() { cout << "Pegasus() 생성자" << endl; }
	~Pegasus() { cout << "Pegasus() 소멸자" << endl; }
	 void speak() {  
		cout << "페가수스 : 히히힝~~" << endl;
	}

};
int main() {
	/*
	* Pegasus peg;
	* peg.speak();   아들 생성자가 먼저 출력됨 (페가수스 : 히히힝 )
	* peg.fly();
	*/
	

	Horse* obj1 = new Horse();
	obj1->speak();   // 히히힝
	((Pegasus*)obj1)->fly();
	//obj1->fly(); / 안되는 이유 horse에 없어서 페가수스는 상속받았으니까 다 쓸수있다.
	delete obj1;
	cout << "-------------------------------" << endl;
	Pegasus* obj2 = new Pegasus();
	obj2->speak(); // 페가수스 히히힝
	obj2->fly();
	delete obj2;
	cout << "-------------------------------" << endl;

	Horse* obj3 = new Pegasus();
	obj3->speak(); //  히히힝 타입이 horse니까 
	//((Pegasus*)obj3)->speak(); // 형변환 
	((Pegasus*)obj3)->fly(); // 형변환 
	delete obj3;
	//Pegasus* obj4 = new Horse();  / horse 만큼 만들어서 pegasus 에게 주겠다 ..... 조금 만들어서 많이 주는 건 불가능


}