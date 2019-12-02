// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Davin Rousseau
// Created on: November 2019
// This is a program which rounds a decimal number

#include <iostream>
#include <cstdlib>
#include <cmath>

// static cast declares a variable as something(int, str, float, etc.)
void RoundOff(int decimal, float number) {
    // This is what rounds the number
    number = (number*(pow(10, decimal))+ 0.5);
    number = static_cast<int>(number);
    number = static_cast<float>(number);
    number = number/(pow(10, decimal));
}

main() {
    // this function just calls other functions
    std::string input1;
    std::string input2;
    int roundNumber;
    float chosenNumber;

    std::cout << "Enter your number with decimals: ";
    std::cin >> input1;
    std::cout << "Enter the number of decimal places to round to: ";
    std::cin >> input2;
    std::cout << "" << std::endl;

    try {
        chosenNumber = std::stof(input1);
        roundNumber = std::stoi(input2);
        // call functions
        RoundOff(roundNumber, chosenNumber);
        std::cout << chosenNumber << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input."
        << std::endl;
    }
}
