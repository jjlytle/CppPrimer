// Exercise 1.21: Write a program that reads two 
// Sales_item objects that have the same ISBN and produces their sum.

#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[])
{

    Sales_item item1;
    Sales_item item2;

    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    
    return 0;

}