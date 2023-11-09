#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    int num;
    int num1;
    int num2;
    int num3;
    char bukva;
    cout << "Выбери действие" << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Прямоугольник" << endl;
    cout << "[4] Треугольник" << endl;
    cout << "[5] Выход" << endl;
    cout << "Выбор: ";
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:  //линия
        cout << "Выбери положение" << endl;
        cout << "[1] Вертикальная" << endl;
        cout << "[2] Горизантальная" << endl;
        cout << "Выбор: ";
        cin >> num1;
        system("cls");
        switch (num1)
        {
        case 1:
            cout << "Введи длину: ";
            cin >> num2;
            cout << "Напиши из чего будет линия: ";
            cin >> bukva;
            for (int kiborg = 0; kiborg < num2; kiborg++)
            {
                cout << bukva << endl;
            }
            break;
        case 2:
            cout << "Введи длину: ";
            cin >> num2;
            cout << "Напиши из чего будет линия: ";
            cin >> bukva;
            for (int terminator = 0; terminator < num2; terminator++)
            {
                cout << bukva;
            }
            break;
        default:
            cout << ">:(";
            break;
        }
        break;
    case 2:   //куб
        cout << "Выбери положение" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выбор: ";
        cin >> num1;
        system("cls");
        switch (num1)
        {
        case 1:
            cout << "Введи длину: ";
            cin >> num2;
            cout << "Напиши из чего будет куб: ";
            cin >> bukva;
            cout << endl;
            for (int privet = 0; privet < num2; privet++)
            {
                for (int poka = 0; poka < num2; poka++)
                {
                    if ((poka == 0) || (poka == num2 - 1) || (privet == 0) || (privet == num2 - 1))
                        cout << bukva << " ";
                    else
                    {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Введи длину: ";
            cin >> num2;
            cout << "Напиши из чего будет куб: ";
            cin >> bukva;
            cout << endl;
            for (int nikita = 0; nikita < num2; nikita++)
            {
                for (int nekit = 0; nekit < num2; nekit++)
                {
                    cout << bukva << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << ">:(";
            break;
        }
        break;
    case 3:   //прямоугольник
        cout << "Выбери положение" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выбор: ";
        cin >> num1;
        system("cls");
        switch (num1)
        {
        case 1:
            cout << "Введи высоту: ";
            cin >> num2;
            cout << "Введи ширину: ";
            cin >> num3;
            cout << "Напиши из чего будет прямоугольник: ";
            cin >> bukva;
            cout << endl;
            for (int hola = 0; hola < num2; hola++)
            {
                for (int adios = 0; adios < num3; adios++)
                {
                    if ((adios == 0) || (adios == num3 - 1) || (hola == 0) || (hola == num2 - 1))
                        cout << bukva << " ";
                    else
                    {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Введи высоту: ";
            cin >> num2;
            cout << "Введи ширину: ";
            cin >> num3;
            cout << "Напиши из чего будет прямоугольник: ";
            cin >> bukva;
            cout << endl;
            for (int cyberpunk = 0; cyberpunk < num2; cyberpunk++)
            {
                for (int postcyberpunk = 0; postcyberpunk < num3; postcyberpunk++)
                {
                    cout << bukva << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << ">:(" << endl;
            break;
        }
        break;
    case 4:    //треугольник
        cout << "Выбери положение" << endl;
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cout << "Выбор: ";
        cin >> num1;
        system("cls");
        switch (num1)
        {
        case 1:
            cout << "Введи высоту: ";
            cin >> num2;
            cout << "Введи из чего будет треугольник: ";
            cin >> bukva;
            for (int oops = 1; oops <= num2; oops++)
            {
                for (int hoy = 1; hoy <= num2 * 2; hoy++)
                {
                    if (hoy == ((num2 + 1) - (oops - 1)) || hoy == ((num2 + 1) + (oops - 1)))
                        cout << bukva;
                    else
                        if (oops == num2 && hoy > 1)
                            cout << bukva;
                        else
                            cout << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Введи высоту: ";
            cin >> num2;
            cout << "Введи из чего будет треугольник: ";
            cin >> bukva;
            for (int present = 0; present < num2; present++)
            {
                for (int perfect = 1; perfect < num2 - present; perfect++)
                {
                    cout << " ";
                }
                for (int perfect = num2 - present * 2; perfect <= num2; perfect++)
                {
                    cout << bukva;
                }
                cout << endl;
            }
            break;
        default:
            cout << ">:(" << endl;
            break;
        }
        break;
    case 5:  //выход
        cout << "Пока.";
        return 0;
    default:
        cout << ">:(" << endl;
        break;
    }
    return 0;
}