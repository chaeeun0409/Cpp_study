#include <iostream>
using namespace std;
class CONTAC600 {
public:
	void SnotTake(int id) { cout << id << "Äà¹° ³´±â" << endl; }
	void SneezeTake(int id) { cout << id << "ÀçÃ¤±â ¸Ü±â " << endl; }
	void SnuffleTake(int id) { cout << id << " ÄÚ ¶Õ±â " << endl; }
	void take(int id) {
		SnotTake(id);
		SneezeTake(id);
		SnuffleTake(id);
	}
};

class Patient {
public:
	int id;
public:
	void takeCONTAC600(CONTAC600 cap) { cap.take(id); }

};
int main() {
	Patient suf = { 1001 };
	suf.takeCONTAC600(CONTAC600());
	return 0;
}