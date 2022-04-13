
#include <iostream>
using namespace std;

class Shape {
public:
	static int count;
	int x, y;

	Shape(int x,int y) : x(x),y(y) {  //��� �ۿ��� ������� �ʱ�ȭ
		cout << count << "��° ����" << endl;
	} 
	virtual void drawCalc() = 0;
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	
};
class Rectangle : public Shape {
public:
	int width, height;
	Rectangle(int x, int y, int w, int h) : Shape(x, y) , width(w),height(h) {}
	void drawCalc(){
		cout << "x ��ǥ : " << getX() << "y ��ǥ" << getY() << endl;
		cout << "�ʺ� : " <<width << "���� : " <<height << "�� �簢���� ���� : " << width * height << endl;
 
	
	}
	
};
class Triangle : public Shape {
public:
	int width, height;
	Triangle(int x, int y,int w,int h) : Shape(x,y) , width(w),height(h){}
	void drawCalc() {
		cout << "x ��ǥ : " << getX() << "y ��ǥ" << getY() << endl;
		cout << "�ʺ� : " << width << "���� : " << height << "�� �ﰢ���� ���� : " << width * height/2 << endl;

	}
};

class Circle : public Shape {
public:
	static double PI;
	int radius;
	Circle(int x, int y ,double r) : Shape(x,y), radius(r){}
	void drawCalc() {
		cout << "x ��ǥ : " << getX() << "y ��ǥ" << getY() << endl;
		cout << "�ѷ�  : " << radius << "�ѷ� : " << radius << "�� ���� ���� : " << PI* radius * radius << endl;

	}
};
double Circle::PI = 3.14;
int Shape::count = 1;
int main() {
	Shape* ps1 = new Rectangle(1,2,34,56);
	ps1->drawCalc();
	Shape* ps2 = new Triangle(3,4,34,56);
	ps2->drawCalc();
	Shape* ps3 = new Circle(5,6,8);
	ps3->drawCalc();
	
}