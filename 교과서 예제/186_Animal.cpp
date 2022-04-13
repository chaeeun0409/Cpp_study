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
		cout << "개소리 멍멍 " << " ";
	}
	virtual void EaeDiets(const char* eat) const {
		cout << eat << endl;
		a = 5;
	}

};
class Cat : public Animal {
public:
	virtual void SoundSpeak() {
		cout << "고양이 야옹" << " ";
	}
	virtual void EaeDiets(const char* eat) const {    
		cout << eat << endl;
	}
};
int main(void) {
	Dog dog;
	dog.SoundSpeak();
	dog.EaeDiets("개 사료");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");

	Animal any;  //순수 가상 클래스라서 못 만듬

}

