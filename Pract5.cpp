#include<iostream>
using namespace std;


void data_entry(double& hour, double& rate, double& nalog, double& net_salary, double& gross_salary)
{
	cin >> hour >> rate ;
	gross_salary = hour * rate ;
	net_salary = hour * rate * 0.87;
	nalog = hour* rate * 0.13;
}
	
void main()
{
	setlocale(LC_ALL, "rus");
	double hour, rate, nalog, net_salary, gross_salary,sum_salary;
	cout<< "Введите: отработанные часы, почасовую ствку для первого работника"<<endl;
	data_entry(hour, rate, nalog, net_salary, gross_salary);
	sum_salary = net_salary;
	cout << "Введите: отработанные часы, почасовую ствку для второго работника" << endl;
	data_entry(hour, rate, nalog, net_salary, gross_salary);
	if (sum_salary > net_salary)
	{
		cout << "Работник N№1 заработал больше" << endl;
	}
	else if (sum_salary < net_salary)
	{
		cout << "Работник N№2 заработал больше" << endl;
	}
	else
	{
		cout << "Работники заработали одинаково" << endl;
	}
	sum_salary += net_salary;
	cout << "Суммарная заработная плата: " << sum_salary << endl;
	
	
}



