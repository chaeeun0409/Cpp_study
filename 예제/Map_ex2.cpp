#include <iostream>
#include <map>
#include <string>
using namespace std;

class aaa {
public:
	int x;
	int y;
	float z;

};
ostream& operator<<(ostream& out , aaa& a) {
	out << a.x << a.y << a.z << endl;
	return out;
}
int main() {
	map<int, aaa> m;
	aaa aobj;

	aobj.x = 7;
	aobj.y = 1;
	aobj.z = 1.234;
	m['c'] = aobj;

	aobj.x = 5;
	m['b'] = aobj;

	aobj.x = 3;
	aobj.y = 7;
	aobj.z = 7.234;
	m['d'] = aobj;

	for (map<int, aaa>::iterator mi = m.begin(); mi != m.end(); mi++)
		cout << (*mi).first << " " << mi->second << endl;	

	return 0;


}