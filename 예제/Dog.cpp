#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() { cout << "Animal ������()" << endl; }
	Animal(string name, int weight) {
		cout << "�Ű����� Animal ������()" << endl;
		this->name = name;
		this->weight = weight;
	}
	~Animal() { cout << "Animal �Ҹ���()" << endl; }

	//string getName() {
	//	return name;
//	}
	//int  getWeight() {
		//return weight;
	//}
	//void print() {
	void print() {
		cout << name << " " << weight << " " ;

	}
};
class Dog : public Animal{
	int height;
public:
	Dog() { cout << "Dog ������()" << endl; }
	Dog( string name, int weight, int height) :Animal(name, weight){

		cout << "�Ű����� Dog ������() " << endl;
		this->height = height;

	}
	~Dog() { cout << "Dog�Ҹ���()" << endl; }

	void print() {
		Animal::print();
		cout << height << endl;
	}
};
int main() {
	Dog d1("������", 3, 50);
	d1.print();
	return 0;
}