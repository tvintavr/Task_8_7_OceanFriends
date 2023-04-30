#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    int N, K;
    float T;
    std::cout<<"Введите количество ручек (>0): ";
    std::cin>>N;
    std::cout<<"Введите количество положений ручки (>0): ";
    std::cin>>K;
    std::cout<<"Введите время проверки одной комбинации, сек (>0): ";
    std::cin>>T;
    if (T<=0 || K<=0 || N<=0 || std::cin.fail() || std::cin.peek() != '\n') {
        std::cout << "Ошибка ввода данных\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        std::cout << "Для проверки " << std::pow(K,N) << " комбинаций потребуется " << std::pow(K,N) * T <<" секунд\n";
    }
}