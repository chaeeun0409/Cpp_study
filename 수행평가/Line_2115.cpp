//2115 ��ä��
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
		cout << "�� ����" << endl;
	}
	void line_len() {
		int num1 = p2.getX() - p1.getX();
		int num2 = p2.getY() - p1.getY();
		cout << "��( " << p1.getX() << ", " << p1.getY() << " ) �� ��( " << p2.getX() << ", " << p2.getY() 
			<< ") �� �մ� "<< name << " �� ���� : " << sqrt((num1 * num1) + (num2 * num2)) << endl;
	}
	~Line() {
		cout << "�� �Ҹ�" << endl;

	}
};
int main() {
	char name[11];
	int x, y; 
	srand((unsigned)time(0));
	cout << "�� �̸��� �Է��ϼ��� : ";
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