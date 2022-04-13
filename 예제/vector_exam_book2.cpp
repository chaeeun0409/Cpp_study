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
	cout << "책 제목 입력 :";
	//cin >> Book_List.title;
	getline(cin, Book_List.title);
	if (Book_List.title == "quit") return false;
	cout << "책 등급 입력 :";
	cin >> Book_List.grade;
	cin.get();
	cout << "\n\n";
	return true;
}
void ShowList(Book & Book_list) {  //print
	cout << "책 제목 : " << Book_list.title << "     책 등급 : " << Book_list.grade << endl;
}
int main() {
	vector<Book>Book_list; // 동적
	Book temp;
	while (fillList(temp)) {
		Book_list.push_back(temp);
	}
	int num = Book_list.size();
	cout << "\n\n======================\n\n";

	/*for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << Book_list[i].title << endl;
		cout << "책 등급 : " << Book_list[i].grade << endl;
	}*/

	vector<Book>::iterator ptr; //iter 사용방법
	for (ptr = Book_list.begin(); ptr != Book_list.end(); ptr++) {  
		ShowList(*ptr);
	}

	//추가할 것
	//삭제 
	//백업

	vector<Book> old_List(Book_list);  //복사 생성자

	cout << "==========old==========" << endl;
	for (auto& e : old_List) { 
		cout << "책 제목 : " << e.title << "     책 등급 : " << e.grade << endl;
	}

	//삭제 start
	if (num > 5) {
		Book_list.erase(Book_list.begin()+1, Book_list.end());  //begin+1 하면 begin 다음부터 없앰
	}
	cout << "==========book_list==========" << endl;
	for (auto& e : Book_list) {
		cout << "책 제목 : " << e.title << "     책 등급 : " << e.grade << endl;
	}

	//삽입 start
	cout << "==========book_list insert==========" << endl;
	Book_list.insert(Book_list.begin(), old_List.begin()+1, old_List.begin()+4);
	for (auto& e : Book_list) {
		cout << "책 제목 : " << e.title << "     책 등급 : " << e.grade << endl;
	}

	//교환
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
		cout << "책 제목 : " << e.title << "     책 등급 : " << e.grade << endl;
	}


	if (num > 2) {
		Book_list.erase(Book_list.end()-1);
	}
	cout << "==========old==========" << endl;
	for (auto& e : Book_list) {
		cout << "책 제목 : " << e.title << "     책 등급 : " << e.grade << endl;
	}*/

}