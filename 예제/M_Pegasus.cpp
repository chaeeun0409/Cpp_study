#include <iostream>
using namespace std;

class Horse {
public:
	Horse() {cout << "Horse() ������" << endl;}
	virtual ~Horse() {cout << "Horse() �Ҹ���" << endl;}
	virtual void speak() {
		cout << "������~~" << endl;
	}
};
class Bird {
public:
	Bird() { cout << "Bird() ������" << endl; }
	virtual ~Bird() { cout << "Bird() �Ҹ���" << endl; }  // virtual �ϸ� ����ȯ ���� ���� ����
	void speak() {
		cout << "±±~~" << endl;
	}
	void fly() {
		cout << "����" << endl;
	}
};

class Pegasus : public Horse, public Bird { //���⼭ �������� ������ ���� ����
public:
	Pegasus() { cout << "Pegasus() ������" << endl; }
	~Pegasus() { cout << "Pegasus() �Ҹ���" << endl; }
	 void speak() {  
		cout << "�䰡���� : ������~~" << endl;
	}

};
int main() {
	/*
	* Pegasus peg;
	* peg.speak();   �Ƶ� �����ڰ� ���� ��µ� (�䰡���� : ������ )
	* peg.fly();
	*/
	

	Horse* obj1 = new Horse();
	obj1->speak();   // ������
	((Pegasus*)obj1)->fly();
	//obj1->fly(); / �ȵǴ� ���� horse�� ��� �䰡������ ��ӹ޾����ϱ� �� �����ִ�.
	delete obj1;
	cout << "-------------------------------" << endl;
	Pegasus* obj2 = new Pegasus();
	obj2->speak(); // �䰡���� ������
	obj2->fly();
	delete obj2;
	cout << "-------------------------------" << endl;

	Horse* obj3 = new Pegasus();
	obj3->speak(); //  ������ Ÿ���� horse�ϱ� 
	//((Pegasus*)obj3)->speak(); // ����ȯ 
	((Pegasus*)obj3)->fly(); // ����ȯ 
	delete obj3;
	//Pegasus* obj4 = new Horse();  / horse ��ŭ ���� pegasus ���� �ְڴ� ..... ���� ���� ���� �ִ� �� �Ұ���


}