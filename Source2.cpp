﻿#include<iostream>
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

using namespace std;

void func(int a[], int b[], int c[], int s)
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0 + rand() % 10;
		b[i] = 0 + rand() % 10;
		c[i] = a[i] + b[i];	
		cout << c[i] << endl;
		cout << endl;
	}
}
void task1()
{
	int a[10], b[10], c[10];
	func(a, b, c, 10);
}

//**********************************************************************************************************************************
//18.**Напишите функцию, которая принимает вещественное число и количество знаков и возвращает округленное число до указанного знака.
double okruglenie(double var, int n)
{
	var = double(int(var*pow(10, n)+0.5) / pow(10, n));
	return var;
}
void task2()
{
	double x;
	int n;
	cin >> x >> n;
	cout << fixed << setprecision(n) << okruglenie(x, n) << endl;
}

//***********************************************************************************************************************************
//19.*Напишите функцию, которая определяет количество нулевых элементов передаваемого массива. Реализовать перегрузки для различных типов массивов.
int zeros(int a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 20;
		if (a[i] == 0)
		{
			k++;
		}
		cout << a[i]<< endl;
	}
	cout << endl;
	return k;
}
void task3()
{
	int a[10];
	cout << zeros(a, 10) << endl;
}

//***************************************************************************************************************************************
//Сортировка пузырьком в функции.
void SortMass(int* m, int n)
{
	for (int i = 0; i < n; i++)
	{
		m[i] =0 + rand() % 30;
	}
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
		{
			if (m[j] > m[j + 1])
			{
				swap(m[j], m[j + 1]);
			}
		}
	for (int i = 0; i < 10; i++)
	{
		cout << m[i] << endl;
	}
	cout << endl;
}
void task4()
{
	int m[10];
	SortMass(m, 10);
}

//**********************************************************************************************************************************************
//символьный ввод в массив.
void task5()
{
	char c[50];
	cin >> c;
	for (int i = 0; i < strlen(c); i++)
	{
		cout << c[i] << endl;
	}
}

//**********************************************************************************************************************************************
//26.Напишите функцию, которая принимает выражение в виде строки и проверяет, правильно ли расставлены в нем скобки
bool check(char c[])
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(')k++;
		else if (c[i] == '{')k++;
		else if (c[i] == '[')k++;
		else if (c[i] == ')')k--;
		else if (c[i] == '}')k--;
		else if (c[i] == ']')k--;
		if (k < 0) return false;
	}
	if (k == 0) return true;
}
void task6()
{
	char c[50] = "()(text)()";
	cout << check(c) << endl;
}

//***********************************************************************************************************************************************
//СОРТИРОВКА ВСТАВКАМИ!
void vstavka(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0 + rand() % 30;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
void task7()
{
	int a[7];
	vstavka(a, 7);
}

//************************************************************************************************************************************************
//СОРТИРОВКА ВЫБОРОМ
void vibor(int* arr, int n)
{
	int min, min_pos;
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0 + rand() % 30;
	}
	for (int i = 0; i < n-1; i++)
	{
		min = INT_MAX;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_pos = j;
			}
		}
		swap(arr[i], arr[min_pos]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
void task8()
{
	int arr[10];
	vibor(arr, 10);
}

//***********************************************************************************************************************
//4.Написать функции и протестировать их в основной программе. Функции печатают фигуры и используют параметры по умолчанию
//Параметры по умолчанию определяют, каким символом печатается фигура и является ли она заполненной или печатается только рамка фигуры.

	const int n = 10;
	char z, r;
	int a, b, c;
	void res1(int a, char z)
	{
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == j)
				{
					cout << " * ";
				}
				else if (i > j)
				{
					cout << "  ";
				}
				else
				{
					cout << " * ";
				}
			}
			cout << endl;
		}
	}
	void res3(int c, char r)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i + j == n - 1)
				{
					cout << " - ";
				}
				else if (j == 0 && i < n - 1)
				{
					cout << " - ";
				}
				else if (i == 0 && j > 0 && j < n - 1)
				{
					cout << " - ";
				}
				else
				{
					cout << "   ";
				}
			}
			cout << endl;
		}
	}

