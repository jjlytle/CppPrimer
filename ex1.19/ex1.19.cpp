// Exercise 1.19: Revise the program you wrote for 
// the exercises in § 1.4.1 (p. 13) that printed a 
// range of numbers so that it handles input in which 
// the first number is smaller than the second

#include <iostream>

int main(int argc, char* argv[])
{
    int x, y;

    std::cout << "Enter two numbers" << std::endl;
    std::cin >> x >> y;
    if(x <= y)
    {
        for (int i = x; i <= y; i++)
        {
            std::cout << i << std::endl;
        } 
    }
    else
    {
        for (int i = y; i <= x; i++)
        {
            std::cout << i << std::endl;
        } 
    }
    return 0;
}