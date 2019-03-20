#include<iostream>
#include<locale.h>
#include<fstream>
#include<string>

using namespace std;
int cur_size = 0;
int buf_size = 0;
union number
{
	short int number_n;
	char number_s[10];
};

struct car
{
	char color[30];
	char model[30];
	char flag;
	number car_number;
	void print()
	{
		cout << color << " " << model << " ";
		if (flag == 's')
		{
			cout << car_number.number_s;
		}
		else
		{
			cout << car_number.number_n;
		}
		cout << endl;
	}
};

void add(car *&cs, car el)
{

	if (buf_size == 0)
	{
		buf_size = 4;
		cs = new car[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			car *tmp = new car[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = cs[i];
			}
			delete[] cs;
			cs = tmp;
		}
	}
	cs[cur_size++] = el;
}
int main()
{
	setlocale(LC_ALL, "");
	ifstream in_file("text.txt");
	car *cs = 0;
	car tmp_car;
	while (!in_file.eof())
	{
		in_file >> tmp_car.color >> tmp_car.model >> tmp_car.flag;
		if (tmp_car.flag == 's')
		{
			in_file >> tmp_car.car_number.number_s;
		}
		else
		{
			in_file >> tmp_car.car_number.number_n;
			add(cs, tmp_car);
		}
	}
	for (int i = 0; i < cur_size; i++)
	{
		cs[i].print();
	}


	system("pause");
	return 0;
}