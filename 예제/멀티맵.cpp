#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	
	multimap<string, int> m;
	m.insert(pair<string, int>("a", 1));
	m.insert(pair<string, int>("c", 2));
	m.insert(pair<string, int>("b", 3));
	m.insert(pair<string, int>("b", 4));
	m.insert(pair<string, int>("a", 5));
	m.insert(pair<string, int>("b", 6));

	for (multimap<string, int>::iterator mi = m.begin(); mi != m.end(); mi++)
		cout << (*mi).first << " " << mi->second << endl;

	cout << "=======================" << endl;
	cout << m.count("a") << endl;
	cout << m.count("b") << endl;
	cout << m.count("c") << endl;
	cout << "=======================" << endl;

	pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;
	ppp = m.equal_range("b");
	
	for (multimap<string, int>::iterator mi = ppp.first; mi != ppp.second; mi++)
		cout << mi->first << " " << mi->second << endl;

}