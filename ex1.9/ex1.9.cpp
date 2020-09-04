/*
* Exercise 1.9: Write a program that uses a while to sum the numbers from
* 50 to 100
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int sum = 0, val = 50, max =100;
    std::cout << "the sum of the numbers between "  << val << " and " << max;
    while (val <= max)
    {
        sum += val++;
    }
    std::cout << " is " << sum << std::endl;
    return 0;
}