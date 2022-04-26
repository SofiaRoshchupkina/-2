#pragma once

// ��������� ����� ������������� �����

class double_v {
private:
	double value; //����� ������ ������ �����

public:
	double_v(); // ������������ 
	double_v(double);
	double_v(const double_v&);

	double& at();

	friend std::ostream& operator << (std::ostream& out, const double_v& tmp);
	double_v& operator++(); //���������� ����� ����������
	friend double_v operator++(double_v&, int); //����������� ������������� �����
	double_v& operator--(); //���������� ����� ����������
	friend double_v operator--(double_v&, int); //����������� ������������� �����
	double& operator!(); //���������� ������������� �����
};