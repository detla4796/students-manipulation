#include "func.h"
#include <string>
#include <iostream>

using namespace std;
void input(string** a, int n)
{
	for (int i = 1; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4] >> a[i][5];
	}
}

void output(string** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
		cout << endl;
	}
}

void find_group(string** a, int n)
{
	string group;
	cout << "������� ������: ";
	cin >> group;
	for (int i = 0; i < n; i++)
	{
		if (a[i][2].find(group) != -1)
		{
			cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
			cout << endl;
		}
	}
}

void find_age(string** a, int n)
{
	int age;
	cout << "������� �������: ";
	cin >> age;
	for (int i = 1; i < n; i++)
	{
		if (stoi(a[i][1]) > age)
		{
			cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
			cout << endl;
		}
		else if (stoi(a[i][1]) < age)
		{
			cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
			cout << endl;
		}
	}
}

void find_marks(string** a, int n)
{
	cout << "�������� � �������� ���� 3: " << endl;
	for (int i = 1; i < n; i++)
	{
		if (stoi(a[i][3]) > 3)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3];
			cout << endl;
		}
		if (stoi(a[i][4]) > 3)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
			cout << endl;
		}
		if (stoi(a[i][5]) > 3)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][5];
			cout << endl;
		}
	}
}

void find_avg(string** a, int n)
{
	cout << "�������� � ������� ������� ������ �������� �� ���, ������������, ����������: " << endl;
	for (int i = 1; i < n; i++)
	{
		if (stoi(a[i][3]) > 4)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3];
			cout << endl;
		}
		if (stoi(a[i][4]) > 4)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
			cout << endl;
		}
		if (stoi(a[i][5]) > 4)
		{
			cout << "���: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][5];
			cout << endl;
		}
	}
	cout << "�������� � ������� �� ������������ ���� ������� � �� ��� ���� �������: " << endl;
	for (int i = 1; i < n; i++)
	{
		if (stoi(a[i][4]) > 4 && stoi(a[i][3]) < 4)
		{
			cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
			cout << endl;
		}
	}
}

void find_avgall(string** a, int n)
{
	cout << "�������� � ������� ������� ������ �� ���� ���������: " << endl;
	for (int i = 1; i < n; i++)
	{
		if ((stoi(a[i][3]) + stoi(a[i][4]) + stoi(a[i][5])) / 3 > 4)
		{
			cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
			cout << endl;
		}
	}
}

