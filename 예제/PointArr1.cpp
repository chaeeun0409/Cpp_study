#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
	Point() {
		cout << "기본생성자" << endl;
	}
	~Point() {
		cout << "("<< x << "," << y << ")"<< "기본소멸자 " << endl;
	}

};
int main() {
	Point arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;

	}
	

}