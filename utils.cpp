//
// Created by victo on 02/03/2023.
//

#include "Utils.h"

#include <iostream>

void Utils::print(std::string message) {
    std::cout << message << "\n";
}

std::string Utils::prompt(std::string message) {
    Utils::print(message);
    std::string input;

    std::cin >> input;

    return input;
}
