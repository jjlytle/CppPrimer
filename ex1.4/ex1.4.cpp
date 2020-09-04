/*
Exercise 1.4: Our program used the addition operator, 
+, to add two numbers. Write a 
 that uses the multiplication operator, *, 
 to print the product instead.
*/

#include <iostream>

int main()
{
    int x = 0;
    int y = 0;

    std::cout << "Enter two numbers" << std::endl;

    std::cin >> x >> y;

    std::cout << "the product of " << x << " and " << y << " is " << x * y << std::endl;

    return 0;
}