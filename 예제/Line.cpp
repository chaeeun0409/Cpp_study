//2115 이채은
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
		cout << "선의 이름을 입력하세요. : ";
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
		
		cout << "점(" << rand()%101 << "," << rand() % 101 << ")" << "와 점(" << rand() % 101 << "," << rand() % 101 << ") 를 잇는 " << name << "의 길이 : " << anw;
	}

	Line() {
		cout << "선 생성" << endl;
	}
	~Line() {
		cout << "선 소멸" << endl;
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