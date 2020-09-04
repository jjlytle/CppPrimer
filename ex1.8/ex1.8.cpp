
#include <iostream>

int main(int argc, char *argv[]) {
	//std::cout << "/*"; //ok
    //std::cout << "*/"; //ok
    //std::cout << /* "*/" */; //error
    std::cout << /* "*/" /* "/*" */; //oh please ok just barely

}

//lines 7 and 8 produe errors as they start a comment and don't end int
//line 8 works by technicality don't ever code like this in real life.
//it comments out just enough to make it legal syntax.