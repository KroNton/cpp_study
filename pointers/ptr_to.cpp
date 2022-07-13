#include <iostream>
using namespace std;
//use the pointers to assign a value to a variable 



int main()
{
    /* code */
int var1,var2;




cout<< &var1 <<endl
    << &var2 <<endl;

int* ptr; // pointers to integers
//can be defined also as " int *ptr " both are the same  

ptr = &var1; //set pointer to adress var 1 
*ptr = 30; //var1 value now is 30 
var2 =*ptr; //var2 = var1 = 30

cout<<var1<< endl
    <<var2<< endl;


    return 0;
}
