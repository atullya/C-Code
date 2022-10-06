#include <iostream>
using namespace std;
int main()
{
    signed int value1 {10};
   signed int value2 {-100};
    
    std::cout<< "Value 1 = " << value1 << std::endl;
    std::cout << "Value 2 = " << value2 << std::endl;

    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3 { 4 };
    unsigned int value4 { -40 }; // gives warning 
    std::cout << "Value 3 = "<< value3 << std::endl;
    std::cout << "Value 4 = "<< value4 << std::endl;



    return 0;
}