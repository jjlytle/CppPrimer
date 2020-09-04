#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r; // a is an int
    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level) 
    auto d=&i; // d isan int*(& ofan int objectis int*)
    auto e = &ci; // e is const int*(& of a const object is low-level const)
    const auto f = ci; // deduced type of ci is int; f has type const int
    auto &g=ci; // g isa const int & that is bound to ci
    auto k=ci,&l=i; // k is int; l is int& auto&m=ci,*p=&ci;// m isa constint&;p isapointerto constint
    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl; 
    a=42; //a is an int
    b=42; //b is a int
    c=42; //c is a int
    // d=42; //d is an int pointer so illegal assignment
    // e=42; // e is const int* so illegal assignment
    // g=42; //g is a const int reference that is bound  to ci can't be redefined
    std::cout << a << " " << b << " " << c << std::endl; 
    return 0;
}