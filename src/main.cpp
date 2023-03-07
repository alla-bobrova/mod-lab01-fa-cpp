// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    char str[1000];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 1000);
    std::cout << "Without digits: " << faStr1(str) << std::endl;
    std::cout << "first uppercase next lowercase letters: " << faStr2(str) << std::endl;
    std::cout << "Average length of words: " << faStr3(str) << std::endl;

    return 0;
}
