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
	cout << "Добавление элемента...\n";
	b.add_element_front(MyList, x);
	cout << "Вывод...\n";
	b.print(MyList);
	cout << "Удаление элемента из начала...\n";
	b.del_element_front(MyList);
	cout << "Вывод...\n";
	b.print(MyList);
	cout << "Добавление элементов в списки...\n";
	b.add_element_front(MyList2, x);
	b.add_element_front(MyList, x);
	b.equality_test(MyList, MyList2);
	b.add_element_front(MyList, x2);
	cout << "Добавление элемента в список в определенную позицию\n";
	b.add_element_in_pos(MyList, 4, 2);
	cout << "Вывод...\n";
	b.print(MyList);
	cout << "Удаление элемента с определенной позицией из списка...\n";
	b.del_element_in_pos(MyList, 1);
	b.print(MyList);
	cout << "Сравнение списков на неравенство";
	b.inequality_test(MyList, MyList2);
}