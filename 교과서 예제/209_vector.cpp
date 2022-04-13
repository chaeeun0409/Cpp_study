#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<string> v1; //동적 할당 
	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");
	for (auto e : v1) {  //v1에서 가져올거야 e라는 것을 / auto는 처음부터 끝까지
		cout << " " << e;
	}
	cout << endl;
	return 0;

}
