#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int x = 1;
    int y = 0;
    int *px = &y; //points to y
    cout << x << " " << *px << " " << px << endl;
    px = &x; //changed the place px points to that is to say the address stored in px
    *px = 2; //changed the value that px points to
    cout << x << " " << *px << " " << px << endl;


}