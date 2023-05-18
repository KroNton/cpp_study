#include <iostream>
#include "math.h"
#include <cstdlib>
using namespace std;


int num;




int main()
{
int arr[num];
cin >> num ;

for ( int i = 0; i < num; i++)
{

cin>>arr[i];
}

int sum=0;
for (int j = 0; j < num; j++) {
sum = sum +arr[j];

}

cout<<abs(sum)<<endl;
return 0;
}