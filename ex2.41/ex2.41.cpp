#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned int units_sold{0};
    double revenue{0.0};
};
void print_sales_data(Sales_data* sale);
void print_sales_data_and_transactin_count(Sales_data *sale, int *count);
void ex1_20();
void ex1_21();
void ex1_22();
void ex1_23();
int ex1_25();

int main(int argc, char *argv[]) {

    //ex1_20();
    //ex1_21();
    //ex1_22();
    //ex1_23(); //ex1.24 is just running ex1_23 on book_sales data file
    return ex1_25();
	
}

void ex1_20()
{
    Sales_data sales;
    double price;
    while(std::cin >> sales.bookNo >> sales.units_sold >> price)
    {
        sales.revenue = sales.units_sold * price;
        print_sales_data(&sales);
    }
}

void ex1_21()
{
    Sales_data sales;
    Sales_data sum;
    double price;
    while(std::cin >> sales.bookNo >> sales.units_sold >> price)
    {
        sales.revenue = sales.units_sold * price;
        if(sum.bookNo == sales.bookNo)
        {
            sum.units_sold += sales.units_sold;
            sum.revenue += sales.revenue;
        }
        else
        {
            sum.bookNo = sales.bookNo;
            sum.units_sold = sales.units_sold;
            sum.revenue = sales.revenue;
            //print_sales_data(&sum);
        }
    }
    print_sales_data(&sum);
}

void ex1_22()
{
    Sales_data sales;
    Sales_data sum;
    double price;
    while(std::cin >> sales.bookNo >> sales.units_sold >> price)
    {
        sales.revenue = sales.units_sold * price;
        if(sum.bookNo == sales.bookNo)
        {
            sum.units_sold += sales.units_sold;
            sum.revenue += sales.revenue;
        }
        else
        {
            sum.bookNo = sales.bookNo;
            sum.units_sold = sales.units_sold;
            sum.revenue = sales.revenue;
            //print_sales_data(&sum);
        }
    }
    print_sales_data(&sum);
}

void ex1_23()
{
    
    Sales_data sum;
    int count = 1;
    double price;
    if(std::cin >> sum.bookNo >> sum.units_sold >> price)
    {
        sum.revenue = sum.units_sold * price;
        Sales_data sales;
        while(std::cin >> sales.bookNo >> sales.units_sold >> price)
        {
            sales.revenue = sales.units_sold * price;
            if(sum.bookNo == sales.bookNo)
            {
                sum.units_sold += sales.units_sold;
                sum.revenue += sales.revenue;
                count++;
            }
            else
            {
                print_sales_data_and_transactin_count(&sum, &count);
                sum.bookNo = sales.bookNo;
                sum.units_sold = sales.units_sold;
                sum.revenue = sales.revenue;
                count = 1;
            }
        }
    }
    print_sales_data_and_transactin_count(&sum, &count);
}

int ex1_25()
{
    
    Sales_data sum;
    int count = 1;
    double price;
    if(std::cin >> sum.bookNo >> sum.units_sold >> price)
    {
        sum.revenue = sum.units_sold * price;
        Sales_data sales;
        while(std::cin >> sales.bookNo >> sales.units_sold >> price)
        {
            sales.revenue = sales.units_sold * price;
            if(sum.bookNo == sales.bookNo)
            {
                sum.units_sold += sales.units_sold;
                sum.revenue += sales.revenue;
                count++;
            }
            else
            {
                print_sales_data_and_transactin_count(&sum, &count);
                sum.bookNo = sales.bookNo;
                sum.units_sold = sales.units_sold;
                sum.revenue = sales.revenue;
                count = 1;
            }
        }
    }
    else
    {
        std::cout << "no data" << std::endl;
        return -1;
    }
    print_sales_data_and_transactin_count(&sum, &count);
    return 0;
}

void print_sales_data(Sales_data *sale)
{
    std::cout << "ISBN:\t\t" << sale->bookNo << "\nUnits Sold:\t" << sale->units_sold <<
        "\nRevenue:\t" << sale->revenue << "\n" << std::endl; 
}

void print_sales_data_and_transactin_count(Sales_data *sale, int* pCount)
{
    std::cout << "ISBN:\t\t" << sale->bookNo << "\nUnits Sold:\t" << sale->units_sold <<
        "\nRevenue:\t" << sale->revenue << "\n" << "Transactions:\t" <<
        *pCount << "\n" << std::endl; 
}
