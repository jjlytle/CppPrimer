// Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops. 


#include <iostream>

int main(int argc, char* argv[])
{
    int sum = 0, max =10;
    for (int i = 1; i < max; i++)
    {
        sum += i;
    }
    
    std::cout << "the sum is " << sum << std::endl;
    return 0;
}
