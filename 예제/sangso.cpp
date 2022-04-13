#include <iostream>
using namespace std;


class grade {
public:
	int ko;
	int en;
	int ma;
};
class studentgr : public grade {
public :
	int id;
	char name;
	string grade = "g";
};

int main() {
	studentgr grd;
	studentgr stu1;
	studentgr stu2;
	stu2.id = 222 ;
	stu2.name = "Àü¿ìÄ¡" ;
	

}
