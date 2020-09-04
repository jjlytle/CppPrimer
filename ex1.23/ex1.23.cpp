// Exercise 1.22: Write a program that reads several transactions for the same ISBN. 
// Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[])
{
    Sales_item item1;
    Sales_item item2;

    int count = 1;

    if(std::cin >> item1)
    {
        while(std::cin >> item2)
        {
            if(item1.isbn() == item2.isbn())
            {
                count++;
            }
            else
            {
                std::cout << item1 << " count: " << count << std::endl;
                count = 1;
            }
            item1 = item2;
            
        }
        //prints the last set of isbn's as the if remains true to the end of the collection
        std::cout << item1 << " count: " << count << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}