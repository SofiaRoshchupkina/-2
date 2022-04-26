#include <iostream>
#include "stack_1.h"

using namespace std;

/////////////////////////////constructors-destructor

stack::stack() {
	size_s = 5 + rand() % 10;
	stack_data = new double_v[size_s];
	for (size_t i = 0; i < size_s; i++)
		stack_data[i] = 1.000 + 99.000 * rand() / (float)RAND_MAX;
}

stack::stack(const stack& old) {
	this->size_s = old.size_s;
	this->stack_data = new double_v[old.size_s];
	for (size_t i = 0; i < old.size_s; i++)
		this->stack_data[i] = old.stack_data[i];
}

stack::~stack() {
	delete[] stack_data;
}

/////////////////////////////binary operations (+-*/=)

stack stack::operator+(double_v value) {
	for (size_t i = 0; i < this->size_s; i++)
		this->stack_data[i].at() = this->stack_data[i].at() + value.at();
	return *this;
}

stack stack::operator-(double_v value) {
	for (size_t i = 0; i < this->size_s; i++)
		this->stack_data[i].at() = this->stack_data[i].at() - value.at();
	return *this;
}

stack stack::operator*(double_v value) {
	for (size_t i = 0; i < this->size_s; i++)
		this->stack_data[i].at() = this->stack_data[i].at() * value.at();
	return *this;
}

stack stack::operator/(double_v value) {
	for (size_t i = 0; i < this->size_s; i++)
		this->stack_data[i].at() = this->stack_data[i].at() / value.at();
	return *this;
}

stack& stack::operator=(const stack& old) {
	this->size_s = old.size_s;
	this->stack_data = new double_v[old.size_s];
	for (size_t i = 0; i < old.size_s; i++)
		this->stack_data[i] = old.stack_data[i];
	return *this;
}

/////////////////////////////friend binary operations (+=, -=, *=, /=)

stack& operator+=(stack& s, double_v value) {
	for (size_t i = 0; i < s.size_s; i++)
		s.stack_data[i].at() = s.stack_data[i].at() + value.at();
	return s;
}

stack& operator-=(stack& s, double_v value) {
	for (size_t i = 0; i < s.size_s; i++)
		s.stack_data[i].at() = s.stack_data[i].at() - value.at();
	return s;
}

stack& operator*=(stack& s, double_v value) {
	for (size_t i = 0; i < s.size_s; i++)
		s.stack_data[i].at() = s.stack_data[i].at() * value.at();
	return s;
}

stack& operator/=(stack& s, double_v value) {
	for (size_t i = 0; i < s.size_s; i++)
		s.stack_data[i].at() = s.stack_data[i].at() / value.at();
	return s;
}

/////////////////////////////other

void stack::output() {
	for (size_t i = 0; i < size_s; i++)
		cout << stack_data[i] << " ";
}
