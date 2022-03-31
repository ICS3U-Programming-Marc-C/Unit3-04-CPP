// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This is a program that finds the sign of integers

#include <iostream>
#include <iomanip>

int main() {
    // Declaring variables
    int userInput;


    // input
    std::cout << "Enter a integer: ";
    std::cin >> userInput;
    // Checking number and printing output
    if (userInput > 0) {
    std::cout << "The number is positive.\n";
} else if (userInput == 0) {
    std::cout << "The number is neutral\n";
} else {
    std::cout << "The number is negative\n";
}
}
