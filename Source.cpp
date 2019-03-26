#include<iostream>
#include<cmath>
#include<fstream>
#include<time.h>
#include<string>
#include<locale.h>
using namespace std;
#define chet(a)(a%2==0)
#define setlocale setlocale(LC_ALL, "");
#define srand srand(time(NULL));
int buf_size = 0;
int cur_size = 0;
void task1()
{
	int a;
	cin >> a;
	chet(a);
	cout << chet(a) << endl;
}


struct flat
{
	int flat_no : 9, rooms : 4, area : 9;
	void print()
	{
		cout << flat_no << " " << rooms << " " << area << endl;
	}
};

struct home
{
	char home_no[30];
	int flat_amout : 9;
	flat* fs = NULL;
	void print() 
	{
		cout << home_no << endl; 
		if (fs != NULL)
		for (int i = 0; i < flat_amout; i++)
		{
			fs[i].print();
		}
	}
};

template<typename T>
void add(T*&fs, T el)
{
	if (buf_size == 0)
	{
		buf_size = 4;
		fs = new T[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			T *tmp = new T[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = fs[i];
			}
			delete[] fs;
			fs = tmp;
		}
	}
	fs[cur_size++] = el;
}



void task2()
{
	int tmp;
	flat el;
	ifstream f("in.txt");

	flat *s = 0;
	while (!f.eof())
	{
		f >> tmp;
		el.flat_no = tmp;
		f >> tmp;
		el.rooms = tmp;
		f >> tmp;
		el.area = tmp;
		add(s, el);
	}
	for (int i = 0; i < cur_size; i++)
	{
		s[i].print();
	}
}

//20.**Разработайте структуру «Квартира»(номер квартиры, кол - во комнат, общая площадь).Разработайте структуру «Дом»(номер, кол - во квартир, массив квартир).
//Создайте экземпляр структуры  и реализуйте для него следующие функции :
//•	Печать всех квартир
//•	Добавление квартиры
//•	Удаление квартиры
//Примечание : массив квартир можно сделать статическим.

void task3()
{
	int tmp;
	flat el;
	home home_el;
	ifstream fin("in.txt");
	home* hs = 0;
	while (!fin.eof())
	{
		fin >> home_el.home_no >> tmp;
		home_el.flat_amout = tmp;
		home_el.fs = new flat[tmp];
		for (int i = 0; i < home_el.flat_amout; i++)
		{
			fin >> tmp;
			home_el.fs[i].flat_no = tmp;

			fin >> tmp;
			home_el.fs[i].rooms = tmp;

			fin >> tmp;
			home_el.fs[i].area = tmp;
		}
		add(hs,home_el);
	}
	for (int i = 0; i < cur_size; i++)
	{
		hs[i].print();
	}

}





int main()
{
	setlocale
	srand
	int task;
	int flag;

start:

	cout << "Введите номер задания->";

	cin >> task;

	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	//case 4: {task4(); }break;
	//case 5: {task5(); }break;
	//case 6: {task6(); }break;
	
	default:
		break;
	}

	cout << "чтобы продолжить нажмите 1 ->";

	cin >> flag;

	if (flag == 1)
	{
		goto start;
	}

	system("pause");
}