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
	cout << "å ���� �Է� :";
	cin >> Book_List.title;
	cout << "å ��� �Է� :";
	cin >> Book_List.grade;

	cout << "\n\n";
}
int main() {
	vector<Book>Book_list(num);  //�� 5�� ���� (string)

	for (int i = 0; i < num; i++) {
		fillList(Book_list[i]);
	}

	cout << "\n\n======================\n\n";

	for (int i = 0; i < num; i++) {
		cout << "å ���� : " << Book_list[i].title << endl;
		cout << "å ��� : " << Book_list[i].grade << endl;
	}
}