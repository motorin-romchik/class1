#include<iostream>
using namespace std;
#include"Header.h";
void money::In(void)
{
	cout << "\n������� ������� ������ � ������:";
	cout << "\n���:"; cin >> x;
	cout << "���:";
	cin >> y;
	if (y > 99) {
		cout << "������.��������� ���������� ������ - ��������";
		exit(0);
	}
	

}
void money::Out(void)
{	//��������� ������� ���� ������ ������ 99 �� ������� ����� ����� � �����!!!!
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

