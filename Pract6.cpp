#include<iostream>
#include<string>
#include <Windows.h>
using namespace std;


void data_entry(double& hour, double& rate, double& nalog, double& net_salary, double& gross_salary)
{
	cin >> hour >> rate;
	gross_salary = hour * rate;
	net_salary = hour * rate * 0.87;
	nalog = hour * rate * 0.13;
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double hour, rate, nalog_1, nalog_2, net_salary_1, net_salary_2, gross_salary;
	string rab_1, rab_2;

	cout << "������� ������� ���� ���������� (���� ������� �������� 20 ��������)" << endl;
	cin >> rab_1 >> rab_2;
	if (size(rab_1) > 20)
	{
		rab_1.resize(20);
	}
	if (size(rab_1) > 20)
	{
		rab_2.resize(20);
	}

	cout << "�������: ������������ ����, ��������� ����� ��� ������� ���������" << endl;
	data_entry(hour, rate, nalog_1, net_salary_1, gross_salary);
	cout << "�������: ������������ ����, ��������� ����� ��� ������� ���������" << endl;
	data_entry(hour, rate, nalog_2, net_salary_2, gross_salary);

	if (1000 > net_salary_1)
	{
		cout << "��������:" << rab_1 << " ������� �� ���� ������ 1000�." << endl;
	}
	if (1000 > net_salary_2)
	{
		cout << "��������:" << rab_2 << " ������� �� ���� ������ 1000�." << endl;
	}
	if (nalog_1 > 50)
	{
		cout << "��������:" << rab_1[0] << "_" << rab_1[size(rab_1) - 1] << " �������� ����� ����� 50�" << endl;
	}
	if (nalog_2 > 50)
	{
		cout << "��������:" << rab_2[0] << "_" << rab_2[size(rab_2) - 1] << " �������� ����� ����� 50�" << endl;
	}
	;


}


