#include <iostream>
#include "double_v.h"
#include <ctime>
#include <locale>

using namespace std;

double_v::double_v() : value(0) {};
double_v::double_v(double V) : value(V) {};
double_v::double_v(const double_v& old) {
	this->value = old.value;   // ����������� ����������� 
}

double& double_v::at() {  // ��� ����������� ������
	return this->value;
}

double_v& double_v::operator++() {
	setlocale(LC_ALL, "Rus");

	double a = 0;
	cout << "������� �� ����� ����� ��������� : ";
	cin >> a;
	this->value += a;
	cout << "\n��������� : " << this->value << endl;
	return *this;
}

double_v operator++(double_v& old, int) { // ������������� �������
	setlocale(LC_ALL, "Rus");

	double_v tmp(old);
	double a = 1.000 + 19.000 * rand() / (float)RAND_MAX;
	cout << "���������� �� : " << a << endl;
	old.value += a;
	cout << "��������� : " << old.value << endl;
	return tmp.value;
}

double_v& double_v::operator--() {
	setlocale(LC_ALL, "Rus");

	double a = 1.000 + 19.000 * rand() / (float)RAND_MAX;
	cout << "���������� �� : " << a << endl;
	this->value -= a;
	cout << "\n��������� : " << this->value << endl;
	return *this;
}

double_v operator--(double_v& old, int) { // ������������� �������
	setlocale(LC_ALL, "Rus");

	double_v tmp(old);
	double a = 0;
	cout << "������� �� ����� ����� ��������� : " << endl;
	cin >> a;
	old.value -= a;
	cout << "��������� : " << old.value << endl;
	return tmp.value;
}

double& double_v::operator!() { return value > 0 ? value : value *= -1; }

std::ostream& operator<<(std::ostream& out, const double_v& tmp) {
	out << tmp.value;
	return out;
}
