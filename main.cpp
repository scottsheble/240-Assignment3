/********************************************************
    CSCI 240        Program 3       Fall 2023

    Programmer: Scott Sheble

    Section: 1

    Date Due: 9/22/2023

    Purpose: Compiler Training

    Created by scott sheble on 8/28/23.
*********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

double grossIncome = 0;
double incomeTax = 0;

int main()
{
    std::cout << "What is your gross income? ";
    std::cin >> grossIncome;
    if (grossIncome <= 11000)
        incomeTax = (0.1 * 11000);
    else if (grossIncome > 11000 && grossIncome <= 44725)
        incomeTax = (0.1 * 11000) + (0.12 * 33725);
    else if (grossIncome > 44725 && grossIncome <= 95375)
        incomeTax = (0.1 * 11000) + (0.12 * 33725) + (0.22 * 50650);
    else if (grossIncome > 95375)
        incomeTax = (0.1 * 11000) + (0.12 * 33725) + (0.22 * 50650) + (0.24 * 4625);
        
    std::cout << std::endl;
    std::cout << "Gross Income: " << fixed << setprecision(2) <<  grossIncome << std::endl;
    std::cout << "Income Tax " << fixed << setprecision(2) << incomeTax << std::endl;
    std::cout << std::endl;
    return 0;
}
