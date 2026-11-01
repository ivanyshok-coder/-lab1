#include "tasks.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

// Глобальные переменные для задания 4
int g_size = 0;
int g_size2 = 0;
int g_result_size = 0;

// ЗАДАНИЕ 1. МЕТОДЫ

int sumLastNums(int x) {
    int abs_x = std::abs(x);
    if (abs_x < 10) {
        std::cout << "Ошибка: число должно содержать не менее двух цифр\n";
        return -1;
    }
    int last_two = abs_x % 100;
    return last_two / 10 + last_two % 10;
}

void task2SumLastNums() {
    int x = 0;
    std::cout << "Введите число X (не менее двух цифр): ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    int result = sumLastNums(x);
    if (result != -1) {
        std::cout << "Сумма последних двух цифр: " << result << "\n";
    }
}

bool isPositive(int x) {
    return x > 0;
}

void task4IsPositive() {
    int x = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    if (isPositive(x)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}

bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z';
}

void task6IsUpperCase() {
    char x = ' ';
    std::cout << "Введите символ X: ";
    std::cin >> x;
    if (isUpperCase(x)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}

bool isDivisor(int a, int b) {
    if (a == 0 || b == 0) {
        return false;
    }
    return (b % a == 0) || (a % b == 0);
}

void task8IsDivisor() {
    int a = 0, b = 0;
    std::cout << "Введите число A: ";
    std::cin >> a;
    std::cout << "Введите число B: ";
    std::cin >> b;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    if (isDivisor(a, b)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}

int lastNumSum(int a, int b) {
    return std::abs(a) % 10 + std::abs(b) % 10;
}

void task10LastNumSum() {
    int nums[5] = {0};
    std::cout << "Введите 5 чисел:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> nums[i];
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка: введено не число\n";
            return;
        }
    }

    int result = nums[0];
    for (int i = 1; i < 5; i++) {
        int next = lastNumSum(result, nums[i]);
        std::cout << result << "+" << nums[i] << " = " << next << "\n";
        result = next;
    }
    std::cout << "Итого: " << result << "\n";
}

// ЗАДАНИЕ 2. УСЛОВИЯ

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0.0;
    }
    return static_cast<double>(x) / y;
}

void task2SafeDiv() {
    int x = 0, y = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    std::cout << "Введите число Y: ";
    std::cin >> y;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    std::cout << "Результат: " << safeDiv(x, y) << "\n";
}

std::string makeDecision(int x, int y) {
    if (x > y) {
        return std::to_string(x) + " > " + std::to_string(y);
    }
    if (x < y) {
        return std::to_string(x) + " < " + std::to_string(y);
    }
    return std::to_string(x) + " == " + std::to_string(y);
}

void task4MakeDecision() {
    int x = 0, y = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    std::cout << "Введите число Y: ";
    std::cin >> y;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    std::cout << makeDecision(x, y) << "\n";
}

bool sum3(int x, int y, int z) {
    return (x + y == z) || (x + z == y) || (y + z == x);
}

void task6Sum3() {
    int x = 0, y = 0, z = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    std::cout << "Введите число Y: ";
    std::cin >> y;
    std::cout << "Введите число Z: ";
    std::cin >> z;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    if (sum3(x, y, z)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}

std::string age(int x) {
    int last_two = x % 100;
    int last_one = x % 10;

    if (last_two >= 11 && last_two <= 14) {
        return std::to_string(x) + " лет";
    }
    if (last_one == 1) {
        return std::to_string(x) + " год";
    }
    if (last_one >= 2 && last_one <= 4) {
        return std::to_string(x) + " года";
    }
    return std::to_string(x) + " лет";
}

void task8Age() {
    int x = 0;
    std::cout << "Введите возраст X: ";
    std::cin >> x;
    if (std::cin.fail() || x < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено некорректное число\n";
        return;
    }
    std::cout << age(x) << "\n";
}

void printDays(int x) {
    switch (x) {
        case 1: std::cout << "понедельник\n";
        case 2: std::cout << "вторник\n";
        case 3: std::cout << "среда\n";
        case 4: std::cout << "четверг\n";
        case 5: std::cout << "пятница\n";
        case 6: std::cout << "суббота\n";
        case 7: std::cout << "воскресенье\n"; break;
        default: std::cout << "это не день недели\n";
    }
}

void task10PrintDays() {
    int x = 0;
    std::cout << "Введите номер дня недели (1-7): ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    printDays(x);
}

// ЗАДАНИЕ 3. ЦИКЛЫ

std::string reverseListNums(int x) {
    std::string result = "";
    for (int i = x; i >= 0; i--) {
        result += std::to_string(i);
        if (i > 0) {
            result += " ";
        }
    }
    return result;
}

void task2ReverseListNums() {
    int x = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    if (std::cin.fail() || x < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено некорректное число\n";
        return;
    }
    std::cout << reverseListNums(x) << "\n";
}

int myPow(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

void task4Pow() {
    int x = 0, y = 0;
    std::cout << "Введите основание X: ";
    std::cin >> x;
    std::cout << "Введите степень Y: ";
    std::cin >> y;
    if (std::cin.fail() || y < 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено некорректное число\n";
        return;
    }
    std::cout << "Результат: " << myPow(x, y) << "\n";
}

bool equalNum(int x) {
    int abs_x = std::abs(x);
    int first = abs_x % 10;
    abs_x /= 10;
    while (abs_x > 0) {
        if (abs_x % 10 != first) {
            return false;
        }
        abs_x /= 10;
    }
    return true;
}

void task6EqualNum() {
    int x = 0;
    std::cout << "Введите число X: ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    if (equalNum(x)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}

void leftTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void task8LeftTriangle() {
    int x = 0;
    std::cout << "Введите высоту треугольника X: ";
    std::cin >> x;
    if (std::cin.fail() || x <= 0) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено некорректное число\n";
        return;
    }
    leftTriangle(x);
}

void guessGame() {
    std::srand(std::time(0));
    int secret = std::rand() % 10;
    int attempts = 0;
    int guess = 0;

    do {
        std::cout << "Введите число от 0 до 9: ";
        std::cin >> guess;
        attempts++;

        if (std::cin.fail() || guess < 0 || guess > 9) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка: нужно ввести число от 0 до 9\n";
            attempts--;
            continue;
        }

        if (guess == secret) {
            std::cout << "Вы угадали!\n";
        } else {
            std::cout << "Вы не угадали\n";
        }
    } while (guess != secret);

    std::cout << "Вы отгадали число за " << attempts << " попытки\n";
}

void task10GuessGame() {
    guessGame();
}

// ЗАДАНИЕ 4. МАССИВЫ

void printArray(int arr[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}

bool readArray(int arr[], int* size) {
    std::cout << "Введите размер массива: ";
    std::cin >> *size;
    if (std::cin.fail() || *size <= 0 || *size > 100) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: размер должен быть от 1 до 100\n";
        return false;
    }
    std::cout << "Введите " << *size << " элементов массива:\n";
    for (int i = 0; i < *size; i++) {
        std::cin >> arr[i];
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка: введено не число\n";
            return false;
        }
    }
    return true;
}

