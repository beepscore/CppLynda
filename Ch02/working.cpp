// working.cpp by Bill Weinman <http://bw.org/>
#include <iostream>

// if comment out using, need to add explicit prefix std::
//using namespace std;

int main( int argc, char ** argv ) {
    
    std::cout << "Hello, World!\n";
    // usually stderr is buffered
    // endl flushes buffer
	std::cout << "Hello, World!" << std::endl;
    
    // usually stderr isn't buffered
	std::cerr << "Hello, World!" << std::endl;
    
	return 0;
}