void task9()
{
		res1(a, z);
		res3(c, r);
}

//**************************************************************************************************************************
//7.Hаписать функцию, которая заполняет переданную ей квадратную матрицу по правилу: диагональные элементы ровны 1, другие элементы ровни 0
//Использовать функцию для заполнения матрицы размером 7хх.7. 
void mat()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i == j || i == 6 - j)
			{
				cout << " 1 ";
			}
			else if (i < j)
			{
				cout << " 0 ";
			}
			else
			{
				cout << " 0 ";
			}
		}
		cout << endl;
	}
}
void task10()
{
	mat();
}

//****************************************************************************************************************************
//
template<typename T>
void sortArray(T arr[][30], int n, int m, char sorting_order)
{
	if (sorting_order == 'a')
	{
		for (int i = 0; i < n; i++)
		{
			for (int pass = 0; pass < m - 1; pass++)
			{
				for (int j = 0; j < m - 1; j++)
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						swap(arr[i][j], arr[i][j + 1]);
					}
				}
			}
		}
	}
}
//*********************************************************************************************************************
//
template<typename T>
void printArray(T a[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout <<endl;
	}
}
void task11()
{
	int a[20][30];
	double b[4][30] = { {2.5,5.8,0},{4.9,0.5,-1.2} };
	sortArray(b, 3, 3, 'd');
	printArray(b, 3, 3);
}

//***************************************************************************************************************************
//рекурсивная функция
int resPower(double x, int y)
{
	if (y == 0) return 1;
	return x * resPower(x, y - 1);
}
int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}
void task12()
{
	int y=2;
	int x;
	cin >> x;
	cout << factorial(x) << endl;
	cin >> x;
	cout << resPower(x, y) << endl;
}

//************************************************************************************************************************
//Написать рекурсивную функцию,фибаначи
int fib(int n)
{
	if (n == 0 || n == 1) return 1;
	return (fib(n - 1) + fib(n - 2));
}
void task13()
{
	int x;
	cin >> x;
	cout << fib(x) << endl;
}

//*************************************************************************************************************************
//48.*Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. Проиллюстрируйте работу функции примером.
void star(int n)
{
	if (n == 0) return;
	cout << " * ";
	return star(n - 1);
}
void task14()
{
	int x;
	cin >> x;
	star(x);
}

//************************************************************************************************************************
//49.*Написать рекурсивную функцию, которая вычисляет факториал числа. Проиллюстрируйте работу функции примером.
int factorialR(int n)
{  
	if (n) return n * factorialR(n - 1);

		else return 1;
}
void task15()
{
	int n;
	cin >> n;
	cout << factorialR(n) << endl;
}

//*************************************************************************************************************************
//50.*Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и  b. Проиллюстрируйте работу функции примером.
// Example program
int summ(int a, int b)
{
	if (b - a == 1) 
	{
		return a + b; 
	}
	return summ(a, b - 1) + b;
}
void task16()
{
	int a, b, S;
	cout << "Введите первое число->";
	cin >> a;
	cout << "Введите второе число->";
	cin >> b;
	cout << "Результат:" << summ(a, b) << endl;
}

//*************************************************************************************************************************
//51.**Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел заполненных случайным образом и находит позицию
//с которой начинается последовательность из 10 чисел, сумма которых минимальна.
int min10(int a[100], int n, int &p)
{
	int s = 0;
	for (int i = n; i < n + 10; ++i)
	
		s += a[i];
		cout << "->" << n << ":" << s << endl;

		if (100 - n == 10)
		{
			p = n;
			return s;
		}
		else
		{
			int s1 = min10(a, n + 1, p);
			if (s <= s1)
			{
				p = n;
				return s;
			}
			else return s1;
		}
	
}
void task17()
{
	int a[100];
	int p;
	for (int i = 0; i < 100; ++i)
	{
		a[i] = 1 + rand() % 20;
		cout << "->" << i << " : " << a[i] << endl;
	}
	cout << "------------------------------------------------" << endl;
	min10(a, 0, p);
    cout << "Индекс минимальной позиции " << p << endl << endl;
}

