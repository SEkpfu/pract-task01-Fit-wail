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
	cout<< "�������: ������������ ����, ��������� ����� ��� ������� ���������"<<endl;
	data_entry(hour, rate, nalog, net_salary, gross_salary);
	sum_salary = net_salary;
	cout << "�������: ������������ ����, ��������� ����� ��� ������� ���������" << endl;
	data_entry(hour, rate, nalog, net_salary, gross_salary);
	if (sum_salary > net_salary)
	{
		cout << "�������� N�1 ��������� ������" << endl;
	}
	else if (sum_salary < net_salary)
	{
		cout << "�������� N�2 ��������� ������" << endl;
	}
	else
	{
		cout << "��������� ���������� ���������" << endl;
	}
	sum_salary += net_salary;
	cout << "��������� ���������� �����: " << sum_salary << endl;
	
	
}



