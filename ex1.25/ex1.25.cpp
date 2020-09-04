// Exercise 1.22: Write a program that reads several transactions for the same ISBN. 
// Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main(int argc, char* argv[])
{
    Sales_item total;
    Sales_item transaction;

    if(std::cin >> total)
    {
        while(std::cin >> transaction)
        {
            if(total.isbn() == transaction.isbn())
            {
                total += transaction;
            }
            else
            {
                std::cout << total << std::endl;
                total = transaction;
            }
            
        }
        //prints the last set of isbn's as the if remains true to the end of the collection
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
