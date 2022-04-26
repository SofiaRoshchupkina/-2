#include <iostream>
#include <ctime>
#include <locale>
#include "double_v.h"
#include "stack_1.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int flag = 1, c;



	double input1;
	cout << "Введите вещественное число: " << endl;
	cin >> input1;
	double_v input(input1);
	system("cls");
	while (flag == 1)
	{



		cout << "Выберите, какие операции провести с вещественным числом:" << endl;
		cout << "1 - Префиксный оператор ++ для увеличение на пользовательское число" << endl;
		cout << "2 - Префиксный оператор -- для уменьшение на случайное число" << endl;
		cout << "3 - Постфиксный оператор -- для уменьшения на пользовательское число" << endl;
		cout << "4 - Постфиксный оператор ++ для увеличения на случайное число" << endl;
		cout << "5 - Оператор ! для возвращения отрицательного значения" << endl;
		cout << "6 - Вывести вещественное число" << endl;
		cout << "7 - Переход ко втрому заданию работы" << endl;
		cout << "--> ";
		c = -1;
		while (c < 1 || c >7)
		{
			cin >> c;
			if (c < 0 || c>6)
				cout << "Ошибка ввода!" << endl;
		}
		switch (c)
		{
		case 1:
			system("cls");
			++input;
			break;

		case 2:
			system("cls");
			--input;
			break;
		case 3:
			system("cls");
			input--;
			break;
		case 4:
			system("cls");
			input++;
			break;
		case 5:
			system("cls");
			!input;
			break;
		case 6:
			system("cls");
			cout << "Вещественное число: " << input << endl;
			break;
		case 7: //0 - Выход
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	/////////////////////////////////////////////////////////ЗАДАНИЕ №2
	system("cls");


	stack st1, st2, st3;

	cout << "Задание №2 - Бинарная операция\n" << endl;
	flag = 1;
	double x = 0;
	//system("cls");
	while (flag == 1)
	{

		cout << "\nВыберите, какие операции провести с классом 'Стек':" << endl;
		cout << "1 - Оператор +" << endl;
		cout << "2 - Оператор -" << endl;
		cout << "3 - Оператор *" << endl;
		cout << "4 - Оператор /" << endl;
		cout << "5 - ВЫВЕСТИ СТЕК" << endl;
		cout << "6 - Оператор +=" << endl;
		cout << "7 - Оператор -=" << endl;
		cout << "8 - Оператор *=" << endl;
		cout << "9 - Оператор /=" << endl;

		cout << "0 - Выход" << endl;
		//st1.output();
		cout << "--> ";
		c = -1;
		while (c < 0 || c >9)
		{
			cin >> c;
			if (c < 0 || c>6)
				cout << "Ошибка ввода!" << endl;
		}
		switch (c)
		{
		case 1: //1 - Сложение
			system("cls");

			cout << "Введите число на которое хотите увеличить : " << endl;
			cin >> x;
			st1 = st1 + x;
			st1.output();
			break;
		case 2: //2 - Вывод
			system("cls");

			cout << "Введите число на которое хотите уменьшить : " << endl;
			cin >> x;
			st1 = st1 - x;
			st1.output();

			break;
		case 3: //3 - + к часу
			system("cls");

			cout << "Введите число на которое хотите умножить" << endl;
			cin >> x;
			st1 = st1 * x;
			st1.output();
			break;
		case 4:
			system("cls");

			cout << "Введите число на которое хотите поделить : " << endl;
			cin >> x;
			st1 = st1 / x;
			st1.output();
			break;
		case 5:
			system("cls");
			st1.output();
			break;
		case 6:
			system("cls");

			cout << "Введите число на которое хотите увеличить : " << endl;
			cin >> x;
			st1 += x;
			st1.output();
			break;
		case 7:
			system("cls");

			cout << "Введите число на которое хотите уменьшить : " << endl;
			cin >> x;
			st1 -= x;
			st1.output();
			break;
		case 8:
			system("cls");

			cout << "Введите число на которое хотите Умножить : " << endl;
			cin >> x;
			st1 *= x;
			st1.output();
			break;
		case 9:
			system("cls");
			cout << "Введите число на которое хотите поделить : " << endl;
			cin >> x;
			st1 /= x;
			st1.output();
			break;
		case 0: //0 - Выход
			cout << "\n";
			flag = 0;
			break;
		default:
			cout << "\n";
			flag = 0;
			break;
		}
	}

	return 0;
}