#include <iostream>
using std::string;
using std::endl;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee{
    string Name;
    int WorkHours;
    int Salary;

public:
    //Setters and Getters
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setWork(int work_hours){
        WorkHours = work_hours;
    }
    int getWork(){
        return WorkHours;
    }
    void setSalary(int salary){
        Salary = salary;
    }
    int getSalary(){
        return Salary;
    }

    //Constructor
    Employee(string name, int work_hours, int salary){
        Name = name;
        WorkHours = work_hours;
        Salary = salary;
    }

    //Method
    void IntroduceYourSelf(){
        std::cout << Name << endl;
        std::cout << WorkHours << endl;
        std::cout << Salary << endl;
    }

    //Abstraction:
    void AskForPromotion(){
        if(WorkHours >= 300){
            Salary+=200;
        }else{
            std::cout << "You did not get the promotion ;-;" << endl;
        }
    }
};


int main(){
    Employee employee1 = Employee("Lucca", 300, 10000);
    Employee employee2 = Employee("Joao", 200, 10000);

    std::cout << employee1.getSalary() << endl;
    std::cout << employee2.getSalary() << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    std::cout << employee1.getSalary() << endl;
    std::cout << employee2.getSalary() << endl;

    return 0;
}