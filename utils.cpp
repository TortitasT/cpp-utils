//
// Created by victo on 02/03/2023.
//

#include "utils.h"

#include <iostream>

void utils::print(const std::string message) {
    std::cout << message << "\n";
}

std::string utils::prompt(std::string message) {
    utils::print(message);
    std::string input;

    std::cin >> input;

    return input;
}
