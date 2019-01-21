/**
 * subract.cc
 */

#include <cstdlib>
#include <iostream>
#include "calcfunc.hh"

int subtract()
{
    int subtrahend = 0;
    int minuend = 0;
    int difference = 0;

    std::cout << "Enter subrahend: ";
    std::cin >> subtrahend;

    std::cout << "Enter minuend: ";
    std::cin >> minuend;

    difference = subtrahend - minuend;

    std::cout << "The difference is: " << difference << std::endl;

    return EXIT_SUCCESS;
}

