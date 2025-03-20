// Q1. Provide menu driven code for the functionalities: 
// 1. Add Manager 
// 2. Add Salesman 
// 3. Add Salesmanager 
// 4. Display the count of all employees with respect to designation 
// 5. Display All Managers 
// 6. Display All Salesman 
// 7. Display All SalesManagers 

 

#include<typeindex>
#include <iostream> 
using namespace std; 


class Employee  {
    int id; 
    double salary; 
public : 
    Employee() {
        
    }
    Employee(int id, double salary) {
        this->id = id; 
        this->salary = salary; 
    }
    void setId(int id) {
        this->id = id; 
    }
    int getId() {
        return id; 
    }
    void setSalary(double salary) {
        this->salary = salary; 
    }
    double getSalary() {
        return salary; 
    }
    virtual void accept() {
        cout << "Enter ID : "; 
        cin >> id; 
        cout << "Enter Salary : "; 
        cin >> salary; 
    }
    virtual void display() {
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl; 
    }
}; 


class Manager : virtual public Employee {
    double bonus; 
public : 
    Manager() {

    }
    Manager(int id, double salary, double bonus) : Employee(id, salary) {
        this->bonus = bonus; 
    }    
    void setBonus(double bonus) {
        this->bonus = bonus; 
    }
    double getBonus() {
        return bonus; 
    }
    void accept() {
        Employee::accept(); 
        cout << "Enter bonus : "; 
        cin >> bonus; 
    }
    void display() {
        Employee::display(); 
        cout << "Bonus : " << bonus << endl;
    }

protected : 
    void acceptManager() {
        cout << "Enter bonus : "; 
        cin >> bonus; 
    }
    void displayManager() {
        cout << "Bonus : " << bonus << endl; 
    }
};

class Salesman : virtual public Employee {
    double commission; 

public : 
    Salesman() {

    }
    Salesman(int id, double salary, double commission) : Employee(id, salary) {
        this->commission = commission; 
    }
    void setCommission(double commission) {
        this->commission = commission; 
    }
    double getCommission() {
        return commission; 
    }
    void accept() {
        Employee::accept(); 
        acceptSalesman(); 
    }
    void display() {
        Employee::display(); 
        displaySalesman();
    }

protected : 
    void acceptSalesman() {
        cout << "Enter commission : "; 
        cin >> commission; 
    }
    void displaySalesman() {
        cout << "Commission : " << commission << endl; 
    }
};

class SalesManager : public Manager, public Salesman { 
public : 
    SalesManager() {

    }
    SalesManager(int id, double salary, double bonus, double commission)  {
        Employee::setId(id);
        Employee::setSalary(salary); 
        Manager::setBonus(bonus);
        Salesman::setCommission(commission); 
    }
    void accept() {
        Employee::accept(); 
        Manager::acceptManager(); 
        Salesman::acceptSalesman();
    }
    void display() {
        Employee::display(); 
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};

void case1() {
    Employee e;
    e.accept();
    e.display();  
}

void case2() {
    Manager m;
    m.accept();
    m.display();
}

void case3() {
    Salesman s; 
    s.accept();
    s.display();
}

void case4() {
    SalesManager sm; 
    sm.accept();
    sm.display();
}

void case5() {
    Employee *eptr = new Employee();
    eptr -> accept(); 
    eptr -> display();
    
    delete eptr;
    eptr = NULL; 
}

void case6() {
    Employee *eptr = new Manager();
    eptr -> accept(); 
    eptr -> display();
    
    delete eptr;
    eptr = NULL; 
}

void case7() {
    Employee *eptr = new Salesman();
    eptr -> accept();
    eptr -> display(); 
    
    delete eptr; 
    eptr = NULL;
}

void case8() {
    Employee *eptr = new SalesManager();
    eptr -> accept(); 
    eptr -> display();

    delete eptr;
    eptr = NULL;
}

int menu(){
    int choice;
    cout<<"*************************************************************"<<endl;
    cout<<"1. Add Manager "<<endl;
    cout<<"2. Add Salesman "<<endl;
    cout<<"3. Add Salesmanager"<<endl;
    cout<<"4. Display All Managers" <<endl;
    cout<<"5. Display All Salesman "<<endl;
    cout<<"6. Display All SalesManagers "<<endl;
    cout<<"7. Display the count of all employees which is salesman"<<endl;
    cout<<"8. Display the count of all employees which is manager"<<endl;
    cout<<"9. Display the count of all employees which is salesManager"<<endl;
    cout<<"Enter Choice"<<endl;
    cin>>choice;
    cout<<"*************************************************************"<<endl;
    return choice;
}

int main() {
    int choice;
    int countManager = 0;
    int countSalesman = 0;
    int countSalesanager = 0;
    int index = 0;
    Employee *EmployeeList[5];
    while ((choice = menu())!= 0){
        switch (choice)
        {
        case 1:
        if (index < 5)
        {
            EmployeeList[index] = new Manager();
            EmployeeList[index]->accept();
            countManager++;
            index++;
        }
        else{
            cout<<"Array is full";
        }
        break;

        case 2:
        if (index < 5)
        {
            EmployeeList[index] = new Salesman();
            EmployeeList[index]->accept();
            countSalesman++;
            index++;
        }
        else{
            cout<<"Array is full"<<endl;
        }
        break;

        case 3:
        if (index < 5)
        {
            EmployeeList[index] = new SalesManager();
            EmployeeList[index]->accept();
            countSalesanager++;
            index++;
        }
        else{
            cout<<"Array is full"<<endl;
        }
        break;

        case 4:
        for (int i = 0; i < countSalesman; i++)
        {
            if (typeid(*EmployeeList[i])==typeid(Salesman));
            {
                EmployeeList[i]->display();
            }
        }
        break;

        case 5:
        for (int i = 0; i < index; i++)
        {
            if (typeid(*EmployeeList[i])==typeid(Manager));
            {
                EmployeeList[i]->display();
            }
        }
        break;

        case 6:
        for (int i = 0; i < index; i++)
        {
            if (typeid(*EmployeeList[i])==typeid(SalesManager));
            {
                EmployeeList[i]->display();
            }
        }
        break;

        case 7:
        cout<<"Total Salesmans is :- "<<countSalesman;
        break;

        case 8:
        cout<<"Total Salesmans is :- "<<countManager;
        break;

        case 9:
        cout<<"Total Salesmans is :- "<<countSalesanager;
        break;
        
        default:
        cout<<"Wrong choice";
        break;
        }
        
    }
    for(int i=0; i<index; i++) {
        delete EmployeeList[i]; 
        EmployeeList[i] = NULL; 
    }
    return 0; 
}
