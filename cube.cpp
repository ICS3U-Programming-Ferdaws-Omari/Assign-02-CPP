// Copyright(c) 2021 Ferdaws All rights reserved.
//
// Created by: Ferdaws
// Created on: 09/03/2022
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
# include <iostream>
# include <cmath>
# include <string>
# include <iomanip>

int main() {
  // declare variables
  float side , area, volume;
  std::string units;

  // Ask the user for one of the sides of the cube and the units
  std::cout << "Today we will calculate the area and\n";
  std::cout << "volume of a cube.\n";
  std::cout << "Enter the length of one of the sides : ";
  std::cin >> side;
  std::cout << "Enter the units: ";
  std::cin >> units;

  // calculate area and volume of the cube
  area = 6 *  pow(side, 2);
  volume = pow(side, 3);

  // display the results to the user and round it to two decimal places
  std::cout << std::endl;
  std::cout << "Area = " << area <<  units; "\n";
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\n";
  std::cout << "volume = " << volume << units; "\n";
}
