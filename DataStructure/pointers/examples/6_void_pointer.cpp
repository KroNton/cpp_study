#include <iostream>



void print(void* ptr,char type){
if (type=='i')
std::cout<< *((int*) ptr) <<std::endl;
else if (type=='c')
std::cout<< *((char*) ptr) <<std::endl;

else if (type=='d')
std::cout<< *((double*) ptr) <<std::endl;
}

int main()
{

double x=5.08;
int y=12;
print(&x,'d');
print(&y,'i');

return 0;
}

