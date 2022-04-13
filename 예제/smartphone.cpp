#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Camera {
public:

	Camera() {
		cout << "Camera 생성자" << endl; 
	}
	~Camera() {
		cout << "Camera 소멸자" << endl; 
	}
	void shutter() {
		cout << "사진을 찍다" << endl;
	}
	void showinfo() {
		cout << "200만 화소" << endl;
	}
};

class Phone {
	char number[12];
	
public:
	Phone() {
		cout << "Phone 생성자" << endl; 
	}
	Phone(const char* number) {
		strcpy(this->number, number);
	}
	~Phone() {
		cout << "Phone 소멸자" << endl; 
	}

	void call() {
		cout << "전화를 걸다" << endl;
	}
	void showinfo() {
		cout << "전화번호 : " << number << endl;
	}
	void setnumber() {
		cout << "smartphone 생성자 : " << number << endl;
	}
};

class SmartPhone : public Camera , public Phone {
public:
	SmartPhone() { 
		cout << "SmartPhone 생성자" << endl; 
	}

	SmartPhone(const char* number) : Phone(number) {
		cout << "smartphone 생성자 : " << number << endl;
	}
	~SmartPhone() {
		cout << "Smartphone 소멸자" << endl; 
	}

};
class MobilePhone :public Phone{
	Camera cam;
public:

	MobilePhone() {
		cout << "SmartPhone 생성자" << endl;
	}

	MobilePhone(const char* number) : Phone(number){
		cout << "Mobilephone 생성자 : " << number << endl;
	}
	~MobilePhone() {
		cout << "Smartphone 소멸자" << endl;
	}
	void clickShutter() {
		cam.shutter();
	}
};

class Mobiledevice {
	Camera mo;
	Phone phon;
	
public:

	Mobiledevice() {
		cout << "SmartPhone 생성자" << endl;
	}
	Mobiledevice(const char* number)  {
		cout << "Mobiledevice 생성자 : " <<  phon.setnumber() << endl;
	}

	Mobiledevice(){
		cout << "Mobiledevice 생성자 : " << endl;
	}
	~Mobiledevice() {
		cout << "Smartphone 소멸자" << endl;
	}
	void clickShutter() {
		mo.shutter();
	}
	void MobileCall() {
		phon.call();
	}
	void Mobileshwoinfo() {
		phon.showinfo();
	}

};
int main() {
	SmartPhone sp("01086968547");
	sp.call();
	sp.shutter();
	//sp.showinfo();

	
	MobilePhone mp("01086968547");
	mp.call();
	mp.clickShutter();
	mp.showinfo();

	Mobiledevice md("01086968547");
	md.MobileCall();
	md.clickShutter();
	md.Mobileshwoinfo();
	return 0;
}