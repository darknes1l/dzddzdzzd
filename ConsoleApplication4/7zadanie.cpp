#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Введите два целых числа через пробел: ";
    cin >> number1 >> number2;

    cout << "Оба числа делятся без остатка на: ";
    for (int i = 1; i <= min(number1, number2); ++i) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
