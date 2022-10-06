#include <iostream>
// using namespace std;
int main()
{
    int n1=35; //  Decimal Number
    int n2 = 017; // Octal Number
    int n3 = 0x0Fa;// HexaDecimal
    int n4 = 0b00001111; // Binary number

    std::cout<< "Number 1 :" << n1 << std::endl;
    std::cout<< "Number 2 :" << n2 << std::endl;
    std::cout<< "Number 3 :" << n3 << std::endl;
    std::cout<< "Number 4 :" << n4 << std::endl;
    
    return 0;
}