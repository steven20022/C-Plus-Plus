// include pre-processor directives
#include <iostream>

// use C++ standard libary namespace
using namespace std;

// declare the class
class Geometry
{
    // class embers (fields, constructors, methods)
    // may have the following access modifiers: private
    // public, protected
    // this class is going to be an abstract class
    // (like a Java interface) b/c its only method is
    // going to be virtual; it will have a declaration only
    // and not a body
    // must use the keyword virtual ehrn declaring virtual
    // methods and must initialize virtual methods to zero
    public:
        virtual void compute() = 0;
};