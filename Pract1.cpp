#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	double hour, rate, bonus;
	cout<< "Ввежите: отработанные часы, почасовую ствку, % премии"<<endl;
	cin  >> hour >> rate >> bonus;
	cout << "Общая заработанная сумма:" << hour * rate * (1 + bonus / 100);
}