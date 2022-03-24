#include<iostream>
#include<windows.h>
using namespace std;
#include"Header.h"
void fun() {
	int n, res = 0;
	cout << "Динамический массив" << endl;
	cout << "Введите количество элементов статического массива: ";
	cin >> n;
	money* D = new money[n];
	for (int i = 0; i < n; i++)
	{
		D[i].In();
		D[i].Out();
		res = D[i].cop();
		cout << "\nВсего копеек: " << res;
	}
	delete[]D;
}
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 3;
	cout << "HI, программа для работы с валютой готова...." << endl;
	int res;
	int copeek;
	money A, * B = new money;
	//delete[]B; так вызываем диструктор он вызывается сам впринципе
	money C[size];

	for (;;) {
		//system("cls");
		cout << endl;
		cout << "Меню." << endl;
		cout << "1.одиночный статический элемент" << endl;
		cout << "2.одиночный динамический элемент" << endl;
		cout << "3.статический массив из " << size << " элементов" << endl;
		cout << "4.динамический массив" << endl;
		cout << "5.Выход из программы" << endl;

		int choose = 0;
		cout << "Выбор: "; cin >> choose;
		switch (choose) {
		case 1:
			res = 0;
			cout << "\nОдиночный статический элемент";
			A.In();
			A.Out();
			res = A.cop();
			cout << "\nВсего копеек: " << res;
			break;
		case 2:
			res = 0;
			cout << "\nОдиночный динамический элемент";
			B->In();
			B->Out();
			res = B->cop();
			cout << "\nВсего копеек: " << res;
			break;
		case 3:
			cout << "\nСтатический массив из " << size << " элементов";
			res = 0;
			for (int i = 0; i < size; i++)
			{
				C[i].In();
				C[i].Out();
				res = C[i].cop();
				cout << "\nВсего копеек: " << res;

			}
			break;
		case 4:
			fun();
			break;
		case 5:
			return 0;
			break;
		}
	}



}