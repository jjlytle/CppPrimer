// Exercise 1.16: Write your own version of a program 
// that prints the sum of a set of integers read from cin.

#include <iostream>

int main(int argc, char *argv[]) {
	int val, sum = 0;

    std::cout << "enter a set of numbers:" << std::endl;
    while(std::cin >> val)
    {
        sum += val;
    }
    std::cout << "\nthe sum is " << sum << std::endl;
    return 0;
} 