#include <iostream>
using namespace std;
class complex {
public:
	int imaginmary;
	int real;

	complex() {
		imaginmary = 0;
		real = 0;
	}


	complex(int real, int imaginmary) {
		this->imaginmary = imaginmary;
		this->real = real;
	}
	complex& operator+(complex&n) {
		complex ctmp;
		ctmp.real = this->real + n.real;
		ctmp.imaginmary = this->imaginmary + n.imaginmary;
		return ctmp;
	}
	complex& operator-(complex& n) {
		complex ctmp;
		ctmp.real = this->real - n.real;
		ctmp.imaginmary = this->imaginmary - n.imaginmary;
		
		return ctmp;
	}
	complex& operator*(complex& n) {
		complex ctmp;
		ctmp.real = this->real * n.real+this->imaginmary * n.imaginmary*-1;
		ctmp.imaginmary = this->real*n.imaginmary + this->imaginmary*n.real;

		return ctmp;
	}
	complex& operator++() {
		++real;
		return *this;

	}
	complex& operator++(int) {
		complex c(real,imaginmary);
		c.real = real++;
		return c;

	}
	complex& operator--() {
		--real;
		return *this;

	}
	complex& operator--(int) {
		complex c(real, imaginmary);
		c.real = real--;
		return c;

	}
	void print() {
		if (real == 0 && imaginmary == 0) {
			cout << "0" << endl; 
		}
		else if (real == 0) { 
			cout << imaginmary << "i" << endl; 
		}
		else if (imaginmary == 0) {
			cout << real << endl; 
		}
		else if (abs(imaginmary) ==1) {
			cout << real << "-i" << endl; 
		}
		else if (imaginmary == 1) {
			cout << real << "+" << "i" << endl;

		}
		else if (real == 0) {
			cout << "i" << endl;
		}
		else if (imaginmary < 0) { 
			cout << real << "-" << abs(imaginmary) << "i" << endl; 
		}
		else cout << real << "+" << imaginmary << "i" << endl;
	}
	
};

int main() {
	cout << "**********" << endl;
	complex c1(0,0);
	complex c2(1, 1);
	complex c3(2, 2);
	complex c4(0, -2);
	complex c5(-5, 0);
	complex c6(3, 0);
	complex c7(0, 7);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
	c6.print();
	c7.print();
	//c1,c2,c3,c4,c5,c6,c7
	cout << "----------" << endl;
	c1 = c2 + c3;
	c1.print();
	c2.print();
	c3.print();
	//c1,c2,c3
	cout << "&&&&&&&&&" << endl;
	c7 = c1 - c4;
	c1 = c7 - c2;
	c6 = c2 * c4;
	c1.print();
	c2.print();
	c4.print();
	c6.print();
	c7.print();
	//c1,c2,c4,c6,c7
	cout << "$$$$$$$$$$" << endl;
	complex c9;
	complex c8;
	c9= ++c4;
	c4.print();
	c8.print();
	c9.print();
	//c4,c9,c8
	cout << "%%%%%%%%%%" << endl;
	complex c10;
	c10 = c4++;
	c4.print();
	c10.print();
	//c4,c10
	cout << "#########" << endl;
	complex c11;
	c11 = c2--;
	c2.print();
	c11.print();
	// c2, c11
	cout << "!!!!!!!!!!" << endl;
	complex c12;
	c12 = --c2;
	c2.print();
	c12.print();
	//c2,c12
	return 0;
}