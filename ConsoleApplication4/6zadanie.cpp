#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    cout << "Число " << number << " делится без остатка на: ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
