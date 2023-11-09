#include <iostream>
#include <ctime>
using namespace std;
void random();
const int num = 5;
const int num1 = 10;

int main()
{
    setlocale(0, "Russian");
    srand(time(0));
    random();
    return 0;
}
void random()
{
    int arrnum1[num];
    int arrnum2[num1];
    for (int i = 0; i < num; i++)
    {
        arrnum1[i] = rand() % 100;
    }
    for (int j = 0; j < num1; j++)
    {
        arrnum2[j] = rand() % 100;
    }
    for (int i = 0; i < num; i++)
    {
        cout << arrnum1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < num1; j++)
    {
        cout << arrnum2[j] << " ";
    }
}
