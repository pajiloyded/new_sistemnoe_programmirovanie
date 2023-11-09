#include <iostream>
using namespace std;

int skibidi(int number)
{
    int bob = 0;
    while (number != 0)
    {
        bob += number % 10;
        number /= 10;
    }
    return bob;
}

int main()
{
    setlocale(0, "Russian");
    int n;
    cout << "Введите число: ";
    cin >> n;

    int result = n;
    do
    {
        result = skibidi(result);
        cout << result << endl;
    } while (result >= 10);

    return 0;
}