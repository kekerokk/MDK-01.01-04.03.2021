#pragma once
#include <iostream>
#include <list>
#include <locale.h>
using namespace std;
template<typename T>
class Shaker
{
public:
	void add_element_front(list<T>& list, T element);
	void print(list<T> list);
	void del_element_front(list<T>& list);
	int equality_test(list<T> list_first, list<T> list_second);
	void add_element_in_pos(list<T>& list, T element, int pos);
	void del_element_in_pos(list<T>& list, int pos);
private:
	typename list<T>::iterator Iter;
	typename list<T>::iterator Iter2;
	typename list<T>::iterator Iter3;
	typename list<T>::iterator Class_Iter; // ����������� ��� ���������� �� ������
	list<T> Class_MyList;
};

template<typename T>
inline void Shaker<T>::del_element_in_pos(list<T>& list, int pos)
{
	setlocale(LC_ALL, "ru");
	if (list.empty())
	{
		cout << "������ ����";
	}
	else
	{
		Iter3 = list.begin();
		for (int i = 1; i < pos; Iter3++);
		list.erase(Iter3);
	}
}

template<typename T>
inline void Shaker<T>::add_element_in_pos(list<T>& list, T element, int pos)
{
	setlocale(LC_ALL, "ru");
	for (Iter = list.begin(); Iter != list.end(); Iter++)
	{
		Class_MyList.push_back(*Iter);
	}
	Iter = list.begin();
	Class_Iter = Class_MyList.begin();
	int list_size = list.size();
	list.clear();
	for (int i = 0; i < list_size+1; i++, Class_Iter++)
	{
		if (i + 1 == pos)
		{
			list.push_back(element);
			Class_Iter--;
		}
		else
		{
			list.push_back(*Class_Iter);
		}
	}
	cout << "\n������� �������� �� " << pos << " �������.\n";
}

template<typename T>
inline void Shaker<T>::add_element_front(list<T>& list, T element)
{
	list.push_front(element);
}

template<typename T>
inline void Shaker<T>::print(list<T> list)
{
	setlocale(LC_ALL, "ru");
	if (list.size() == 0)
	{
		cout << "������ ����" << endl;
	}
	for (Iter = list.begin(); Iter != list.end(); Iter++)
	{
		cout << *Iter << endl;
	}
}

template<typename T>
inline void Shaker<T>::del_element_front(list<T>& list)
{
	list.pop_front();
}

template<typename T>
inline int Shaker<T>::equality_test(list<T> list_first, list<T> list_second)
{
	setlocale(LC_ALL, "ru");
	Iter = list_first.begin(), Iter2 = list_second.begin();
	if (list_first.size() != 0 && list_second.size() != 0)
	{
		if (list_first.size() == list_second.size())
		{
			cout << "�������� �� ��������� ������� ��������...\n" << endl;
			for (Iter; Iter != list_first.end(); Iter++,Iter2++)
			{
				if (*Iter == *Iter2)
				{
				}
				else
				{
					cout << "������ �� �����\n";
					return -1;
				}
			}
			cout << "������ �����\n";
			return 1;
		}
		else
		{
			cout << "������ ������������\n";
			return -1;
		}
	}
	else
	{
		cout << "���� ��� ��� ������� �� ���������\n";
		return -1;
	}
}
