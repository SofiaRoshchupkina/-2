#pragma once

// Объявляем Класс вещественного числа

class double_v {
private:
	double value; //Видно только внутри файла

public:
	double_v(); // Конструкторы 
	double_v(double);
	double_v(const double_v&);

	double& at();

	friend std::ostream& operator << (std::ostream& out, const double_v& tmp);
	double_v& operator++(); //префиксный метод перегрузки
	friend double_v operator++(double_v&, int); //постфиксный дружественный метод
	double_v& operator--(); //префиксный метод перегрузки
	friend double_v operator--(double_v&, int); //постфиксный дружественный метод
	double& operator!(); //возвращает отрицательное число
};