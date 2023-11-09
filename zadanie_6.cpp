#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "");
    int num1;
    int asd[9][9];
    const int height = 3;
    const int width = 3;
    int matrix[height][width];

    cout << "[1]Таблица умножения" << endl;
    cout << "[2]Сумма которую заполняет массив " << endl;
    cout << endl;
    cout << "Выберите нужный пункт:";
    cin >> num1;
    switch (num1)
    {
    case 1:
        system("cls");
        cout << "Таблица умножения:" << endl;
        cout << endl;
        cout << endl;
        for (int i = 0; i < 9; i++) 
        {
            for (int j = 0; j < 9; j++) 
            {
                asd[i][j] = (i + 1) * (j + 1);
            }
        }

        for (int i = 0; i < 9; i++) 
        {
            for (int j = 0; j < 9; j++) 
            {
                cout << setw(5) << asd[i][j];
            }
            cout << endl;
        }
        break;
    case 2:
        system("cls");
        for (int i = 0; i < height; i++) 
        {
            for (int j = 0; j < width; j++) 
            {
                cout << "Введите значение для элемента ("" Строка: " << i + 1 << " >>>> " << "Столбик: " << j + 1 << "): ";
                cin >> matrix[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < height; i++) 
        {
            for (int j = 0; j < width; j++) 
            {
                cout << setw(5) << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int j = 0; j < width; j++) 
        {
            int sum = 0;
            for (int i = 0; i < height; i++) 
            {
                sum += matrix[i][j];
            }
            cout << "Сумма элементов столбца " << j + 1 << ": " << sum << endl;
        }

        for (int i = 0; i < height; i++) 
        {
            int sum = 0;
            for (int j = 0; j < width; j++) 
            {
                sum += matrix[i][j];
            }
            cout << "Сумма элементов строки " << i + 1 << ": " << sum << endl;
        }
        break;

    default:
        system("cls");
        cout << ">:(" << endl;
        break;
    }
    return 0;
}