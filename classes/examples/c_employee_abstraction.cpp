#include <iostream>


class AbstractEmployee{

    virtual void AskForPromotion()=0; 

};

class Employee:AbstractEmployee { 

private :
std::string Name;
std::string Position;
int Age;

public:

Employee(std::string name ,std::string position, int age){
Name=name;
Position=position;
Age=age;
}

void user_set_employee_info(){
    
std::cout<<"enter employee name"<<std::endl;
std::cin>>Name;
std::cout<<"enter employee role"<<std::endl;
std::cin>>Position;
std::cout<<"enter employee age"<<std::endl;
std::cin>>Age;
}
void get_employee_info(){
std::cout<<"employee name is: "<< Name <<std::endl; 
std::cout<<"employee role is: "<< Position <<std::endl;    
std::cout<<"employee age is: "<< Age <<std::endl;  
}

void AskForPromotion(){
 if(Age>30)
 std::cout<<Name<<" you got the promotion ;)"<<std::endl;

 else 
 std::cout<<Name<<" no promotion for you"<<std::endl;
 


}
};

int main(){

    Employee employee1=Employee("john","engineer",23);
    Employee employee2=Employee("sara","engineer",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}