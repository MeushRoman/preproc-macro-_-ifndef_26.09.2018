#include <iostream>
#include "prime.h"
#include "Search_in_array.h"
#include <time.h>
#include <string>
#include <fstream>
#include <cstring>
#include <Windows.h>

#define prime 0


using namespace std;


int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251); // вывод русского текста введеного с консоли в файл

	ofstream out_file("out.txt", ios::out);

	//string s;
	//cin >> s;
	//out_file << s;

	char str[100];

	cin.getline(str, 100);


	char* context;
	char* p = strtok_s(str, " ", &context);

	while (p != NULL) {
		out_file << p << endl;
		p = strtok_s(context, " ", &context);
	}



	


/*#if prime < 2

	int x;
	cin >> x;
	cout << IsPrime(x);
	cout << endl;

#endif

#if prime < 1

	int a[5] = { 5,7,12,89,32 };

	cout << PrimesInArray(a, 5);
	cout << endl;

#endif*/

	system("pause");
	return 0;
}