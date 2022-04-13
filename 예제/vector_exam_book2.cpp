#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int num = 5;
struct Book
{
	string title;
	int grade;
};

bool fillList(Book& Book_List) {  
	cout << "å ���� �Է� :";
	//cin >> Book_List.title;
	getline(cin, Book_List.title);
	if (Book_List.title == "quit") return false;
	cout << "å ��� �Է� :";
	cin >> Book_List.grade;
	cin.get();
	cout << "\n\n";
	return true;
}
void ShowList(Book & Book_list) {  //print
	cout << "å ���� : " << Book_list.title << "     å ��� : " << Book_list.grade << endl;
}
int main() {
	vector<Book>Book_list; // ����
	Book temp;
	while (fillList(temp)) {
		Book_list.push_back(temp);
	}
	int num = Book_list.size();
	cout << "\n\n======================\n\n";

	/*for (int i = 0; i < num; i++) {
		cout << "å ���� : " << Book_list[i].title << endl;
		cout << "å ��� : " << Book_list[i].grade << endl;
	}*/

	vector<Book>::iterator ptr; //iter �����
	for (ptr = Book_list.begin(); ptr != Book_list.end(); ptr++) {  
		ShowList(*ptr);
	}

	//�߰��� ��
	//���� 
	//���

	vector<Book> old_List(Book_list);  //���� ������

	cout << "==========old==========" << endl;
	for (auto& e : old_List) { 
		cout << "å ���� : " << e.title << "     å ��� : " << e.grade << endl;
	}

	//���� start
	if (num > 5) {
		Book_list.erase(Book_list.begin()+1, Book_list.end());  //begin+1 �ϸ� begin �������� ����
	}
	cout << "==========book_list==========" << endl;
	for (auto& e : Book_list) {
		cout << "å ���� : " << e.title << "     å ��� : " << e.grade << endl;
	}

	//���� start
	cout << "==========book_list insert==========" << endl;
	Book_list.insert(Book_list.begin(), old_List.begin()+1, old_List.begin()+4);
	for (auto& e : Book_list) {
		cout << "å ���� : " << e.title << "     å ��� : " << e.grade << endl;
	}

	//��ȯ
	cout << "=========list swap=========" << endl;
	Book_list.swap(old_List);
	cout << "==========book_list==========" << endl;
	for (auto& e : Book_list) ShowList(e);
	cout << "==========old==========" << endl;
	for (auto& e : old_List) ShowList(e);

	/*if (num > 2) {
		Book_list.erase(Book_list.begin());
	}
	cout << "==========old==========" << endl;
	for (auto& e : Book_list) {
		cout << "å ���� : " << e.title << "     å ��� : " << e.grade << endl;
	}


	if (num > 2) {
		Book_list.erase(Book_list.end()-1);
	}
	cout << "==========old==========" << endl;
	for (auto& e : Book_list) {
		cout << "å ���� : " << e.title << "     å ��� : " << e.grade << endl;
	}*/

}