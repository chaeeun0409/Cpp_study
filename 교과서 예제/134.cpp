#include <iostream>
#include <memory>
using namespace std;
class Re {
	int x, y, z;
public:
	static int count;
	Re() : x{ 0 }, y{ 0 }, z{ 0 }{
		count++;
	}
};
