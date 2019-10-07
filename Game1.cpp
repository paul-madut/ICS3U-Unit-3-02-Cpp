// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul M
// Created on: September 2019
// number guessing game

#include <iostream>

int main() {
    // variables
    int number;
    int NumberGuessed;
    // set number
    number = 5;
    // input
    std::cout << "Enter a number to play: ";
    std::cin >> NumberGuessed;
    // process
    if (NumberGuessed == number) {
        // output
        std::cout << "" << std::endl;
        std::cout << "Congrats you right dawg" << std::endl;
    }

    // process
    if (NumberGuessed != number) {
        // output
        std::cout << "" << std::endl;
        std::cout << "You are a failure" << std::endl;
    }
}
