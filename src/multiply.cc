/**
 * multiply.cc
 */

#include <cstdlib>
#include <iostream>
#include "calcfunc.hh"

int multiply()
{
    int multiplicand1 = 0;
    int multiplicand2 = 0;
    int product = 0;

    std::cout << "Enter first multiplicand: ";
    std::cin >> multiplicand1;

    std::cout << "Enter second multiplicand: ";
    std::cin >> multiplicand2;

    product = multiplicand1 * multiplicand2;

    std::cout << "The product is: " << product << std::endl;

    return EXIT_SUCCESS;
}

