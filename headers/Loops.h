// include pre-processor directives
#include <iostream>

// use C++ standard libary namespace
using namespace std;

#define STOP 0
#define START 10
// define macro expressions
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

void loops1(void){
    // declare loop counter variable and initialize it
    int i = START;

    // set up while loop
    // use marco expression as condition of while loop
    while (condition(i))
    {
        cout << i << " ";
        i--;
    }
    cout << "blastoff" << endl;
    
}