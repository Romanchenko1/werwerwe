#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include<limits.h>
#include<chrono>
#include<cstdlib>
#include <functional>
#include<string>
#include <algorithm>
using namespace std;

char* my_strstr(char * str1,char * str2)
{
	char *cp = (char *)str1;
	char *s1, *s2;
	if (!*str2)
	while (*cp)
	{
		s1 = cp;
		s2 = (char *)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
		cp++;
	}
	return 0;
}

void task1()
{
	char str1[100];
	char str2[100];
	cin.getline(str1, 100);
	cin >> str2;
	my_strstr(str1, str2);
	  cout << my_strstr(str1,str2) << endl;
	  cout << strlen(str2) <<endl;
}

//******************************************************************************************************************************************************************
//13.*Написать функцию, которая выполняет преобразование целого числа в строку. Проиллюстрировать работу функции примером.

void task2()
{
	char str[10] = "125";
	cout << atoi(str) * 2 << endl;
}

//*******************************************************************************************************************************************************************
//14.** Написать функцию, которая выполняет преобразование вещественного числа в строку. Проиллюстрировать работу функции примером.
char* my_strchr(const char * s, char c)
{
	if (!s)
	{
		return 0;
	}
	for (; *s; ++s)
	{
		if (*s == c)
		{
			return (char*)s;
		}
	}
	return 0;
}
	
void task3()
{
	int a = 125;
	char str[10];
	_itoa_s(a, str, 10/*2 - двоичная система*/);
	cout << str << endl;
	cout << my_strchr(str,'5') << endl;/*поиск числа*/
}

//********************************************************************************************************************************************************************
//15.***Написать функцию, которая определяет является ли строка палиндромом (т.е. строкой, которую можно читать и слева направо, и справа налево: «А роза упала на лапу Азора», «Аргентина манит негра», «Я ем змея»).
//Рекомендации:
//Из строки предварительно нужно удалить пробелы и привести ее к одному регистру.
bool isPalindrom(const std::string & s)
{
	return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin(), s.rbegin() + s.size() / 2);
}
void task4()
{
	string s{ "А роза упала на лапу Азора арозА упал ан алапу азор А" };
	string s2{ "Аргентина манит негра арген тинам анитнегрА" };
	cout << isPalindrom(s) << "\n";
	cout << isPalindrom(s2) << "\n";
}

//***********************************************************************************************************************************************************************
//16.**Написать функцию, которая приводит строку к верхнему регистру.Проиллюстрировать работу функции примером.
string up(string s) 
{
	transform(s.begin(), s.end(), s.begin(), toupper); 
	return s; 
}
void task5()
{
	char s[20];
	cin >> s;
	cout << up(s) << endl;
}

//*************************************************************************************************************************************************************************
//17.** Написать функцию, которая приводит строку к нижнему регистру.  Проиллюстрировать работу функции примером

void task6()
{
	char s[20];
	cin>>s;
	cout << _tolower(s) << endl;
	
}





int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;                     
	case 2: {task2(); }break;                   
	case 3: {task3(); }break;                    
	case 4: {task4(); }break;                   
	case 5: {task5(); }break;
	case 6: {task6(); }break;                     
	//case 25: {task25(); }break;
	//case 6: {task6(); }break;                    
	//case 26: {task26(); }break;          
	//case 7: {task7(); }break;                     
	//case 27: {task27(); }break;
    //case 8: {task8(); }break;                    
   // case 28: {task28(); }break;
	//case 9: {task9(); }break;                    
	//case 29: {task29(); }break;
	//case 10: {task10(); }break;                   
	//case 30: {task30(); }break;
	//case 11: {task11(); }break;                   
	//case 31: {task31(); }break; 
	//case 12: {task12(); }break;                    
	//case 32: {task32(); }break;
	//case 13: {task13(); }break;                   
	//case 33: {task33(); }break;
	//case 14: {task14(); }break;                    
	//case 34: {task34(); }break;
	//case 15: {task15(); }break;                    
	//case 35: {task35(); }break;
	//case 16: {task16(); }break;                   
	//case 36: {task36(); }break;
	//case 17: {task17(); }break;                   
	//case 37: {task37(); }break;
	//case 18: {task18(); }break;                   
	//case 38: {task38(); }break;
	//case 19: {task19(); }break;                   
	//case 39: {task39(); }break;
	//case 20: {task20(); }break;                  
	//case 40: {task40(); }break;
	//case 21: {task21(); }break;
    //case 22: {task22(); }break;
    //case 23: {task23(); }break;
	//case 41: {task41(); }break;
	//case 42: {task42(); }break;
	//case 43: {task43(); }break;
	//case 44: {task44(); }break;
	//case 45: {task45(); }break;
	//case 46: {task46(); }break;
	//case 47: {task47(); }break;
	//case 48: {task48(); }break;
	//case 49: {task49(); }break;
	//case 50: {task50(); }break;

	default:
		break;
	}
	printf("чтобы продолжить нажмите 1 ->");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}
