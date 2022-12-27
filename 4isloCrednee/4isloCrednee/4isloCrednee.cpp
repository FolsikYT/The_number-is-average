#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите 3 разных числа через пробел: ";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a > c)
        {
            cout << "Число " << a << " среднее";
        }
        else
        {
            if (b > c)
            {
                cout << "Число " << c << " среднее";
            }
            else
            {
                cout << "Число " << b << " среднее";
            }
        }
    }
    
    cin.get();
    cin.get();
    return 0;
}