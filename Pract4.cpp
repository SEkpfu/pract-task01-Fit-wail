#include<iostream>
using namespace std;


void data_entry(double& hour, double& rate, double& bonus, double& nalog, double& net_salary, double& gross_salary)
{
	cin >> hour >> rate >> bonus;
	gross_salary = hour * rate * (1 + bonus / 100);
	net_salary = hour * rate * (1 + bonus / 100) * 0.87;
	nalog = hour* rate* (1 + bonus / 100) * 0.13;
}
	
void main()
{
	setlocale(LC_ALL, "rus");
	double hour, rate, bonus,nalog, net_salary, gross_salary;
	cout<< "�������: ������������ ����, ��������� �����, % ������"<<endl;
	data_entry(hour, rate, bonus, nalog, net_salary, gross_salary);
	
	cout << "����� ������������ �����:   " << gross_salary << endl;
	cout << "�����:  " << nalog << endl;
	cout << "����� �� ����:  " << net_salary << endl;
}