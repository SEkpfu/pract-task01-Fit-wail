#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	double hour, rate, bonus;
	cout<< "�������: ������������ ����, ��������� �����, % ������"<<endl;
	cin  >> hour >> rate >> bonus;
	cout << "����� ������������ �����:" << hour * rate * (1 + bonus / 100);
}