// Exercise 1.22: Write a program that reads several transactions for the same ISBN. 
// Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[])
{
    Sales_item item1;
    Sales_item item2;

    if(std::cin >> item1)
    {
        std::cout << item1 << std::endl;
        while(std::cin >> item2)
        {
            item1 += item2;
            std::cout << item1 << std::endl;
        }
    }
    return 0;
}