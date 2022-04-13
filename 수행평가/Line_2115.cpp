//2115 이채은
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class  Point {
private:
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Line {
	Point p1;
	Point p2;
	char* name;

public :
	Line(Point& p1, Point& p2, char* name_cir) : p1(p1), p2(p2) {
		name = new char[strlen(name_cir) + 1];
		strcpy(name, name_cir);
		cout << "선 생성" << endl;
	}
	void line_len() {
		int num1 = p2.getX() - p1.getX();
		int num2 = p2.getY() - p1.getY();
		cout << "점( " << p1.getX() << ", " << p1.getY() << " ) 와 점( " << p2.getX() << ", " << p2.getY() 
			<< ") 를 잇는 "<< name << " 의 길이 : " << sqrt((num1 * num1) + (num2 * num2)) << endl;
	}
	~Line() {
		cout << "선 소멸" << endl;

	}
};
int main() {
	char name[11];
	int x, y; 
	srand((unsigned)time(0));
	cout << "선 이름을 입력하세요 : ";
	cin >> name;

	x = (rand() % 61) - 30;
	y = (rand() % 61) - 30;
	Point p1(x, y);

	x = (rand() % 61) - 30;
	y = (rand() % 61) - 30;
	Point p2(x, y);

	Line line(p1, p2, name);
	line.line_len();

	return 0;

}