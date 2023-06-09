#include <iostream>

using namespace std;

int main()
{

int num ,res=1,value;

cin >> num ;


for (int j=0; j<num ;j++){

cin>>value;

for (size_t i = 1; i <= value; i++)
{

res=res*i;

}
cout<<res<<endl;
res=1;
}





return 0;
}