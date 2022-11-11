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

// declare another struct for a Person using
// a type definition. A typedefinition defines
// an alias for a struct that allows the alias
// to be used like a primitive data type
typedef struct {
    // declare two members in the Person struct
    float heightInMeters;
    int weigthInKilos;
} PersonType; // this is the alias

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

    // declare a Person struct using the alias (type definition)
    PersonType p;

    // assign values to the members of the Person struct
    p.heightInMeters = 1.8;
    p.weigthInKilos = 96;

    // display values in members
    cout << "Person's weight is "<< p.weigthInKilos << " kilograms.\n";
    cout << "Person's height is "<< p.heightInMeters << " meters.\n";
}

/** this function will have a struct as a parameter. it will compute and return
 * th BMI of the Person struct */
float bodyMassIndex(struct Person p){
    return p.weigthInKilos / ( p.heightInMeters * p.heightInMeters);
}