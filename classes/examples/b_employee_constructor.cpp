#include <iostream>
// #include <string>


class Employee {

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

};

int main(){

Employee employee1=Employee("john","engineer",23);
employee1.get_employee_info();

    return 0;
}