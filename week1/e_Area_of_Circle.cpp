#include <iostream>
#include<iomanip>
#include "math.h"
using namespace std;

int main()
{
double pi= 3.141592653;
double radious;

cin >>radious;
double area= pi * pow(radious,2);

cout << fixed << setprecision(9);
cout << area ;

return 0;
}