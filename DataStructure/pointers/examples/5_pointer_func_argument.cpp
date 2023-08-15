#include <iostream>



void swap(double* ptr1,double* ptr2){
double temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}

int main()
{

double x=5;
double y=3;
std::cout<<x<<y<<std::endl;
std::cout<<"------------------"<<std::endl;

swap(&x,&y);
std::cout<<x<<y<<std::endl;
std::cout<<"------------------"<<std::endl;

swap(&x,&y);
std::cout<<x<<y<<std::endl;

return 0;
}

