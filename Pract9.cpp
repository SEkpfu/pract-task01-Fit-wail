


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


void N_min(vector<double>& gross_salary, int& nom_min_salary, double& min_salary)
{
    min_salary = gross_salary[0];
    nom_min_salary = 1;
    for (int i = 0; i < size(gross_salary); i++)
    {
        if (min_salary > gross_salary[i])
        {
            min_salary = gross_salary[i];
            nom_min_salary = i+1;
        }
    }
}
void N_max(vector<double>& gross_salary, int& nom_max_salary, double& max_salary)
{
    for (int i = 0; i < size(gross_salary); i++)
    {
        if (max_salary < gross_salary[i])
        {
            max_salary = gross_salary[i];
            nom_max_salary = i+1;
        }
    }
}

int kol_bol_nom(set<int>& nom_rab_50, vector<double>& net_salary,int znach)
{
    for (int i = 0; i < size(net_salary); i++)
    {
        if (net_salary[i] > znach)
        {
            nom_rab_50.insert(i + 1);
        }
    }
    return size(nom_rab_50);
}
int sum(vector<double>& nalog)
{
    int s = 0;
    for (int i = 0; i < size(nalog); i++)
    {
        s += nalog[i];
    }
    return s;
}



 void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, nom_min_salary, nom_max_salary = 0;
    double max_salary=0.0, min_salary,sum_nalog=0.0;
    cout << "введите количество работников" << endl;
    cin >> k;
    set<int> nom_rab_50;
    vector<double> hour(k), rate(k), nalog(k), net_salary(k), gross_salary(k);
    int size_net_salary = k;
    
    for (int i = 0; i < k; i++)
    {
        cout << "введите: отработанные часы, почасовую ствку для работника N№" << i + 1 << endl;
        data_entry(hour[i], rate[i], nalog[i], net_salary[i], gross_salary[i]);
    }
    N_min(gross_salary, nom_min_salary, min_salary);
    N_max(gross_salary, nom_max_salary, max_salary);
    kol_bol_nom(nom_rab_50,net_salary,50000);
    cout<< "Работник N№" << nom_min_salary << " получил меньше остальных" << endl;
    cout<< "Максимальная зарплата:" << max_salary << ". Получил работник N№" << nom_max_salary << endl;
    cout << "Больше 50000 получили "<< kol_bol_nom(nom_rab_50, net_salary, 50000) << " работников. Их номера:" << endl;
    for (int i : nom_rab_50)
    {
        cout << "N№" << i << endl;
    }
    cout << "Общая сумма налога:" << sum_nalog<<endl;
 
    cout << sum(nalog);
}
