#include <iostream>
#include "math.h"
using namespace std;

int main()
{

long long a_value ,b_value,c_value,d_value;
cin >>a_value>>b_value>>c_value>>d_value;
long long x=(a_value*b_value)-(c_value*d_value);

cout <<"Difference = "<<x<<endl;

return 0;
}