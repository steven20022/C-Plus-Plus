// include pre-processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"



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
    // decisions1();
    // loops1();
    // congratulate1("Jacob", "C++", "Bjarne Stoustrup");
    // congratulate2("Jacob", "C++", "Bjarne Stoustrup");
    accessStructMembers();
    // declare a Person struct
    Person p;

    // assign values to its members
    p.heightInMeters = 1.778;
    p.weigthInKilos = 77;

    // call the bodyMassIndex function pass the struct as an argument
    // output the return from the bodyMassIndex function
    cout << bodyMassIndex(p);
}