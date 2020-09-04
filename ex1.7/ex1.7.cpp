//Exercise 1.7: Compile a program that has incorrectly nested comments.

<code>
#include <iostream>


/*
test /* */
*/
using namespace std;
int main(int argc, char *argv[]) {
	return 0;
}
</code>

ERROR:
ex1.7.cpp:7:6: warning: '/*' within block comment
      [-Wcomment]
test /* */
     ^
ex1.7.cpp:8:2: error: expected unqualified-id
*/
 ^
1 warning and 1 error generated.