#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	Animal(string name, int weight) {
		cout << "매개변수 Animal 생성자()" << endl;
		this->name = name;
		this->weight = weight;
	}
	~Animal() { cout << "Animal 소멸자()" << endl; }

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
	Dog() { cout << "Dog 생성자()" << endl; }
	Dog( string name, int weight, int height) :Animal(name, weight){

		cout << "매개변수 Dog 생성자() " << endl;
		this->height = height;

	}
	~Dog() { cout << "Dog소멸자()" << endl; }

	void print() {
		Animal::print();
		cout << height << endl;
	}
};
int main() {
	Dog d1("강아지", 3, 50);
	d1.print();
	return 0;
}