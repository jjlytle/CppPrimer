#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

    int i = 5, &r1 = i; 
    double d = 0.0, &r2 = d; 

    r2 = 3.14159;
    cout << "r2=3.14159 " << r2 << endl;
    cout << endl;
    r2 = r1;
    cout << "r1= " << r1 << endl;
    cout << "r2=r1 " << r2 << endl;
    cout << endl;
    i = r2;
    cout << "r2= " << r2 << endl;
    cout << "i=r2 " << i << endl;
    cout << endl;
    r1 = d;
    cout << "d= " << d << endl;
    cout << "r1=d " << r1 << endl;
    cout << endl;
    i = d;
    cout << "d= " << d << endl;
    cout << "i=d " << i << endl;
}