// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    char str[1000];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 1000);
    std::cout << "task1: " << faStr1(str) << std::endl;
    std::cout << "task2: " << faStr2(str) << std::endl;
    std::cout << "task3: " << faStr3(str) << std::endl;

    return 0;
}
