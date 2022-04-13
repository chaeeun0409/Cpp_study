#include <iostream>
#include <vector>
using namespace std;

const int num = 5;
struct Book
{
	string title;
	int grade;
};

void fillList(Book & Book_List) {
	cout << "책 제목 입력 :";
	cin >> Book_List.title;
	cout << "책 등급 입력 :";
	cin >> Book_List.grade;

	cout << "\n\n";
}
int main() {
	vector<Book>Book_list(num);  //방 5개 만듬 (string)

	for (int i = 0; i < num; i++) {
		fillList(Book_list[i]);
	}

	cout << "\n\n======================\n\n";

	for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << Book_list[i].title << endl;
		cout << "책 등급 : " << Book_list[i].grade << endl;
	}
}