#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int buf_size = 0;
int cur_size = 0;


struct Date 
{
	int day, month, year;
	void print() 
	{
		cout << day << "/" << month << "/" << year << " ";
	}
};

struct Man
{
	char surname[30];
	char name[30];
	Date date_of_birth;
	void print() 
	{
		cout << surname << " " << name << " ";
		date_of_birth.print();
		cout << endl;
	}
};

void add(Man *&ms, Man el) 
{
	if (buf_size == 0) 
	{
		buf_size = 4;
		ms = new Man[buf_size];
	}
	else
	{
		if (cur_size == buf_size) 
		{
			buf_size *= 2;
			Man* tmp = new Man[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = ms[i];
			}
			delete[] ms;
			ms = tmp;
		}
	}
	ms[cur_size++] = el;
}
void 
int main() 
{
	ifstream in_file("in.txt");
	Man* ms=0;
	Man tmp_man;
	char c;

	while (!in_file.eof())
	{
		in_file >> tmp_man.name >> tmp_man.surname >> tmp_man.date_of_birth.day >> c >>
			tmp_man.date_of_birth.month >> c >> tmp_man.date_of_birth.year;
		add(ms, tmp_man);
	}
	
	for (int i = 0; i < cur_size; i++)
	{
		ms[i].print();
	}
	system("pause");
	return 0;
}