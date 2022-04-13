//2115 이채은 vector_2115
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n); //배열 ar의 데이터(n개)를 정렬한 후 중복을 제거하고, 중복 제거된 데이터의 개수를 반환하는 함수
void show(const long ar[], int n); // 배열 ar의 데이터(n개)를 출력하는 함수


int main() {
	vector<long>v;
	long ar[10];
	int i, j, k;
	int temp;
	cout << "데이터 입력 : ";
	for (j = 0; j < 10; j++) {
		cin >> ar[j];
	}
	cout << "데이터 출력 : ";
	for (j = 0; j < 10; j++)
		cout << " " << ar[j];
	cout << "\n";
	for (i = 0; i < 10; i++) {
		for (k = 0; k < 9; k++) {
			if (ar[k] > ar[k + 1]) {
				temp = ar[k];
				ar[k] = ar[k + 1];
				ar[k + 1] = temp;
			}
		}
	}

	cout << "데이터 정렬 후 출력 :";
	for (j = 0; j < 10; j++) 
		cout << " " << ar[j];		
}
