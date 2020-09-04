/*
Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.
*/

#include <iostream>

int main()
{
    int x = 0;
    int y = 0;

    std::cout << "enter two numbers" << std::endl;

    std::cin >> x >> y;

    std::cout << "the product of "; 
    std::cout << x;
    std::cout << " and "; 
    std::cout << y; 
    std::cout << " is ";
    std::cout << x * y << std::endl;

    return 0;
}