#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

#include "tasks.h"

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
#endif

    int task_number = 0;
    std::cout << "Введите номер задачи: ";
    std::cin >> task_number;

    switch (task_number) {
        // Задание 1. Методы
        case 2:  task2SumLastNums();  break;
        case 4:  task4IsPositive();   break;
        case 6:  task6IsUpperCase();  break;
        case 8:  task8IsDivisor();    break;
        case 10: task10LastNumSum();  break;

            // Задание 2. Условия
        case 12: task2SafeDiv();      break;
        case 14: task4MakeDecision(); break;
        case 16: task6Sum3();         break;
        case 18: task8Age();          break;
        case 20: task10PrintDays();   break;

            // Задание 3. Циклы
        case 22: task2ReverseListNums(); break;
        case 24: task4Pow();             break;
        case 26: task6EqualNum();        break;
        case 28: task8LeftTriangle();    break;
        case 30: task10GuessGame();      break;

            // Задание 4. Массивы
        case 32: task2FindLast();        break;
        case 34: task4Add();             break;
        case 36: task6Reverse();         break;
        case 38: task8Concat();          break;
        case 40: task10DeleteNegative(); break;

        default:
            std::cout << "Задача не найдена\n";
    }

    return 0;
}