


#include<iostream>
#include<vector>
#include <Windows.h>
#include <set>
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
    int k;
    double max_salary=0, min_salary, nom_min_salary, nom_max_salary=0,sum_nalog=0;
    cout << "введите количество работников" << endl;
    cin >> k;
    set<int> nom_rab_50;
    vector<double> hour(k), rate(k), nalog(k), net_salary(k), gross_salary(k);
    string rab_1, rab_2;

    for (int i = 0; i < k; i++)
    {
        cout << "введите: отработанные часы, почасовую ствку для работника N№" << i + 1 << endl;
        data_entry(hour[i], rate[i], nalog[i], net_salary[i], gross_salary[i]);
        if (0 == i)
        {
            min_salary = net_salary[0];
            nom_min_salary = 1;
        }
        if (min_salary > net_salary[i])
        {
            min_salary = net_salary[i];
            nom_min_salary = i+1;
        }
        if (max_salary < net_salary[i])
        {
            max_salary = net_salary[i];
            nom_max_salary = i+1;
        }
        if (net_salary[i] > 50000)
        { 
            nom_rab_50.insert(i+1);
        }
        sum_nalog += nalog[i];
    }
    cout<< "Работник N№" << nom_min_salary << " получил меньше остальных" << endl;
    cout<< "Максимальная зарплата:" << max_salary << ". Получил работник N№" << nom_max_salary << endl;
    cout << "Больше 50000 получили "<< nom_rab_50.size() << " работников. Их номера:" << endl;
    for (int i : nom_rab_50)
    {
        cout << "N№" << i << endl;
    }
    cout << "Общая сумма налога:" << sum_nalog;
}
