/**
 * divide.cc
 */

#include <cstdlib>
#include <iostream>
#include "calcfunc.hh"

int divide()
{
    int numerator = 0;
    int denominator = 1;
    int quotient = 0;
    int remainder = 0;

    std::cout << "Enter Numerator: ";
    std::cin >> numerator;

    std::cout << "Enter Denominator: ";
    std::cin >> denominator;

    if (denominator == 0)
    {
        std::cout << "Divide by 0!!" << std::endl;

        return EXIT_FAILURE;
    }

    quotient = numerator / denominator;
    remainder = numerator % denominator;

    std::cout << "The answer is: " << quotient;
    if (remainder > 0)
        std::cout << " " << remainder << "/" << denominator << std::endl;
    else
        std::cout << std::endl;

    return EXIT_SUCCESS;
}

