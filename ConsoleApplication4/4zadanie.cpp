#include <iostream>

int main() {
    int A;
    std::cout << "Введите целое число A: ";
    std::cin >> A;

    std::cout << "Числа B, для которых A делится на B^2 и не делится на B^3: ";
    for (int B = 1; B * B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            std::cout << B << " ";
        }
    }

    return 0;
}
