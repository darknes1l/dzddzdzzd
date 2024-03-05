#include <iostream>
#include <string>

int main() {
    int number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    std::string strNumber = std::to_string(number);
    std::string result = "";

    for (char digit : strNumber) {
        if (digit != '3' && digit != '6') {
            result += digit;
        }
    }

    if (result.empty()) {
        std::cout << "Все цифры были удалены\n";
    }
    else {
        std::cout << "Результат: " << result << "\n";
    }

    return 0;
}
