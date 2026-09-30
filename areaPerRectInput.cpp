// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// .
// Created by: Lennon Cehajic
// Date: September 29th, 2026
// This program calculates the area and perimeter of a rectangle.

#include <iostream>

int main() {
    // declare variables
    int length;
    int width;
    int area;
    int perimeter;

    // Get the length and width from the user.
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // Calculate the area and perimeter.
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the area and perimeter.
    std::cout << "The area is: " << area << "cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
}
