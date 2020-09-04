#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int i, *const cp = &i;
    int *p1, *const p2 = &i;
    const int ic = NULL, &r = ic; 
    const int *const p3 = nullptr;
    const int *p;

    i = ic; 
    //p1 = p3; 
    //p1 = &ic; 
    //p3 = &ic; 
    //p2 = p1; 
    //ic = *p3;
}