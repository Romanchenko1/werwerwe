#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<locale.h>
using namespace std;


//1.� ���������� �������� ����� ����� � ��������� �� 0 �� 1000000. ���������� ������� ��� ��������� ��������� ����������.
void propisnoi_eqivalent(int num, char *s) // s ������
{
	int position = 0; // ������� � ������
	int x[4]; // ������ ��������
	int div = 1000; // �������� �� �������
	int var = num; // ������� �� �������
	int rest; // ������� �� �������
	for (int i = 0; i < 4; i++)
	{
		rest = (int)(var / div);
		x[i] = rest;
		var = var - rest*div;
		div = div / 10;
	}
	switch (x[0])
	{
	case 1: strcpy(s, "���� ������ "); break;
	case 2: strcpy(s, "��� ������ "); break;
	case 3: strcpy(s, "��� ������ "); break;
	case 4: strcpy(s, "������ ������ "); break;
	case 5: strcpy(s, "���� ����� "); break;
	case 6: strcpy(s, "����� ����� "); break;
	case 7: strcpy(s, "���� ����� "); break;
	case 8: strcpy(s, "������ ����� "); break;
	case 9: strcpy(s, "������ ����� "); break;
	default: break;
	}
	position = strlen(s);
	switch (x[1])
	{
	case 1: strcpy(s + position, "��� "); break;
	case 2: strcpy(s + position, "������ "); break;
	case 3: strcpy(s + position, "������ "); break;
	case 4: strcpy(s + position, "��������� "); break;
	case 5: strcpy(s + position, "������� "); break;
	case 6: strcpy(s + position, "�������� "); break;
	case 7: strcpy(s + position, "������� "); break;
	case 8: strcpy(s + position, "��������� "); break;
	case 9: strcpy(s + position, "��������� "); break;
	default: break;
	}
	position = strlen(s);
	switch (x[2])
	{
	case 1:
		switch (x[3])
		{
		case 0: strcpy(s + position, "������ "); break;
		case 1: strcpy(s + position, "����������� "); break;
		case 2: strcpy(s + position, "���������� "); break;
		case 3: strcpy(s + position, "���������� "); break;
		case 4: strcpy(s + position, "������������ "); break;
		case 5: strcpy(s + position, "���������� "); break;
		case 6: strcpy(s + position, "����������� "); break;
		case 7: strcpy(s + position, "���������� "); break;
		case 8: strcpy(s + position, "������������ "); break;
		case 9: strcpy(s + position, "������������ "); break;
		}
		x[3] = 0;
		position = strlen(s);
		break;
	case 2: strcpy(s + position, "�������� "); break;
	case 3: strcpy(s + position, "�������� "); break;
	case 4: strcpy(s + position, "����� "); break;
	case 5: strcpy(s + position, "��������� "); break;
	case 6: strcpy(s + position, "���������� "); break;
	case 7: strcpy(s + position, "��������� "); break;
	case 8: strcpy(s + position, "����������� "); break;
	case 9: strcpy(s + position, "��������� "); break;
	default: break;
	}
	position = strlen(s);
	switch (x[3])
	{
	case 1: strcpy(s + position, "���� "); break;
	case 2: strcpy(s + position, "��� "); break;
	case 3: strcpy(s + position, "��� "); break;
	case 4: strcpy(s + position, "������ "); break;
	case 5: strcpy(s + position, "���� "); break;
	case 6: strcpy(s + position, "����� "); break;
	case 7: strcpy(s + position, "���� "); break;
	case 8: strcpy(s + position, "������ "); break;
	case 9: strcpy(s + position, "������ "); break;
	default: break;
	}
	position = strlen(s);
}

int main()
{
	setlocale(LC_ALL,"");
	int m;
	char s[100];
	cin >> m;
	propisnoi_eqivalent(m, s);
	cout << m << " " << s << endl << endl;
	cin.get();
	system("pause");
}