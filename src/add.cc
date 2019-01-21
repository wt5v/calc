/**
 * add.cc
 */

#include <cstdlib>
#include <iostream>

#include "calcfunc.hh"

int add()
{
    int operand1 = 0;
    int operand2 = 0;
    int sum = 0;

    std::cout << "Enter first operand: " ;
    std::cin >> operand1;

    std::cout << "Enter second operand: ";
    std::cin >> operand2;

    sum = operand1 + operand2;

    std::cout << "Sum is: " << sum << std::endl;

    return EXIT_SUCCESS;
}

