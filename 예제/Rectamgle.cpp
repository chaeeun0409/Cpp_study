#include <iostream>
using namespace std;

class Shape {   //사각형, 타원, 삼각형의 부모 클래스
protected:
    int x, y, width, height;

public:
    Shape() :x(0), y(0), width(0), height(0) { cout << "도형 생성자" << endl; }

    Shape(int x, int y, int w, int h) :x(x), y(y), width(w), height(h) {
        cout << "매개변수 도형 생성자" << endl;
    }

    virtual void Draw() {     
        cout << "도형을 그립니다." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width <<  " height : " << height << endl;
    }

    virtual ~Shape() {
        cout << "도형 소멸자" << endl << endl; 
    }
};

class Rectangle : public Shape {   //사각형
    int k;
public:
    Rectangle() : Shape() {
        k = 0;
        cout << "사각형 생성자" << endl;
    }

    Rectangle(int x, int y, int width, int height, int k) : Shape(x, y, width, height) {
        cout << "매개변수 사각형 생성자" << endl;
    }

    void Draw() {
        cout << "사각형을 그립니다." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height;
        cout << "k : " << k << endl;
    }

    ~Rectangle() {
        cout << "사각형 소멸자" << endl; 
    }
};

class Ellipse : public Shape {   //타원
public:
    Ellipse() : Shape() {
        cout << "타원 생성자" << endl;
    }

    Ellipse(int x, int y, int width, int height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        cout << "매개변수 타원 생성자" << endl;
    }

    void Draw() {
        cout << "타원을 그립니다." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height << endl;
    }

    ~Ellipse() {
        cout << "타원 소멸자" << endl; 
    }
};

class Triangle : public Shape {   //삼각형
public:
    Triangle() : Shape() {
        cout << "삼각형 생성자" << endl;
    }

    Triangle(int x, int y, int width, int height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        cout << "매개변수 삼각형 생성자" << endl;
    }

    void Draw() {
        cout << "삼각형을 그립니다." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height << endl;
    }

    ~Triangle() { 
        cout << "삼각형 소멸자" << endl;
    }
};
int main() {
   
    Shape* rs2[6];
    cout << "--------------------" << endl;
    rs2[0] = new Rectangle();
    cout << "--------------------" << endl;
    rs2[1] = new Rectangle(1,2,3,4, 5);
    cout << "--------------------" << endl;
    rs2[2] = new Ellipse();
    cout << "--------------------" << endl;
    rs2[3] = new Ellipse(4,3,2,1);
    cout << "--------------------" << endl;
    rs2[4] = new Triangle();
    cout << "--------------------" << endl;
    rs2[5] = new Triangle(5,6,7,8);
    cout << "--------------------" << endl;
    for (int i = 0; i < 6; i++)
        rs2[i]->Draw();
    cout << "--------------------" << endl;
    for (int i = 0; i < 6; i++)
         delete rs2[i];

}
/* 정적할당
int main() { 
    Rectangle  r1;
    r1.Draw();

    Rectangle r2 (1, 2, 3, 4);
    r2.Draw();

    //타원 두 개 만들기
    Ellipse e1;
    e1.Draw();

    Ellipse e2(4,3,2,1);
    e2.Draw();


    //삼각형 두 개 만들기
    Triangle t1;
    t1.Draw();
 

    Triangle t2(5, 6, 7, 8);
    t2.Draw();


    return 0;
}
*/
/* 동적할당
int main() {
   Rectangle* r1 = new Rectangle;
   r1->Draw();

   Rectangle* r2 = new Rectangle(1, 2, 3, 4);
   r2->Draw();

   //타원 두 개 만들기
   Ellipse* e1 = new Ellipse;
   e1->Draw();

   Ellipse* r2 = new Ellipse(5, 6, 7, 8);
   r2->Draw();

   //삼각형 두 개 만들기

   return 0;
}
*/
