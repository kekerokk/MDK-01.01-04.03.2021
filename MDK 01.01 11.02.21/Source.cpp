#include <iostream>
#include <list>
#include "Shaker.h"
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	list<int> MyList;
	list<int> MyList2;
	Shaker<int> b;
	int x = 5;
	int x2 = 3;
	cout << "���������� ��������...\n";
	b.add_element_front(MyList, x);
	cout << "�����...\n";
	b.print(MyList);
	cout << "�������� �������� �� ������...\n";
	b.del_element_front(MyList);
	cout << "�����...\n";
	b.print(MyList);
	cout << "���������� ��������� � ������...\n";
	b.add_element_front(MyList2, x);
	b.add_element_front(MyList, x);
	b.equality_test(MyList, MyList2);
	b.add_element_front(MyList, x2);
	cout << "���������� �������� � ������ � ������������ �������\n";
	b.add_element_in_pos(MyList, 4, 2);
	cout << "�����...\n";
	b.print(MyList);
	cout << "�������� �������� � ������������ �������� �� ������...\n";
	b.del_element_in_pos(MyList, 1);
	b.print(MyList);
	cout << "��������� ������� �� �����������";
	b.inequality_test(MyList, MyList2);
}