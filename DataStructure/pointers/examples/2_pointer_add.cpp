#include <iostream>


int main()
{

int x;
x=12;
int* ptr; //define an interger pointer

ptr=&x; // make the pointer points to adress of x


std::cout<<"print the value of x:"<<*ptr<<std::endl; //print the value of x using pointer derefrence operator

*ptr+=5;

std::cout<<"print the value of x after add:"<<x<<std::endl;

return 0;
}