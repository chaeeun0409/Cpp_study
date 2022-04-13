#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는데 실패했습니다." << endl;
		return 1;
	}
	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;

	input.clear(); // 아래 에러 해결
	input.seekg(-5, ios::cur); // v가 안찍힘 (why)->  c++의 스트림은 eofbit 라는 플래그를 가지고있는데, 입출력 함수를 통해 파일의 끝에 도달하게 될 경우 이 파일의 끝에 도달했다는 뜻의 
								// 플래그가 켜지게 되며 그 이후 입출력 함수가 먹히지 않게 된다.
	cout << (char)input.get() << endl;
	input.close();
	return 0;

	//peek  함수는 입출력 함수가 아니기 때문에 이런 일은 없다. 이를 되돌리기 위해서는 eofbit를 다시 해제하는 clear() 함수를 사용하면 된다.
}