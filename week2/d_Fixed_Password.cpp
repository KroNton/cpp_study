#include <iostream>

using namespace std;

int main()
{
int password =1999,user_input ;
bool pass_true =false;



while (!pass_true)
{
cin >> user_input;
if (user_input!=password)
{
    cout<<"Wrong"<<endl;
    
}
if(user_input==password){
 cout<<"Correct"<<endl;
 pass_true=true;
}


}







return 0;
}