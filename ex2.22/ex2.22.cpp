#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int *p = nullptr;
    if(*p) //I am segmentation fault.
    {
        cout << "i am true" << endl;
    }
    else
    {
        cout << "i am false" << endl;
    }
}