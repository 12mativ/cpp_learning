#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char operation;

    cout << "Введите два числа:\n";
    cin >> a >> b;

    cout << "Введите операцию над этими числами:\n";
    cin >> operation;

    switch (operation)
    {
        case '+':
            cout << (double)a + b;
            break;
        case '-':
            cout << (double)a - b;
            break;
        case '*':
            cout << (double)a * b;
            break;
        case '/':
            if (b == 0) 
            {
                cout << "Похоже, вы хотите поделить на 0, это недопустимо :)";
            } else 
            {
                cout << (double)a / b;
            }
            break;
        default:
            cout << "Я не знаю такой операции!";
           
    };  
}    