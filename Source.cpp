#include<iostream>
using namespace std;
#include"Header.h";
void money::In(void)
{
	cout << "\n¬ведите сколько рублей и копеек:";
	cout << "\nруб:"; cin >> x;
	cout << "коп:";
	cin >> y;
	if (y > 99) {
		cout << "ќшибка.¬веденное количество копеек - ошибочно";
		exit(0);
	}
	

}
void money::Out(void)
{	//прописать услови€ если копеек больше 99 то занести целую часть в рубли!!!!
	if (y > 99) {

		x += (y / 100);
		y %= 100;
	}
	cout << "|" << x << "." << y << "|";
}
int money::cop()
{
	int c = 0;
	c = ((x * 100) + y);
	return c;

}

