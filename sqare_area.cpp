// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for address

#include <iostream>

int CalculateArea(std::string length, std::string width) {
    // This function is for calculate

    int length_int = 0;
    int width_int = 0;
    int area = -1;

    // process
    try {
        length_int = std::stoi(length);
        if (length_int > 0) {
            try {
                width_int = std::stoi(width);
                if (width_int > 0) {
                    area = length_int * width_int;
                } else {
                    std::cout << "width is not positive number" << std::endl;
                }
            } catch (std::invalid_argument) {
                std::cout << "width is not a integer" << std::endl;
            }
        } else {
            std::cout << "length is not a positive number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "length is not a integer" << std::endl;
    }
    return area;
}


int main() {
    // This function is gie input

    std::string length;
    std::string width;
    int final_area;

    // input
    std::cout << "Enter the length(mm):";
    std::cin >> length;
    std::cout << "Enter the width(mm):";
    std::cin >> width;

    // call function
    final_area = CalculateArea(length, width);

    // output
    std::cout << "area is: " << final_area << "mm²";
    return 0;
}
