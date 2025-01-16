// Resistance is Everything.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono> 

int main()
{
    int r1;
    int r2;
    double seriesf;
    double bigcircut;
    double bigcircut2;

    std::cout << "Hello! Welcome to Jacks Resistor Calculation Prograam!\n";
    /*I put in a wait command, couldn't think of a better way to do it. Because I didn't
    like it when everything just kind of burst on to the screen */
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    std::cout << "\nPlease enter in two values for this resistance calculation...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    var1:
    std::cout << "Value 1: ";
    std::cin >> r1;
    if (r1 >= 0) {
        std::cout << "\nThe number you entered is invalid, please enter a different number...\n";
        goto var1;
    }
    var2:
    std::cout << "\nValue 2: ";
    std::cin >> r2;
    if (r2 >= 0) {
        std::cout << "\nThe number you entered is invalid, please enter a different number...\n";
        goto var2;
    }
    
    std::cout << "\nThank you! The values you entered where " << r1 << " and " << r2 << " ohms!";
    std::cout << "\nCalculating";
    //this gives it the illusion of it doing something cool, and looks cool i think
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    std:seriesf = (r1 + r2);
    std::cout << "\nIf the resistors where place in a series, it would be " << seriesf << " ohms.";

    std:bigcircut = (1/r1) + (1/r2);
    std:bigcircut2 = 2;

    return 0;
}
