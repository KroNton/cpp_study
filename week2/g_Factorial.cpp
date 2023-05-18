#include <iostream>

using namespace std;

int main()
{

int num ,res=1;

cin >> num ;

for (size_t i = 1; i <= num; i++)
{

res=num*i;

}

cout<<res<<endl;

return 0;
}