#include<iostream>
using namespace std;


void data_entry(double& hour, double& rate, double& bonus)
{
	cin >> hour >> rate >> bonus;
	
}
double nalog(double hour, double rate, double bonus)
{
	return hour * rate * (1 + bonus / 100) * 0.13;
}
double plata(double hour, double rate, double bonus)
{
	return hour * rate * (1 + bonus / 100) * 0.87;
}
void main()
{
	setlocale(LC_ALL, "rus");
	double hour, rate, bonus;
	cout<< "Введите: отработанные часы, почасовую ствку, % премии"<<endl;
	data_entry(hour, rate, bonus);
	
	cout << "Общая заработанная сумма:   " << hour * rate * (1 + bonus / 100) << endl;
	cout << "Налог:  " << nalog(hour, rate, bonus) << endl;
	cout << "Сумма на руки:  " << plata(hour, rate, bonus) << endl;
}