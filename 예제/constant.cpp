/*#include <iostream>
using namespace std;
#define MAX_COUNT 100
#define MAX(a,b)a>b?a:b
int main() {
	cout << MAX_COUNT << endl;
	int nMAX = MAX(100, 200);
	cout << nMAX << endl;
	return 0;
}
 */
#include <iostream>
using namespace std;
const int MAX_COUNT = 100;     // #define MAX_COUNT 100 로 바꿀수도 있다. 중요!!
#define MAX(a,b)a>b?a:b
int main() {
	cout << MAX_COUNT << endl;
	int nMAX = MAX(100, 200);
	cout << nMAX << endl;
	return 0;
}