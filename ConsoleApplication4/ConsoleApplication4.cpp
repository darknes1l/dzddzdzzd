#include <iostream>

int main() {
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int num = i;
        int digit1 = num % 10;
        num /= 10;
        int digit2 = num % 10;
        num /= 10;
        int digit3 = num % 10;

        if (digit1 == digit2 || digit2 == digit3 || digit1 == digit3) {
            count++;
        }
    }

    std::cout << "Количество целых чисел с двумя одинаковыми цифрами от 100 до 999:: " << count << std::endl;

    return 0;
}
