#include<iostream>
#include<string>
#include <Windows.h>
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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double hour, rate, bonus, nalog, net_salary, gross_salary,sr_salary=0;
	string rab_1, rab_2;

	for (int i = 0; i < 5; i++)
	{
		cout << "¬ведите: отработанные часы, почасовую ствку, % премии дл€ работника Nє"<< i+1 << endl;
		data_entry(hour, rate, nalog, net_salary, gross_salary);
		cout << "работник Nє"<< i+1 <<" заработал " << gross_salary<<endl;
		sr_salary+= gross_salary;
	}
	cout << "средн€€ зарплата сотрудников: "<<sr_salary/5;
	
}


