#include<iostream>
#include<locale>
#include<time.h>
#include<fstream>
#include<cmath>
#include<cstring>
#include<string.h>
#include<bitset>
using namespace std;
#define pause system("pause");
ifstream fin("text.txt");
ofstream fout("text.txt");
//57.������������ ��������� <<���������� ����������>>.�������� ���������<<������>>(����� ��������,���).
//����� �������� ����������� �������� ������(��� ������ � ��� ���������� �����).
//�)**�������� ������ �� 10 ����������� ��������<< ������ >> � ���������� ��� ���� ��������� �������:
//1.��������������� ������
//2.������ ���� ���������
//3.���������� �� ���
//�)***�������� ������ ����������� ��������� << ������ >> � ���������� ��� ���� ��������� �������
//1.�������� ������
//2.��������������� ������
//3.������� ������
//4.������ ���� ���������
//5.���������� �� ���
//6.���������� �� ������ ��������

struct record
{
	char surname[30]; //������� ��������
	char name[30]; //��� ��������
	char patronymic[30]; //�������� ��������
	int code : 16; //��� ������
	int number : 32; //����� ��������
};

void imput(record *arr, int N) //������ ���������� � ������ arr
{
	
		int A[10]; //������ ��� ������ ������� �����
		for (int i = 0; i < N; i++)
		{
			cout << endl;
			cin.ignore();
			setlocale(LC_ALL, "rus");
			cout << "������� �������: ";
			cin>>arr[i].surname; //������ �������
			fout << arr[i].surname<<" "; //���������� ��������� ���������� � ��������� ����
			cout << endl;

			cout << "������� ���: ";
			cin >> arr[i].name; //������ ���
			fout << arr[i].name << " "; //���������� ��������� ���������� � ��������� ����
			cout << endl;

			cout << "������� ��������: ";
			cin >> arr[i].patronymic; //������ ��������
			fout << arr[i].patronymic << endl;  //��������� ��������� ���������� � ��������� ����
			cout << endl;

			cout << "������� ��� ������: ";
			cin>>A[i]; //���������� ��� ������ � ������ ����� �����
			arr[i].code = A[i]; //����������� �������� ������� ������ �

			cout << "������� ����� ��������: ";
			cin >> A[i]; //���������� ����� �������� � ������ ����� �����
			arr[i].number = A[i]; //����������� �������� ������� ������ �
			
			fout << "�����: ";
			fout << arr[i].code; //��������� ��� ������ � ��������� ����
			fout << arr[i].number; //��������� ����� �������� � ��������� ����
			fout << endl;
		}
}

void sort_surname(record *arr, int N) //���������� �� �������
{
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-1; j++)
		{
			if (strcmp(arr[j].surname, arr[j + 1].surname) == 1)
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < N; i++) //����� ���������������� ������� � ������� � � ��������� ����
	{
		cout << endl;
		cout << arr[i].surname << " ";
		cout << arr[i].name << " ";
		cout << arr[i].patronymic << " ";
		cout << endl;
		cout << arr[i].code << " ";
		cout << arr[i].number << endl;

		fout << endl;
		fout << arr[i].surname <<" ";
		fout << arr[i].name << " ";
		fout << arr[i].patronymic << " ";
		fout << endl;
		fout << arr[i].code << " ";
		fout << arr[i].number << endl;

	}
}

void surt_number(record *arr, int N)
{
	int A[50];

	for (int i = 0; i < N; i++)
	{
		A[i] = arr[i].number;

	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (strcmp(A[j].number, A[j + 1].number) == 1)
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}





int main()
{
	setlocale(LC_ALL, "rus");
		int N;
		cin >> N;
		record *arr = new record[N]; //�������� ������������� �������
	Menu: //���� ���������
		int number = 0;
		cout << "\t\t\t����" << endl;
		cout << "��� ����� ������ ������� 1" << endl;
		cout << "��� ���������� ������ �� ������� ������� 2" << endl;

		cout << "��� ������ �� ��������� ������� 3" << endl;
		cin >> number;
		if (number > 4) //���� ������������ ������ �������� ����� ��������� ������ ��� � ������ ����
		{
			cout << "������" << endl;
			goto Menu;
		}
		switch (number)
		{
		case 1:goto A; break;
		case 2:goto B; break;
		case 3:goto C; break;
		default:
			break;
		}
A:
		imput(arr, N); //����� ������� ����� ������
goto Menu;
B:
		sort_surname(arr, N); //����� ������� ����������
		goto Menu;
C:
	pause
}