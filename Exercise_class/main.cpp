//
//  main.cpp
//  Exercise_class
//
//  Created by Александр Нестеров on 8/4/24.
//

#include <iostream>
#include <string>
#include "Mathematical_F.hpp"
#include "Counter.hpp"

int main() {
    double num1, num2;
    char operation;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    std::cout << "Выберите операцию (+, -, *, /, ^): ";
    std::cin >> operation;
    
    try {
        double result;
        switch(operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            case '^':
                result = power(num1, num2);
                break;
            default:
                std::cout << "Неверная операция" << std::endl;
                return 1;
        }
        
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::string input;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> input;
    
    Counter counter;
    if (input == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }
    
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> input;
        
        if (input == "+") {
            counter.increment();
        } else if (input == "-") {
            counter.decrement();
        } else if (input == "=") {
            std::cout << counter.getValue() << std::endl;
        } else if (input == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        } else {
            std::cout << "Неверная команда!" << std::endl;
        }
    }

    return 0;
}
