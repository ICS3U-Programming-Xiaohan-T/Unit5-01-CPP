// Copyright 2025
// Created by: Xiaohan
// Created on: May 5, 2025
// This program converts Celsius to Fahrenheit.

#include <iostream>
#include <string>
#include <stdexcept>

// Function that are build for fahrenheit
void fahrenheit() {
    // Declare variables
    float celsius;
    float fahrenheit;
    std::string celsiusStr;
    // Get user input
    std::cout << "Enter the temperature in Celsius: ";
    // Store the input in a string
    std::cin >> celsiusStr;
    // Convert the string to a float
    try {
        // Convert the string to a float
        celsius = std::stof(celsiusStr);
        // The formula to convert Celsius to Fahrenheit
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        // Output the result
        std::cout << celsius << " Celsius is " << fahrenheit
        << " Fahrenheit." << std::endl;
    // Catch any invalid input
    } catch (const std::invalid_argument& e) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
}

int main() {
    // Call the fahrenheit function
    fahrenheit();
}

