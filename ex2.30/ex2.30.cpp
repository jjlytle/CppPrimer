#include <iostream>

int main(int argc, char *argv[]) {
    int i;
    const int v2 = 0; 
    int v1 = v2; //v1 can be written to but v2 is still read only
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	
}