#include <iostream>

using namespace std;
int main()
{
    std::cout<<"Hello"<<std::endl // complier error no semicolon
    
    //Run time error
   int v= 4/0;
    std::cout<< v;

    return 0;
}