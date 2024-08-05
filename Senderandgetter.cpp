#include<iostream>
using   namespace   std;
class Employee
{
private:
    int Salary;
public:
    void   setSalary(int   s){
        Salary=s;
    }
    int    getSalary(){
    return  Salary;
    }

};

int main(int argc, char const *argv[])
{
    Employee    myObj;
    myObj.setSalary(5000);
    cout<<"The  salary  is: "<<myObj.getSalary()<<endl;
    return 0;
}