//*****************************************************************************************************************************
//52.обратная последовательность массива рекурсия
void N(int arr[], int c)
{
	static int a = c / 2;
	if (c == a)
	{
		return;
	}
	static int f = 0;
	int r;
	swap(arr[f], arr[c]);
	f++;
	N(arr, c - 1);
}
void task18()
{
	int array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 1 + rand() % 20;
		cout << array[i] << " " << endl;
	}
	cout <<"-------------------------------------------------"<< endl;
	N(array, 10 - 1);
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " " << endl;
	}
}

//****************************************************************************************************************************
//
int arr[4][5] = {{0,1,0,1,0},{1,0,1,0,1},{0,1,0,0,0},{1,0,1,1,1}};
int mat1(int i, int j)
{
	static int sum = 0;
	if (i >= 0 && i < 4 && j >= 0 && j < 5)
	{
		if (arr[i][j] == 1)
		{
			arr[i][j] = 2;
			sum++;
			if (arr[i - 1][j - 1] == 1) mat1(i - 1, j - 1);
			if (arr[i - 1][j + 1] == 1) mat1(i - 1, j + 1);
			if (arr[i + 1][j - 1] == 1) mat1(i + 1, j - 1);
			if (arr[i + 1][j + 1] == 1) mat1(i + 1, j + 1);
			if (arr[i - 1][j] == 1) mat1(i - 1, j); 
			if (arr[i + 1][j] == 1) mat1(i + 1, j); 
			if (arr[i][j - 1] == 1) mat1(i, j - 1);
			if (arr[i][j + 1] == 1) mat1(i, j + 1);
		}
	}
	return sum;
}
void task19()
{
	::arr[4][5];
	cout << mat1(3,3) << endl;
}

//****************************************************************************************************************************
//
int mat2(int i, int j)
{
	static bool flag = 0;
	if (i == 4 - 1 && j == 5 - 1)
	{
		flag = true;
		return true;
	}
	if (i >= 0 && i < 4 && j >= 0 && j < 5)
	{
		if (arr[i][j] == 1)
		{
			arr[i][j] = 2;
			if (arr[i - 1][j] == 1) mat2(i - 1, j);
			if (arr[i + 1][j] == 1) mat2(i + 1, j);
			if (arr[i][j - 1] == 1) mat2(i, j - 1);
			if (arr[i][j + 1] == 1) mat2(i, j + 1);
		}
	}
	return flag;
}
void task20()
{
	cout << mat2(0, 0) << endl;
}

//****************************************************************************************************************************
//1.*Дан массив чисел, необходимо ввести в него и вывести из него числа с помощью указателей.

void input(int *ptr, size_t size)
{
	while (size--)
	{
		printf(">");
		scanf_s("%d", ptr++);
	}
}
void output(int *ptr, size_t size)
{
	while (size--)
	     printf("%d ", *ptr++);
	 putchar('\n');
}
void task21()
{
	int a[5];
	input(a, 5);
	output(a, 5);
}

