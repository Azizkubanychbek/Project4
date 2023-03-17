#include <iostream>
#include "Header.h"

int main() {
    int initial_value = 1;
    char command;
    std::cout << "Хотите указать начальное значение для счётчика? (y/n): ";
    std::cin >> command;
    if (command == 'y') {
        std::cout << "Введите начальное значение: ";
        std::cin >> initial_value;
    }
    Counter counter(initial_value);
    while (true) {
        std::cout << "Введите команду (+/-/= or x): ";
        std::cin >> command;
        if (command == '+') {
            counter.increase();
        }
        else if (command == '-') {
            counter.decrease();
        }
        else if (command == '=') {
            std::cout << "Текущее значение счётчика: " << counter.getValue() << std::endl;
        }
        else if (command == 'x') {
            break;
        }
        else {
            std::cout << "Неизвестная команда, попробуйте ещё раз." << std::endl;
        }
    }
    return 0;
}