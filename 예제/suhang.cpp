
#include <iostream>
using namespace std;

class Shape {
public:
	static int count;
	int x, y;

	Shape(int x,int y) : x(x),y(y) {  //블락 밖에서 멤버변수 초기화
		cout << count << "번째 생성" << endl;
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
		cout << "x 좌표 : " << getX() << "y 좌표" << getY() << endl;
		cout << "너비 : " <<width << "높이 : " <<height << "인 사각형의 넓이 : " << width * height << endl;
 
	
	}
	
};
class Triangle : public Shape {
public:
	int width, height;
	Triangle(int x, int y,int w,int h) : Shape(x,y) , width(w),height(h){}
	void drawCalc() {
		cout << "x 좌표 : " << getX() << "y 좌표" << getY() << endl;
		cout << "너비 : " << width << "높이 : " << height << "인 삼각형의 넓이 : " << width * height/2 << endl;

	}
};

class Circle : public Shape {
public:
	static double PI;
	int radius;
	Circle(int x, int y ,double r) : Shape(x,y), radius(r){}
	void drawCalc() {
		cout << "x 좌표 : " << getX() << "y 좌표" << getY() << endl;
		cout << "둘레  : " << radius << "둘레 : " << radius << "인 원의 넓이 : " << PI* radius * radius << endl;

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