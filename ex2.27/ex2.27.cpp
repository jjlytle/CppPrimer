
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    int i = 42;
    int *p;
    int *&r = p;
    r = &i;
    const int &r1 = i; // we can bind a const int& to a plain int object 
    const int &r2 = 43; // ok: r1 is a reference to const
    const int &r3 = r1 * 2; // ok: r3 is a reference to const
    //int &r4 = r * 2; // error: r4 is a plain, non const reference


    cout << "r1 " << r1 << " r2 " << r2 << " r3 " << r3 << endl;
}