//*****************************************************************************************************************************
//2.*Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -25 до 35. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.
void massiv(int *arr, int size)
{
	int summ = 0;
	for (int i = 0; i < size ; i++)
	{
		arr[i] = -25 + rand() % 35;
		summ += arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
cout << "Сумма массива ->" << summ << endl;
}

void task22()
{
	int array[10];
	massiv(array, 10);
}

//**********************************************************************************************************************************
//3.*Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -44 до 76. Пользуясь указателем на массив целых чисел, посчитать произведение элементов массива.

void task23()
{
	int array[10];
	int proiz =1;
	int *A;
	A = array;
	for (int i = 0; i < 10; i++)
	{
		A[i] = -44 + rand() % 76;
		proiz *= A[i];
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Произведение ->" << proiz << endl;
}

//******************************************************************************************************************************************
//4.*Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -15 до 105. Пользуясь указателем на массив целых чисел, посчитать среднее арифметическое элементов массива.

void task24()
{
	int array[5];
	int sred_arif = 0;
	int *A;
	A = array;
	for (int i = 0; i < 5; i++)
	{
		A[i] = -15 + rand() % 105;
		sred_arif += A[i];
		cout << A[i] << " ";
	}
	cout << endl;
	sred_arif /= 5;
	cout << "Среднее Арифметическое->" << sred_arif << endl;
}

//*******************************************************************************************************************************************
//5.**Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -45 до 45. Пользуясь указателем(и) на массив целых чисел, посчитать процент положительных и отрицательных элементов массива.

void task25()
{
	int array[10];
	int *A;
	double Q = 0;
	double W = 0;
	A = array;
	for (int i = 0; i < 10; i++)
	{
		A[i] = -45 + rand() % 45;
		cout << A[i] << " ";
		if (A[i]>0)
		{
			Q++;
		}
		else
		{
			W++;
		}
	}
	cout << endl;
	Q = fmod(Q, 100);
	cout << fixed << setprecision(2) << "Положительных->" << Q << "%" << endl;
	W = fmod(W, 100);
	cout << fixed << setprecision(2) << "Отрицательных->" << W << "%" << endl;
}

//*********************************************************************************************************************************************
//6.*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с четными номерами.

void task26()
{
	int array[10];
	int *A;
	A = array;
	int summ = 0;
	for (int i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 45;
		cout << A[i] << " ";
		if (i / 2 == 0)
		{
			summ += A[i];
		}
	}
	cout << endl;
	cout <<"Сумма четных элементов->"<< summ << endl;
}

//*********************************************************************************************************************************************
//7.*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с нечетными номерами.

void task27()
{
	int array[10];
	int *p;
	int summ = 0;
	for (p = array; p < array + 10; p = p + 1)
	{	
		*p = 0 + rand() % 100;
		cout << *p << " ";
	}
	for (p = array + 1; p < array + 10; p = p + 2)
	{
		summ += *p;
	}
	cout << endl;
	cout << "Сумма нечетных номеров->" << summ << endl;
}

//*********************************************************************************************************************************************
//8.*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными трем.

void task28()
{
	int array[10];
	int *p;
	int summ = 0;
	for (p = array; p < array + 10; p = p + 1)
	{
		*p = 0 + rand() % 100;
		cout << *p << " ";
	}
	for (p = array + 3; p < array + 10; p = p + 3)
	{
		summ += *p;
	}
	cout << endl;
	cout << "Сумма кратных трем номеров->" << summ << endl;
}

//********************************************************************************************************************************************
//9.*Создать массив из 10 целых чисел. Заполнить массив случайным образом. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными 7.

void task29()
{
	int array[10];
	int *p;
	int summ = 0;
	for (p = array; p < array + 10; p = p + 1)
	{
		*p = 0 + rand() % 100;
		cout << *p << " ";
	}
	for (p = array + 7; p < array + 10; p = p + 7)
	{
		summ += *p;
	}
	cout << endl;
	cout << "Сумма кратных семи номеров->" << summ << endl;
}

//**********************************************************************************************************************************************
//10.*Создать массив из 20 целых чисел. Заполнить массив случайным образом в диапазоне от 1 до 12. Каждое число это оценка по 12 бальной системе.
//Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок. Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.
void task30()
{
	int array[20];
	int *Q;
	double a = 0, b = 0, c = 0, d = 0;
	for (Q = array; Q < array + 20; Q = Q + 1)
	{
		*Q = 1 + rand() % 12;
		if (*Q >= 3)
		{
			a++;
		}
		if (*Q > 4 && *Q >= 6)
		{
			b++;
		}
		if (*Q > 7 && *Q >= 9)
		{
			c++;
		}
		if (*Q > 10 && *Q >= 12)
		{
			d++;
		}
	}
	a = fmod(a, 100);
	cout << fixed << setprecision(2) << "Двоек->" << a << "%" << endl;
	b = fmod(b, 100);
	cout << fixed << setprecision(2) << "Троек->" << b << "%" << endl;
	c = fmod(c, 100);
	cout << fixed << setprecision(2) << "Четверок->" << c << "%" << endl;
	d = fmod(d, 100);
	cout << fixed << setprecision(2) << "Пятерок->" << d << "%" << endl;
}

//*********************************************************************************************************************************************
//11.**Создать массив из N целых чисел, N  вводит пользователь. Заполнить массив случайным образом в диапазоне от 1 до 12. Каждое число это оценка по 12 бальной системе.
//Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок. Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.

void task31()
{
	int array[10000];
	int *Q;
	int N;
	cout << "Введите размер массива->";
	cin >>N;
	double a = 0, b = 0, c = 0, d = 0;
	for (Q = array; Q < array + N; Q = Q + 1)
	{
	
		*Q = 1 + rand() % 12;
	    cout << *Q << " ";
		if (*Q <= 3)
		{
			a++;
		}
		if (*Q > 4 && *Q <= 6)
		{
			b++;
		}
		if (*Q > 7 && *Q <= 9)
		{
			c++;
		}
		if (*Q > 10 && *Q <= 12)
		{
			d++;
		}
	}
	cout << endl;
	a = fmod(a, 100);
	cout << fixed << setprecision(2) << "Двоек->" << a << "%" << endl;
	b = fmod(b, 100);
	cout << fixed << setprecision(2) << "Троек->" << b << "%" << endl;
	c = fmod(c, 100);
	cout << fixed << setprecision(2) << "Четверок->" << c << "%" << endl;
	d = fmod(d, 100);
	cout << fixed << setprecision(2) << "Пятерок->" << d << "%" << endl;
}

//*************************************************************************************************************
//12.**Реализовать 4 функции на простейшие арифметические операции (+,-,*,/). Каждая функция должна принимать два вещественных числа и возвращать результат операции в виде вещественного числа. 
//В главной функции создайте массив из 4-х указателей на эти функции. Добавьте меню, в котором пользователь может выбрать желаемую операцию. Напишите программу без использования операторов if и switch.
double add(double a, double b){return a + b;}
double ded(double a, double b){return a - b;}
double mul(double a, double b){return a * b;}
double div(double a, double b){return a / b;}
void task32()
{
double(*ukaz[4])(double, double) = { add,ded,mul,div };
int code = - 1;
while(true)
{
	cout << " Нажмите 0 - для вызова операции сложения\n ";
	cout << "Нажмите 1 - для вызова операции вычетания\n ";
	cout << "Нажмите 2 - для вызова операции умножения\n ";
	cout << "Нажмите 3 - для вызова операции деления\n ";
	cin >> code;
	cout << " \n ";
	if (code < 0 || code >= 3)
	{
		double a, b;
		cout << "Введите значение числа a: ";
		cin >> a;
		cout << " Введите значение числа b: ";
		cin >> b;
		cout << "\n ";
		cout << "Результат: ";
		cout << ukaz[code](a, b) << endl;
	}
}
cout << endl;
}

//***************************************************************************************************************************************
//13.**Реализовать 3 функции каждая из которых принимает вещественное число и возвращает вещественное число. Первая функция вычисляет квадратный корень числа, вторая – куб числа, третья – синус числа.
//В главной функции создайте массив из 3-х указателей на эти функции. Добавьте меню, в котором пользователь может выбрать желаемую операцию. Напишите программу без использования операторов if и switch.
double f(double x){return sqrt(x);}
double g(double x){return x * x*x;}
double h(double x){return sin(x);}
void task33()
{
	double(*ukazat[3])(double) = { f, g, h };
	unsigned int ch, len = sizeof(ukazat) / sizeof(ukazat);
	do
	{
		cout << " Нажмите 0 - для вычесления квадратного корня\n ";
		cout << "Нажмите 1 - для вычесления куба\n ";
		cout << "Нажмите 2 - для вычесления синуса числа\n ";
		cin >> ch;
		cout << endl;
	} while (ch >= 3);
	double x;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Результат: " << ukazat[ch](x) << endl;
}

//**********************************************************************************************************************************************
//14.***Реализовать 3 функции каждая из которых принимает указатель на массив и количество элементов и возвращает указатель на новый массив. 
//Первая функция ищет простые числа и заносит их в новый массив, вторая – все числа кратные трем, третья – все четные числа
//Затем напишите функцию, которая принимает указатель на одну из этих функций, а указатель на массив и количество элементов. 
//Добавьте меню, в котором пользователь может выбрать желаемую операцию. Простое число – это число, которое делиться ТОЛЬКО на 1 и на себя (2, 5, 7, 11 и т.д.).
void print_array(int *array, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i] <<" ";
	}
	cout << endl;
}
bool is_prime(int n) 
{
	double sqrt_n = sqrt(n);
	for (int i = 2; i <= sqrt_n; i++) 
	{
		if (n % i == 0) 
		{
			return false;
		}
	}
	return true;
}
int *get_primes(const int *array, int count, int &outCount) 
{
	int  *result = new int[count];
	outCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (is_prime(array[i]))
		{
			result[outCount] = array[i];
			outCount++;
		}
	}
	return result;
}
int *get_divisible_3(const int *array, int count, int &outCount) 
{
	int *result = new int[count];
	outCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (array[i] % 3 == 0) 
		{
			result[outCount] = array[i];
			outCount++;
		}
	}
	return result;
}
int *get_even(const int *array, int count, int &outCount) 
{
	int *result = new int[count];
	outCount = 0;
	for (int i = 0; i < count; i++) 
	{
		if (array[i] % 2 == 0) 
		{
			result[outCount] = array[i];
			outCount++;
		}
	}
	return result;
}
void task34()
{
	typedef int *(*function_t)(const int *, int, int &);
	function_t functions[3] = { get_primes, get_divisible_3, get_even };
	const int COUNT = 20;
	int array[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		array[i] = rand() % 100;
	}
	print_array(array, COUNT);
	unsigned int code;
	do
	{
		cout << "0 - простые числа" << endl;
		cout << "1 - числа кратные трем" << endl;
		cout << "2 - четные числа" << endl;
		cout << "3 - Выход" << endl;
		cin >> code;
		if (code < 3)
		{
			int outCount;
			int * p = functions[code](array, COUNT, outCount);
			print_array(p, outCount);
			delete[] p;
		}
	} while (code != 3);
}

