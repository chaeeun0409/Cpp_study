#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Camera {
public:

	Camera() {
		cout << "Camera ������" << endl; 
	}
	~Camera() {
		cout << "Camera �Ҹ���" << endl; 
	}
	void shutter() {
		cout << "������ ���" << endl;
	}
	void showinfo() {
		cout << "200�� ȭ��" << endl;
	}
};

class Phone {
	char number[12];
	
public:
	Phone() {
		cout << "Phone ������" << endl; 
	}
	Phone(const char* number) {
		strcpy(this->number, number);
	}
	~Phone() {
		cout << "Phone �Ҹ���" << endl; 
	}

	void call() {
		cout << "��ȭ�� �ɴ�" << endl;
	}
	void showinfo() {
		cout << "��ȭ��ȣ : " << number << endl;
	}
	void setnumber() {
		cout << "smartphone ������ : " << number << endl;
	}
};

class SmartPhone : public Camera , public Phone {
public:
	SmartPhone() { 
		cout << "SmartPhone ������" << endl; 
	}

	SmartPhone(const char* number) : Phone(number) {
		cout << "smartphone ������ : " << number << endl;
	}
	~SmartPhone() {
		cout << "Smartphone �Ҹ���" << endl; 
	}

};
class MobilePhone :public Phone{
	Camera cam;
public:

	MobilePhone() {
		cout << "SmartPhone ������" << endl;
	}

	MobilePhone(const char* number) : Phone(number){
		cout << "Mobilephone ������ : " << number << endl;
	}
	~MobilePhone() {
		cout << "Smartphone �Ҹ���" << endl;
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
		cout << "SmartPhone ������" << endl;
	}
	Mobiledevice(const char* number)  {
		cout << "Mobiledevice ������ : " <<  phon.setnumber() << endl;
	}

	Mobiledevice(){
		cout << "Mobiledevice ������ : " << endl;
	}
	~Mobiledevice() {
		cout << "Smartphone �Ҹ���" << endl;
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