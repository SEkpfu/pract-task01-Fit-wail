#include<iostream>
#include <Windows.h>
using namespace std;

 void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int mes = 12, k = 4;
    int nom_max_gross_three = 0;
    double max_salary=0.0, min_salary, nalog_three_rab=0.0, max_gross_three = 0.0;
    double hour[k][mes], rate[k], nalog_gross_salary[k][2][mes], gross_sum=0;
    cout << "Введите количество отработанных часов:" << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < mes; j++)
        {
            cout << "Для работника N№" << i+1 << " в месяц N№" << j+1 << endl;
            cin >> hour[i][j];
        }
    }
    cout << "Введите почасовую ставку:" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << "для работника N№" << i + 1 << endl;
        cin >> rate[i];
    }

    for (int i = 0; i < k; i++)
    {
        cout << "Ставка: " << rate[i] << endl;
        for (int j = 0; j < mes; j++)
        {
            cout<< hour[i][j]<<"\t";
        }
        cout << endl;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (0 == j)
            {
                for (int m = 0; m < mes; m++)
                {
                    nalog_gross_salary[i][j][m] = hour[i][m] * rate[i];
                }
            }
            else
            {
                for (int m = 0; m < mes; m++)
                {
                    nalog_gross_salary[i][j][m] = hour[i][m] * rate[i]*0.13;
                }
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(1==j)
            {
                cout << "Налог" << endl;
                for (int m = 0; m < mes; m++)
                {
                    cout << nalog_gross_salary[i][j][m] << "\t";
                }
            }
            else
            {
                cout << "Зарплата" << endl;
                for (int m = 0; m < mes; m++)
                {
                    cout << nalog_gross_salary[i][j][m] << "\t";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (0 == j)
            {
                for (int m = 0; m < mes; m++)
                {
                    gross_sum += nalog_gross_salary[i][j][m];
                    if (2 == m && max_gross_three< nalog_gross_salary[i][j][m])
                    {
                        nom_max_gross_three = k;
                        max_gross_three < nalog_gross_salary[i][j][m];
                    }
                }
            }
            else
            {
                for (int m = 0; m < mes; m++)
                {
                    nalog_three_rab += nalog_gross_salary[i][j][m];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "сумму, полученную первым работником на руки во втором месяце = " << nalog_gross_salary[0][0][1]*0.87<<endl;
    cout << "общую сумму налога, удержанную у третьего работника за весь год = " << nalog_three_rab << endl;
    cout << "номер работника, заработавшего больше всех в третьем месяце = " << nom_max_gross_three << endl;
    cout << "общую сумму, заработанную всей бригадой за год = " << gross_sum << endl;
}
