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

	cout << "¬ведите фамилии двух работников (одна фамили€ максимум 20 символов)" << endl;
	cin >> rab_1 >> rab_2;
	if (size(rab_1) > 20)
	{
		rab_1.resize(20);
	}
	if (size(rab_1) > 20)
	{
		rab_2.resize(20);
	}

	cout << "¬ведите: отработанные часы, почасовую ствку дл€ первого работника" << endl;
	data_entry(hour, rate, nalog_1, net_salary_1, gross_salary);
	cout << "¬ведите: отработанные часы, почасовую ствку дл€ второго работника" << endl;
	data_entry(hour, rate, nalog_2, net_salary_2, gross_salary);

	if (1000 > net_salary_1)
	{
		cout << "–аботник:" << rab_1 << " получил на руки меньше 1000р." << endl;
	}
	if (1000 > net_salary_2)
	{
		cout << "–аботник:" << rab_2 << " получил на руки меньше 1000р." << endl;
	}
	if (nalog_1 > 50)
	{
		cout << "–аботник:" << rab_1[0] << "_" << rab_1[size(rab_1) - 1] << " заплатил налог более 50р" << endl;
	}
	if (nalog_2 > 50)
	{
		cout << "–аботник:" << rab_2[0] << "_" << rab_2[size(rab_2) - 1] << " заплатил налог более 50р" << endl;
	}
	;


}


