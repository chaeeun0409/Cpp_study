//2115 ��ä��
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point() {}

	void point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	~Point() {}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};

class Circle {
private:
	Point p;
	int r;
	static int cnt;
	static const double PI;

public:
	Circle() {
		cout << ++cnt << " ��° �� ����" << endl;
	}

	~Circle() {
		cout << cnt-- << " ��° �� �Ҹ�" << endl;
	}

	void area(Point& p, int r) {
		this->p = p;
		this->r = r;
		cout << "���� ��ǥ( " << p.getX() << ", " << p.getY() << " )�� ������ " << r << " �� ���� ����  : " << (r * r * PI) << endl;
	}
};

class Line {
private:
	Point p1;
	Point p2;
	static int cnt;
	char* name;

public:
	Line() {
		cout << ++cnt <<  " ��° �� ����" << endl;
	}

	void Line_name(char* name_cir) {
		this->name = new char[strlen(name_cir) + 1];
		strcpy(this->name, name_cir);
	}

	void line_len(Point& p1, Point& p2) {
		this->p1 = p1;
		this->p2 = p2;
		int a = p2.getX() - p1.getX();
		int b = p2.getY() - p1.getY();
		cout << "�� ( " << p1.getX() << ", " << p1.getY() << " )�� ��( " << p2.getX() << ", " << p2.getY() 
<< " )�� �մ� " << name << " �� ���� : " << sqrt((a * a) + (b * b)) << endl;
	}

	~Line() {
		delete[] name;
		cout << cnt-- << " ��° �� �Ҹ�" << endl;
	}
};

int Circle::cnt = 0;
int Line::cnt = 0;
const double Circle::PI = 3.141592;

int main() {
	srand((unsigned)time(0));
	int select, cir_num, line_num;
	char line_name[11];

	while (true) {
		cout << "============" << endl << "== SELECT ==" << endl << "============" << endl;

		cout << "1. ���� ���� ���ϱ�" << endl << "2. �� �׸���" << endl << "0. ����" << endl;

		cout << "�޴� ���� == > ";
		cin >> select;

		cout << endl;

		if (select == 1) {
			cout << "���� ������ �Է��ϼ���. ";
			cin >> cir_num;

			Point* p = new Point[cir_num];
			Circle* cir = new Circle[cir_num];

			for (int i = 0; i < cir_num; i++) {
				p[i].point(rand() % 101, rand() % 101);
				cir[i].area(p[i], rand() % 10 + 1);
			}
			for (int i = cir_num - 1; i >= 0; i--) {
				cir[i].~Circle();
			}
			for (int i = 0; i < cir_num; i++) {
				p[i].~Point();
			}
		}
		else if (select == 2) {
			cout << "���� ������ �Է��ϼ���. ";
			cin >> line_num;

			Line* line = new Line[line_num];
			Point* p1 = new Point[line_num];
			Point* p2 = new Point[line_num];

			for (int i = 0; i < line_num; i++) {
				cout << "���� �̸��� �Է��ϼ���. : ";
				cin >> line_name;
				line[i].Line_name(line_name);
			}
			for (int i = 0; i < line_num; i++) {
				p1[i].point(rand() % 61 - 30, rand() % 61 - 30);
				p2[i].point(rand() % 61 - 30, rand() % 61 - 30);
				line[i].line_len(p1[i], p2[i]);
			}
			for (int i = line_num - 1; i >= 0; i--) {
				line[i].~Line();
			}
			for (int i = 0; i < line_num; i++) {
				p1[i].~Point();
				p2[i].~Point();
			}
		}
		else if (select == 0) {
			return 0;
		}
		else {
			cout << "�޴��� �ٽ� �����ϼ���." << endl;
		}
		cout << endl << endl << endl;
	}
	return 0;
}