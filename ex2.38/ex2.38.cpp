#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int i = 0;
    int* p = &i;
    auto a = *p;
    decltype(*p) b = i;
}