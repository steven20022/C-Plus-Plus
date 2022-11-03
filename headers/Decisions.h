// include pre-processor directives
#include <iostream>

#define NUM 34568.80

using namespace std;

// // this function will use the comparison operators, 
// // and the is, if-else, if-else-if statements
// void decisions1(void) {
//     // declare a variable of type float
//     // intiialize it using constant defined in header file
//     float num = NUM;

//     // use if statement
//     if (num < 40000.0)
//     {
//         printf("Num (%.2f) is less than 40000.0.\n", num); // displayed
//     }

//     num += num;

//     //use if-else statement
//     if (num < 40000.0)
//     {
//         printf("Num (%.2f) is less than 40000.0.\n", num); // not displayed
//     }
//     else
//     {
//         printf("Num (%.2f) is not less than 40000.0.\n", num); // displayed
//     }
    
//     num = 0.0;
    
//     // use if-else-if-else
//     if (num == 0.0)
//     {
//         printf("Num (%.2f) is equal to 0.0.\n", num); // displayed
//     }
//     else if (num < 40000.0)
//     {
//         printf("Num (%.2f) is less than 40000.0.\n", num); // not displayed
//     }
//     else
//     {
//         printf("Num (%.2f) is not less than 40000.0.\n", num); // not displayed
//     }
    
// }

// this function will use the comparison operators, 
// and the is, if-else, if-else-if statements
void decisions1(void) {
    // declare a variable of type float
    // intiialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0)
    {
        cout << "Num "<< num <<" is less than 40000.0."<< endl; // displayed
    }

    num += num;

    //use if-else statement
    if (num < 40000.0)
    {
        cout << "Num "<< num <<" is less than 40000.0."<< endl; // not displayed
    }
    else
    {
        cout << "Num "<< num <<" is not less than 40000.0."<< endl; // displayed
    }
    
    num = 0.0;
    
    // use if-else-if-else
    if (num == 0.0)
    {
        cout << "Num "<< num <<" is equal to 0.0."<< endl; // displayed
    }
    else if (num < 40000.0)
    {
        cout << "Num "<< num <<" is less than 40000.0."<< endl; // not displayed
    }
    else
    {
        cout << "Num "<< num <<" is not less than 40000.0."<< endl; // not displayed
    }
    
}