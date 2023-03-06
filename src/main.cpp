// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    char str[1000];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 1000);
    std::cout << "Number of words without digits: " << faStr1(str) << std::endl;
    std::cout << "Number of words starting with uppercase letter and containing only lowercase letters: " << faStr2(str) << std::endl;
    std::cout << "Average length of words (rounded to the nearest integer): " << faStr3(str) << std::endl;

    return 0;
}
