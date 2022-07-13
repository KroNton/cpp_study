#include <iostream>
using namespace std;
//pointers (addresses of variables)



int main()
{
    /* code */
int var1=11;
int var2=22;


cout<< &var1 <<endl
    << &var2 <<endl;

int* ptr1 , * ptr2 ; // pointers to integers
//can be defined also as " int *ptr " both are the same  

ptr1 = &var1;
ptr2 = &var2;

cout<<ptr1<< endl
    <<ptr2<< endl
    
    <<*ptr1<< endl
    <<*ptr2<< endl;


    return 0;
}
