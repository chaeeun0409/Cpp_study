#include <iostream>
using namespace std;
class Point {

private:
	int x;
	int y;
public:
	void setX(int xx);
	void setY(int yy);
	int getX();
	int getY();
};
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
int Point::getX(int x) { return x; }
int Point::getY(int x) { return y; }
int main() {
	int x, y;
	cout << "ÁÂÇ¥ : ";
	cin >> x >> y;
	Point p;
	p.setX(x);			//information hiding
	p.setY(y);
	cout << "Á¡(" << p.getX() << "," << p.getY() << endl;
	return 0;
}