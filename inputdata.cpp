#include <iostream>
#include<string>

int main()
{
    /*
    int age;
    std::string name;

    std::cout<<"Please type your name and age: "<<std::endl;
    
     // data input

    // std::cin>> name; //flow from terminal to name variable
    // std::cin>> age;

    std::cin>> name >> age;

    std::cout<<"Hello "<< name<<" Your age is "<< age<<" years old!"<<std::endl;

*/

// Data with Spaces
std::string full_name;
int age;
std::cout << "Enter Your full name and age:"<< std::endl;
std::getline (std::cin,full_name);
std::cin >> age;
std::cout << "Hello "<< full_name << " you are "<< age << " years old! " << std::endl;



    return 0;
}