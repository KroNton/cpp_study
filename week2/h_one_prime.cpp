#include <iostream>

using namespace std;

int main()
{

int count=0 ,res=1,value;



cin>>value;


for (int i = 1; i <= value; i++)
{

res=value%i;
if (res==0){
count++ ;

}

}

if (count==2){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



return 0;
}