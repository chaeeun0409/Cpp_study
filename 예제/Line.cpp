//2115 ��ä��
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX 30
class Point {
private:
	int x, y;
	char name;
public:
	Point(){
	}
	
	Point(string name, int x, int y) {
		char name;
		this->x = x;
		this->y = y;
		
	}
	void getX() { return x; }
	void getY() { return y; }
	void input();

	

};
void Point::input() {
		cout << "���� �̸��� �Է��ϼ���. : ";
		cin >> name;

	}

class Line {
private:
	Point p1;
	Point p2;
	int x, y, anw;
	const char* name = new char;

public:

	void  print() {
		
		cout << "��(" << rand()%101 << "," << rand() % 101 << ")" << "�� ��(" << rand() % 101 << "," << rand() % 101 << ") �� �մ� " << name << "�� ���� : " << anw;
	}

	Line() {
		cout << "�� ����" << endl;
	}
	~Line() {
		cout << "�� �Ҹ�" << endl;
	}
	Line() {
		
	}
};
int Line::cnt = 0;
const double Line::PI = 3.141592;

int main() {
	srand((unsigned)time(0));
	Point p1();
	Point p2(); 
	return 0;
	
}