int findLast(int arr[], int x) {
    int last_index = -1;
    for (int i = 0; i < g_size; i++) {
        if (arr[i] == x) {
            last_index = i;
        }
    }
    return last_index;
}

void task2FindLast() {
    int arr[100] = {0};
    if (!readArray(arr, &g_size)) {
        return;
    }
    int x = 0;
    std::cout << "Введите число X для поиска: ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: введено не число\n";
        return;
    }
    int result = findLast(arr, x);
    std::cout << "Индекс последнего вхождения: " << result << "\n";
}

int* add(int arr[], int x, int pos) {
    g_result_size = g_size + 1;
    int* result = new int[g_result_size]();
    for (int i = 0; i < pos; i++) {
        result[i] = arr[i];
    }
    result[pos] = x;
    for (int i = pos; i < g_size; i++) {
        result[i + 1] = arr[i];
    }
    return result;
}

void task4Add() {
    int arr[100] = {0};
    if (!readArray(arr, &g_size)) {
        return;
    }
    int x = 0, pos = 0;
    std::cout << "Введите значение X: ";
    std::cin >> x;
    std::cout << "Введите позицию pos (от 0 до " << g_size << "): ";
    std::cin >> pos;
    if (std::cin.fail() || pos < 0 || pos > g_size) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ошибка: некорректные данные\n";
        return;
    }
    int* result = add(arr, x, pos);
    std::cout << "Результат: ";
    printArray(result, g_result_size);
    delete[] result;
}

void reverse(int arr[]) {
    for (int i = 0; i < g_size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[g_size - 1 - i];
        arr[g_size - 1 - i] = temp;
    }
}

void task6Reverse() {
    int arr[100] = {0};
    if (!readArray(arr, &g_size)) {
        return;
    }
    reverse(arr);
    std::cout << "Результат: ";
    printArray(arr, g_size);
}

int* concat(int arr1[], int arr2[]) {
    g_result_size = g_size + g_size2;
    int* result = new int[g_result_size]();
    for (int i = 0; i < g_size; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < g_size2; i++) {
        result[g_size + i] = arr2[i];
    }
    return result;
}

void task8Concat() {
    int arr1[100] = {0};
    int arr2[100] = {0};
    std::cout << "--- Первый массив ---\n";
    if (!readArray(arr1, &g_size)) {
        return;
    }
    std::cout << "--- Второй массив ---\n";
    if (!readArray(arr2, &g_size2)) {
        return;
    }
    int* result = concat(arr1, arr2);
    std::cout << "Результат: ";
    printArray(result, g_result_size);
    delete[] result;
}

int* deleteNegative(int arr[]) {
    int* result = new int[g_size]();
    int count = 0;
    for (int i = 0; i < g_size; i++) {
        if (arr[i] >= 0) {
            result[count] = arr[i];
            count++;
        }
    }
    g_result_size = count;
    return result;
}

void task10DeleteNegative() {
    int arr[100] = {0};
    if (!readArray(arr, &g_size)) {
        return;
    }
    int* result = deleteNegative(arr);
    std::cout << "Результат: ";
    printArray(result, g_result_size);
    delete[] result;
}