/**
 * calc.cc
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "calcfunc.hh"
#include "calc.hh"

int main()
{
    std::cout << "Stupid Calc v.01a" << std::endl;

    int retval = 0;
    char function;

    while (function != 'Q')
    {
        function = show_menu();
        switch (function)
        {
        case '+':
            retval = add();
            break;
        case '-':
            retval = subtract();
            break;
        case '*':
            retval = multiply();
            break;
        case '/':
            retval = divide();
            break;
        case '?':
            show_help();
            break;
        default:
            function = 'Q';
            std::cout << "Exiting Stupid Calc" << std::endl;
            retval = EXIT_SUCCESS;
        }

        if (retval)
        {
            show_error(retval);
            break;
        }
    }

    return retval;
}

char show_menu()
{
    char op = 'Q';

    std::cout << "\n\t" << "(+) Add" << std::endl;
    std::cout << "\t" << "(-) Subtract" << std::endl;
    std::cout << "\t" << "(*) Multiply" << std::endl;
    std::cout << "\t" << "(/) Divide" << std::endl;
    std::cout << "\t" << "(?) Help" << std::endl;
    std::cout << "\t" << "(Q)uit" << std::endl;
    std::cout << "Select Function: ";

    std::cin >> op;

    return op;
}

void show_error(int error_code)
{
    std::cout << "ERROR!! function returned code: " << error_code << std::endl;
}

void show_help()
{
    std::cout << "Really? Never used a calculator before?" << std::endl;
}
