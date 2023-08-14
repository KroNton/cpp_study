#include <iostream>


int main()
{

int array[] ={5,12,10,7,20,23};

/* IMPORTANT NOTE : array ->> is a pointer points to the adress 
of the first element in the array */

int* ptr;

ptr=array; //as array is a pointer so we can assign it directly to ptr


*ptr=1; //update the value of first element
 
ptr++; // move to the next adress in the array

*ptr=2; //update the value of secound element

//print the array using *array derefrence operator

for (size_t i = 0; i < 6; i++)
{
 std::cout<<*(array+i)<<" ";
}
std::cout<<std::endl;

return 0;
}

