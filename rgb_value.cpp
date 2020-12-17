// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 17 2020
// this program prints out all the valid RGB values
#include <iostream>
#include <string>

int main() {
    // this program prints out all the valid RGB values
    int counter1;
    int counter2;
    int counter3;

    // process and output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "RGB( " << counter1 << ", " << counter2 << ", "
                          << counter3 << ")" << std::endl;
            }
        }
    }
}
