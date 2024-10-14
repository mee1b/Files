#include <iostream>
#include "maths.h"

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Введите первое число: ";
    int one{};
    std::cin >> one;

    std::cout << "Введите второе число: ";
    int two{};
    std::cin >> two;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    int choice{};
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        summ(one, two);
        break;
    case 2:
        subtract(one, two);
        break;
    case 3:
        multiplication(one, two);
        break;
    case 4:
        division(one, two);
        break;
    case 5:
        exponentiation(one, two);
        break;
    default:
        std::cout << "Не понимаю!\nПопробуй заново!\n";
    }

    return EXIT_SUCCESS;
}


