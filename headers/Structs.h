// include pre-processor directives
#include <iostream>

// a struct is a collection of related data (members)
// the members mat be only fields (variables)
// the members may be of different types
// declare a struct for a Person
struct Person
{
    // declare two members in the Person struct
    float heightInMeters;
    int weigthInKilos;
};

// use C++ standard libary namespace
using namespace std;
/** this function uses the Person struct for purposes
 * of displaying the values in its members */
void accessStructMembers(void) {
    // declare a Person struct
    struct Person person;

    // assign values to the members of the Person struct
    person.heightInMeters = 1.8;
    person.weigthInKilos = 96;

    // display values in members
    cout << "Person's weight is "<< person.weigthInKilos << " kilograms.\n";
    cout << "Person's height is "<< person.heightInMeters << " meters.\n";
}