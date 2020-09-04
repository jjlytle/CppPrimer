// Exercise 1.12: What does the following for loop do? What is the final value
// of sum?
// Click here to view code image
//   int sum = 0;
// for (int i = -100; i <= 100; ++i)
// sum += i;

// sums the numbers between -100 and 100
// output is zero

#include <iostream>

int main(int argc, char *argv[]) {
	int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}