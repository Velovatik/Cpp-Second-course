#include <iostream>
#include <Windows.h> 
#include "strutil.h"

using namespace std;

int main()
{
	//Тесты для задания 2
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char strTest1[8] = "Strstrs";
	char aTest1[4] = "Str";
	if (srtConteins(aTest1, strTest1) != 2)
		cout << "TEST FAILED" << endl;
	else cout << "TEST COMPLETED SUCCSESSFULLY" << endl;

	char strTest2[1000] = "string";
	char aTest2[500] = "ing";
	if (srtConteins(aTest2, strTest2) != 3)
		cout << "TEST FAILED" << endl;
	else cout << "TEST COMPLETED SUCCSESSFULLY" << endl;

	char strTest3[1000] = "crocozyabra";
	char aTest3[500] = "zyabra";
	if (srtConteins(aTest3, strTest3) != 5)
		cout << "TEST FAILED" << endl;
	else cout << "TEST COMPLETED SUCCSESSFULLY" << endl;

	char strTest4[1000] = "crocozyabra";
	char aTest4[500] = "cv";
	if (srtConteins(aTest4, strTest4) == -1)
		cout << "TEST COMPLETED SUCCSESSFULLY" << endl;
	else cout << "TEST FAILED" << endl;

	char str[1000];
	char a[500];

	cout << "Введите строку: " << endl;
	cin.getline(str, 1000);
	cout << "Введите строку, которую будете искать: " << endl;
	cin.getline(a, 500);
	cout << srtConteins(a, str) + 1;
}