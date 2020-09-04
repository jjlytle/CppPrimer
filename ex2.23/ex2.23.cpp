#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int *np = nullptr;

    int i = 0;
    int *p = &i;

    if(np == nullptr)
    {
        cout << "i am not pointing at an object" << endl;
    }
    else
    {
        cout << "i am pointing at an object" << endl;
    }
    

    if(p == nullptr)
    {
        cout << "i am not pointing at an object" << endl;
    }
    else
    {
        cout << "i am pointing at an object" << endl;
    }


}