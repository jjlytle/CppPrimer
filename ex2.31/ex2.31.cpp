#include <iostream>

int main(int argc, char *argv[]) {
    int i;
    const int v2 = 0; 
    int v1 = v2; //v1 can be written to but v2 is still read only
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	r1 = v2; //legal vl is already assigned to v2 now again through reference
    p1=p2; //a value of type "const int *" cannot be assigned to an entity of type "int *"
    p2=p1; //fine int* can be converted to const int *
    p1=p3; //a value of type "const int *" cannot be assigned to an entity of type "int *"
    p2=p3; //points to const int assigned address of a const pointer that points to type const int 
}