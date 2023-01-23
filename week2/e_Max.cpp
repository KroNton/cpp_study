#include <iostream>

using namespace std;

int main()
{
int num ,value ,max=0;

cin >> num ;

for (size_t i = 1; i <= num; i++)
{
cin >> value ;
if (value>max)
{
    max=value;
    
}


}
cout <<max<<endl  ;







return 0;
}