//*******************************************************************************************************************************************************
//расширение массива
void zapolnenie_massiva(int *&a, int N)
{
	a = new int[N];
    for (int i = 0; i < N; i++)
    {
	a[i] = rand() % 10 + 1;
		cout << a[i] << "\t";
	}
	cout << endl;
}

void rashirenie_print(const int *a, int &N)
{
	int *tmp = new int[N + 2];
	tmp[0] = 50;
	for (int i = 0; i <N ; i++)
	{
		tmp[i+1] = a[i];
	}
	tmp[N+1] = 50;      
	a = tmp;
	N += 2;
	for (int i = 0; i < N; i++)
	{
	cout << a[i] << "\t";
	}
	cout <<endl;
}

void task35()
{
	int *a;
	int N;
	cin >> N;
	zapolnenie_massiva(a, N);
	rashirenie_print(a, N);
	delete[] a;
}

//*********************************************************************************************************************************************************
//33.**Написать функцию, которая принимает указатель на массив и количество элементов. Функция сжимает массив, удаляя из него элементы равные 0. Возвращает указатель на новый массив, не содержащий 0.
int*remove0(int *&a, int N, int &newsize)
{
	int*tmp, k = 0;
for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 5;
		cout << a[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (a[i] != 0)
		{
			k++;
		}
	}
	tmp = new int[k];
	k = 0;
	for (int i = 0; i < N; i++)
	{
		if (a[i] != 0)
		{
			tmp[k++] = a[i];
		}
	}
	newsize = k;
	return tmp;
for (int i = 0; i < N; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}
void task36()
{
	int *a, *b;
	int N, M;
	cin >> N;
    remove0(a, N, M);
}

//************************************************************************************************************************************************************
//34.**Написать функцию, которая принимает указатель на массив и количество элементов. Функция сжимает массив, удаляя из него элементы равные НЕ кратные трем. 
//Возвращает указатель на новый массив,  содержащий только числа кратные трем.

void ffff(int *&a, int &n)
{
	int g = 0;
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 20 + 1;
		cout << a[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < 20)
		{
			g++;
		}
	}
	int *b = new int[g];
	int j = 0;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < 20)
		{
			b[j] = a[i];
			cout << b[i] << "\t";
			j++;
		}
	}
	cout << endl;
	delete[]a;
	a = b;
}
void task37()
{
	int n = 10;
	int *a = new int[n];
	ffff(a, n);
}

