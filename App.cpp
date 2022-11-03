// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"



// In C++, a namespace is a collection of related identifiers
// (functiond, classes, objects, variables)

// The C++ standard libary identifiers are definded in a namespace
// called std

// A way to bring a specific identifier of the std namespace into
// a C++ application is with the help of the using declaration
using std::cout;

// A way to bring all the identifiers of the std namespace into a 
// C++ application as if they were declared globally is with the help of the
// using namespace statement
using namespace std;

int main() {
    // In order to use the C++ standard libary identifier, like cout,
    // we need to specify that it belongs to the std namespace. One
    // way to do this is by using the scope resolution operator ::
    // std::cout << "Hello World!";
    // cout << "Hello World!";
    // output();
    // input();
    decisions1();
}