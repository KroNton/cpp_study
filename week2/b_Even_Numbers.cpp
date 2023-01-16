#include <iostream>

using namespace std;

int main()
{
int num;
cin >> num ;
for (size_t i = 1; i <= num; i++)
{
if (i%2==0 && i>1)
{
    cout <<i<<endl;
}
else if(num==1){
cout <<-1<<endl;
}
}





return 0;
}