//*************************************************************************************************************************************************************
//52.**Написать программу, которая переводит введенное десятичное число в двоичное число. Результат перевода сохранить в массив минимально возможного размера.
void dvoich(int x1)
{
	int i, b;
	long c = 0;
	for (i = 0; x1 > 0; i++)
	{	
		b = x1 % 2;
		x1 = (x1 - b) / 2;
		c += b * pow(10, i);
	}
	cout << "\nДвоичное число:" << c << "\n";
	for (int i = 0; i < b; i++)
	{
		int a[i]=
	}
	
}
void task38()
{
	int a;
	cin >> a;
	dvoich(a);
}

//***************************************************************************************************************************************************************
//

void task39()
{




}

//******************************************************************************************************************************************************************
//

void task40()
{



	




}

//*******************************************************************************************************************************************************************
//

void task41()
{







}

//********************************************************************************************************************************************************************
//

void task42()
{







}

//***********************************************************************************************************************************************************************
//

void task43()
{







}

//*************************************************************************************************************************************************************************
//







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
	case 24: {task24(); }break;
	case 5: {task5(); }break;                     
	case 25: {task25(); }break;
	case 6: {task6(); }break;                    
	case 26: {task26(); }break;          
	case 7: {task7(); }break;                     
	case 27: {task27(); }break;
    case 8: {task8(); }break;                    
    case 28: {task28(); }break;
	case 9: {task9(); }break;                    
	case 29: {task29(); }break;
	case 10: {task10(); }break;                   
	case 30: {task30(); }break;
	case 11: {task11(); }break;                   
	case 31: {task31(); }break; 
	case 12: {task12(); }break;                    
	case 32: {task32(); }break;
	case 13: {task13(); }break;                   
	case 33: {task33(); }break;
	case 14: {task14(); }break;                    
	case 34: {task34(); }break;
	case 15: {task15(); }break;                    
	case 35: {task35(); }break;
	case 16: {task16(); }break;                   
	case 36: {task36(); }break;
	case 17: {task17(); }break;                   
	case 37: {task37(); }break;
	case 18: {task18(); }break;                   
	case 38: {task38(); }break;
	case 19: {task19(); }break;                   
	case 39: {task39(); }break;
	case 20: {task20(); }break;                  
	case 40: {task40(); }break;
	case 21: {task21(); }break;
    case 22: {task22(); }break;
    case 23: {task23(); }break;
	case 41: {task40(); }break;
	case 42: {task40(); }break;
	case 43: {task40(); }break;
	case 44: {task40(); }break;
	case 45: {task40(); }break;
	case 46: {task40(); }break;
	case 47: {task40(); }break;
	case 48: {task40(); }break;
	case 49: {task40(); }break;
	case 50: {task40(); }break;

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
