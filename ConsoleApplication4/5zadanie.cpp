#include <iostream>

using namespace std;

int getSumOfDigits(int n)
{
    if (n < 0)
        return getSumOfDigits(-n);
    if (n <= 10)
        return n;
    return (n % 10) + getSumOfDigits(n / 10);
}

int main()
{
    cout << "Введите A: ";

    int a;
    cin >> a;

    int sum = getSumOfDigits(a);

    if (a * a == sum * sum * sum) {
        cout << "Да, A*A равно кубу суммы цифр A." << endl;
    }
    else {
        cout << "Нет, A*A не равно кубу суммы цифр A." << endl;
    }
    return 0;
}
