#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
	int i = 0;
	while(i==0) {
	string fst;
	string scnd;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите первое слово: " << endl;
	cin >> fst;
	cout << "¬введите второе слово: " << endl;
	cin >> scnd;
	char ji = scnd[0];
	char bi = fst[0];
	string word1 = fst.replace(fst.begin(), fst.begin() + 1, 1, ji);
	string word2 = scnd.replace(scnd.begin(), scnd.begin() + 1, 1, bi);
	cout << word1 << ' ' << word2 << endl;
	}
	return 0;
}