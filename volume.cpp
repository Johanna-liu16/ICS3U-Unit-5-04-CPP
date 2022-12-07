// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Nov 2022
// This program is converts c to f

#include <iostream>
#include <string>
#include <cmath>

double CalculateVolume(int radius, int height) {
    double volume;

    // calculate volume
    volume = round(M_PI * pow(radius, 2) * height * 100) / 100;
    return volume;
}


int main() {
    std::string strRadius;
    std::string strHeight;
    int radius;
    int height;
    double totalVolume;

    // input
    std::cout << "This program calculates the volume of a cylinder." << std::endl;
    std::cout << "Enter length of radius (cm): ";
    std::cin >> strRadius;
    std::cout << "Enter length of height (cm): ";
    std::cin >> strHeight;

    // process and output
    try {
        radius = std::stoi(strRadius);
        height = std::stoi(strHeight);
        // call functions
        totalVolume = CalculateVolume(radius, height);
        std::cout << "Volume of a cylinder with a radius of " << radius <<
        " cm and a height of " << height << " cm is " << totalVolume << "cm³.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
