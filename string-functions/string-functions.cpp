﻿#include <iostream>
#include <string>
#include <algorithm>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int cnt = 0;
	cout << "Введите количество студентов: ";
	cin >> cnt;
	cnt++;

	string** students = new string*[cnt];
	for (int i = 0; i < cnt; i++)
	{
		students[i] = new string[6];
	}

	students[0][0] = "Имя";
	students[0][1] = "Возраст";
	students[0][2] = "Группа";
	students[0][3] = "РПМ";
	students[0][4] = "Тест";
	students[0][5] = "Матем";

	input(students, cnt);
	output(students, cnt);
	find_group(students, cnt);
	find_age(students, cnt);
	find_marks(students, cnt);
	find_avg(students, cnt);
	find_avgall(students, cnt);
}
