#ifndef TASKS_H
#define TASKS_H

#include <string>

// Задание 1. Методы
int sumLastNums(int x);
void task2SumLastNums();

bool isPositive(int x);
void task4IsPositive();

bool isUpperCase(char x);
void task6IsUpperCase();

bool isDivisor(int a, int b);
void task8IsDivisor();

int lastNumSum(int a, int b);
void task10LastNumSum();

// Задание 2. Условия
double safeDiv(int x, int y);
void task2SafeDiv();

std::string makeDecision(int x, int y);
void task4MakeDecision();

bool sum3(int x, int y, int z);
void task6Sum3();

std::string age(int x);
void task8Age();

void printDays(int x);
void task10PrintDays();

//  Задание 3. Циклы
std::string reverseListNums(int x);
void task2ReverseListNums();

int myPow(int x, int y);
void task4Pow();

bool equalNum(int x);
void task6EqualNum();

void leftTriangle(int x);
void task8LeftTriangle();

void guessGame();
void task10GuessGame();

// Задание 4. Массивы
extern int g_size;
extern int g_size2;
extern int g_result_size;

void printArray(int arr[], int size);
bool readArray(int arr[], int* size);

int findLast(int arr[], int x);
void task2FindLast();

int* add(int arr[], int x, int pos);
void task4Add();

void reverse(int arr[]);
void task6Reverse();

int* concat(int arr1[], int arr2[]);
void task8Concat();

int* deleteNegative(int arr[]);
void task10DeleteNegative();

#endif  // TASKS_H