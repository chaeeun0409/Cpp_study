#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {
	}
	virtual void SoundSpeak(){}
	virtual void EatDiets(const char* eat) const = 0;
};

class Dog : public Animal {
	int a;
public:
	virtual void SoundSpeak() {
		cout << "���Ҹ� �۸� " << " ";
	}
	virtual void EaeDiets(const char* eat) const {
		cout << eat << endl;
		a = 5;
	}

};
class Cat : public Animal {
public:
	virtual void SoundSpeak() {
		cout << "����� �߿�" << " ";
	}
	virtual void EaeDiets(const char* eat) const {    
		cout << eat << endl;
	}
};
int main(void) {
	Dog dog;
	dog.SoundSpeak();
	dog.EaeDiets("�� ���");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("����� ���");

	Animal any;  //���� ���� Ŭ������ �� ����

}

