#include <iostream>
using namespace std;

int main()
{
    int amount;
    int i = 0;
    char symblol;
    int type;

    cout << "Введите число символов: ";
    cin >> amount;

    cout << "Введите символ, из которого будет состоять линия: ";
    cin >> symblol;

    cout << "Введите вид линии: " << endl
         << "1. Вертикальная" << endl
         << "2. Горизонтальная" << endl;
    cin >> type;

    switch (type)
    {
        case 1:
            while (i < amount)
                {
                    cout << symblol << endl;
                    i++;
                }
            break;
        case 2:
            while (i < amount)
                {
                    cout << symblol;
                    i++;
                }
            break;
        default:
            cout << "Вы ввели не сущестующий вид линии!";
    }

}