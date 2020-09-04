

#include <iostream>



struct Sales_data
{
    std::string bookNo;
    unsigned int sold;
    double revenue;
};

int main(int argc, char *argv[]) {

    Sales_data x;
    std::cout << x.bookNo << " "  << x.sold << " " << x.revenue << std::endl;
	
}