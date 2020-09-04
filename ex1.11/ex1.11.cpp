/*
* Exercise 1.11: Write a program that prompts the user for two integers. 
* Print each number in the range specified by those two integers.
*/

#include <iostream>

int main(int argc, char *argv[]) {
	int min, max;
    std::cout << "enter two numbers:" << std::endl;
    std::cin >> min >> max; 
    std::cout << std::endl; //for a newline between input and output
    while(min <= max)
    {
        std::cout << min++ << std::endl;
    }
    return 0;
}