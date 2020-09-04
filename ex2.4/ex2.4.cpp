#include <iostream>

int main(int argc, char *argv[]) {
    unsigned long long u = 10, u2 = 42; 
    std::cout << u2 - u << std::endl; 
    std::cout << u - u2 << std::endl; 
    long long i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; 
    std::cout << i - i2 << std::endl; 
    std::cout << i - u2 << std::endl; 
    std::cout << u - i << std::endl; 
}