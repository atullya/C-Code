#include <iostream>
int add(int x, int y){
 int sum=x+y;
 return sum;
}

int main()
{
    // statement is a basic unit of computation every c++ program is collection of statement
    int first_number {4}; //statement
    int second_number {6};

    std::cout<< "First Number: "<< first_number <<std::endl;
    std::cout<< "Seocnd Number: "<< second_number<<std::endl;
    
   int sum=first_number+second_number;
   std::cout<< "sum:"<< sum <<std::endl; //10

//    sum=add(5,1);
    // std::cout<<"Sum:"<< sum <<std::endl; //6

   add(5,1);
    std::cout<<"Sum:"<< add(5,1) <<std::endl; //6
    return 0;
}