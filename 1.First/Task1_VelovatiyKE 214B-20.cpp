#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int variant(char a[30]) {
	int var = abs(static_cast<int>(a[0])) % 2 + 1;
	return var;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите свою фамилию: ";
	char surname[30];
	cin >> surname;
	cout << variant(surname);
}