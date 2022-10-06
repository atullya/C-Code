#include <iostream>
using namespace std;
int main()
{
    /*
    int elephant_count;

    int lion_count {}; // Initiliazes to zero
    int dog_count {10}; // initilizes to 10
    int cat_count {15}; // initializes to 15

    // expression as initializer
    int total_animal {dog_count + cat_count };
 
    int no {2.9}; // not possible give compilation error

    */


 
  /*

 // Functional Initilization

 int apple_count(5);
 int orange_count(10);
 int total_fruit(apple_count + orange_count);

 int pass_function (2.9); // Doesn't give complitiation error

 std::cout << " Apple count :" << apple_count <<std::endl;
 std::cout << " Orange count :" << orange_count <<std::endl;
 std::cout << " total count :" << total_fruit <<std::endl;
 std::cout << " Pass Function :" << pass_function <<std::endl;

*/


// Using Assignment Operator/notaion

int bike=35;
int car=66;
int total = bike + car;
int narrow_conversion_assignment = 2.9;

std::cout<< "Bike : "<< bike << std::endl;
std::cout<< "Car : "<< car << std::endl;
std::cout<< "Total: "<< total << std::endl;
std::cout<< "Narrow Expression: "<< narrow_conversion_assignment << std::endl;

// Check the size with sizeof

std::cout << " sizeof int : "<< sizeof(int) << std::endl;
std::cout << " sizeof car : "<< sizeof(car) << std::endl;



    return 0;
}