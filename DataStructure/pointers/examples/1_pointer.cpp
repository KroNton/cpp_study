#include <iostream>


int main()
{

int x;
x=12;
int* ptr; //define an interger pointer

ptr=&x; // make the pointer points to adress of x

std::cout<<"print the adress of x:"<<ptr<<std::endl; //print the adress of x using pointer

std::cout<<"print the value of x:"<<*ptr<<std::endl; //print the value of x using pointer derefrence operator

return 0;
}