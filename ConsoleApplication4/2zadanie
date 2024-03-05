int main() {
    int count = 0;
    for (int i = 100; i < 1000; i++) {
        int num = i;
        int ones = num % 10;
        num /= 10;
        int tens = num % 10;
        num /= 10;
        int hundreds = num % 10;

        if (ones != tens && ones != hundreds && tens != hundreds)
            count++;
    }

    std::cout << "Количество целых чисел с разными цифрами от 100 до 999: " << count << std::endl;

    return 0;
}
