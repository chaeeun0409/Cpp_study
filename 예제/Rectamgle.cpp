#include <iostream>
using namespace std;

class Shape {   //�簢��, Ÿ��, �ﰢ���� �θ� Ŭ����
protected:
    int x, y, width, height;

public:
    Shape() :x(0), y(0), width(0), height(0) { cout << "���� ������" << endl; }

    Shape(int x, int y, int w, int h) :x(x), y(y), width(w), height(h) {
        cout << "�Ű����� ���� ������" << endl;
    }

    virtual void Draw() {     
        cout << "������ �׸��ϴ�." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width <<  " height : " << height << endl;
    }

    virtual ~Shape() {
        cout << "���� �Ҹ���" << endl << endl; 
    }
};

class Rectangle : public Shape {   //�簢��
    int k;
public:
    Rectangle() : Shape() {
        k = 0;
        cout << "�簢�� ������" << endl;
    }

    Rectangle(int x, int y, int width, int height, int k) : Shape(x, y, width, height) {
        cout << "�Ű����� �簢�� ������" << endl;
    }

    void Draw() {
        cout << "�簢���� �׸��ϴ�." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height;
        cout << "k : " << k << endl;
    }

    ~Rectangle() {
        cout << "�簢�� �Ҹ���" << endl; 
    }
};

class Ellipse : public Shape {   //Ÿ��
public:
    Ellipse() : Shape() {
        cout << "Ÿ�� ������" << endl;
    }

    Ellipse(int x, int y, int width, int height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        cout << "�Ű����� Ÿ�� ������" << endl;
    }

    void Draw() {
        cout << "Ÿ���� �׸��ϴ�." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height << endl;
    }

    ~Ellipse() {
        cout << "Ÿ�� �Ҹ���" << endl; 
    }
};

class Triangle : public Shape {   //�ﰢ��
public:
    Triangle() : Shape() {
        cout << "�ﰢ�� ������" << endl;
    }

    Triangle(int x, int y, int width, int height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        cout << "�Ű����� �ﰢ�� ������" << endl;
    }

    void Draw() {
        cout << "�ﰢ���� �׸��ϴ�." << endl;
        cout << "x : " << x << " y : " << y << " width : " << width << " height : " << height << endl;
    }

    ~Triangle() { 
        cout << "�ﰢ�� �Ҹ���" << endl;
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
/* �����Ҵ�
int main() { 
    Rectangle  r1;
    r1.Draw();

    Rectangle r2 (1, 2, 3, 4);
    r2.Draw();

    //Ÿ�� �� �� �����
    Ellipse e1;
    e1.Draw();

    Ellipse e2(4,3,2,1);
    e2.Draw();


    //�ﰢ�� �� �� �����
    Triangle t1;
    t1.Draw();
 

    Triangle t2(5, 6, 7, 8);
    t2.Draw();


    return 0;
}
*/
/* �����Ҵ�
int main() {
   Rectangle* r1 = new Rectangle;
   r1->Draw();

   Rectangle* r2 = new Rectangle(1, 2, 3, 4);
   r2->Draw();

   //Ÿ�� �� �� �����
   Ellipse* e1 = new Ellipse;
   e1->Draw();

   Ellipse* r2 = new Ellipse(5, 6, 7, 8);
   r2->Draw();

   //�ﰢ�� �� �� �����

   return 0;
}
*/
