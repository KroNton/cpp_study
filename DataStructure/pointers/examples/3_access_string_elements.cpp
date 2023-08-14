#include <iostream>


int main()
{

char msg[] ="Hello";

/* IMPORTANT NOTE : msg ->> is a pointer points to the adress 
of the first element in the array */

char* ptr1;
char* ptr2;
ptr1=msg; //as msg is a pointer so we can assign it directly to ptr
ptr2=msg;

*ptr1='M'; //update the value of first element
 
ptr1++; // move to the next adress in the array

*ptr1='K'; //update the value of secound element

//print the array using mgs[]

for (size_t i = 0; i < 6; i++)
{
 std::cout<<msg[i];
}

std::cout<<std::endl;


//print the array using *ptr derefrence operator
for (size_t i = 0; i < 6; i++)
{
 std::cout<<*ptr2;
 ptr2++;
}
std::cout<<std::endl;



//print the array using *msg derefrence operator
for (size_t i = 0; i < 6; i++)
{
 std::cout<<*(msg+i);
}
std::cout<<std::endl;

return 0;
}

