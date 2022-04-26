#pragma once
#include "double_v.h"
// Объявление класса Стек
class stack {
private:
	double_v* stack_data;
	int size_s;
public:
	stack();
	stack(const stack&);
	~stack(); // Деструктор, вызывается когда перестаем работать с классом в настоящий момент (цикл, фунция, условия)

	stack& operator=(const stack& old);
	stack operator+(const double_v);					//stack.push_pack(double_v)
	stack operator-(double_v);								//stack.pop(int);
	stack operator*(double_v);							//double_v*value
	stack operator/(double_v);							//double_v/value
	friend stack& operator+=(stack&, const double_v);		//stack2 += stack1
	friend stack& operator-=(stack&, double_v);		//stack.pop(int)
	friend stack& operator*=(stack&, double_v);			//double_v*value
	friend stack& operator/=(stack&, double_v);			//double_v/value

	void output(); // метод вывода стека на экран
};