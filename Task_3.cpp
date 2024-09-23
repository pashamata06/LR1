#include <iostream>
#include <cmath>

int main() {
    double start, end, step;
    std::cout << "Введите начальное значение x: ";
    std::cin >> start; // Ввод начального значения переменной
    std::cout << "Введите конечное значение x: ";
    std::cin >> end; // Ввод конечного значения переменной
    std::cout << "Введите шаг: ";
    std::cin >> step; // Ввод шага изменения аргумента

    for (double x = start; x <= end; x += step) {
        double y = sin(x); // Вычисление функции y = sin(x)
        std::cout << x << " | " << y << std::endl; // Вывод значений функции
    }

    return 0;
}
