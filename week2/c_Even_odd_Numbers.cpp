#include <iostream>

using namespace std;

int main()
{
int num ,value ,even=0, odd=0,pos=0,neg=0;

cin >> num ;

for (size_t i = 1; i <= num; i++)
{
cin >> value ;
if (value%2==0)
{
    even+=1;
    
}
if(value<0){
 neg+=1;
}
if (value%2!=0)
{
    odd+=1;
    
}
if (value>0)
{
    pos+=1;
    
}

}
cout <<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl 
<<"Negative: "<<neg<<endl  ;







return 0;
}