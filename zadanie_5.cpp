#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "Russian");
    cout << "Int" << endl << endl;
    int arrint[] = { 4,7,-23,2147483647,-9,12,-33,-1,63,-2147483648 };
    for (int i = 0; i < 10; i++) 
    {
        cout << "arrint[" << i << "]=" << arrint[i] << endl;
    }
    cout << endl;
    cout << "Short" << endl << endl;
    short arrshort[] = { -8,1,-65,-32768,-49,32767,83,24,98,-5 };
    for (int s = 0; s < 10; s++) 
    {
        cout << "short[" << s << "]=" << arrshort[s] << endl;
    }
    cout << endl;
    cout << "Long" << endl << endl;
    long arrlong[] = { 7,-9,23,76,2147483647,-654,-222,-2147483648,2354,-7785 };
    for (int l = 0; l < 10; l++) 
    {
        cout << "long[" << l << "]=" << arrlong[l] << endl;
    }
    cout << endl;
    cout << "Float" << endl << endl;
    float arrfloat[] = { 4.7,1.1,87.3,26.4,2.7,1.8,67.6,75.5,36.6,37.5 };
    for (int f = 0; f < 10; f++) 
    {
        cout << "float[" << f << "]=" << arrfloat[f] << endl;
    }
    cout << endl;
    cout << "Double" << endl << endl;
    double arrdouble[] = { 3.34,67.55,33.33,44.44,55.55,67.68,78.88,89.99,11.11,22.33 };
    for (int d = 0; d < 10; d++) 
    {
        cout << "double[" << d << "]=" << arrdouble[d] << endl;
    }
    cout << endl;
    cout << "Char" << endl << endl;
    char arrchar[] = { 'a','s','d','f','g','h','j','k','l','m' };
    for (int c = 0; c < 10; c++) 
    {
        cout << "char[" << c << "]=" << arrchar[c] << endl;
    }
    cout << endl;
    cout << "Bool" << endl << endl;
    bool arrbool[] = { 0,1,1,1,0,0,0,1,0,1 };
    for (int b = 0; b < 10; b++) 
    {
        if (arrbool[b] == 0) 
        {
            cout << "char[" << b << "]=" << "False" << endl;
        }
        else 
        {
            cout << "char[" << b << "]=" << "True" << endl;
        }
    }


    return 0;
}