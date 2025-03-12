// Q3. Create a namespace NStudent. Create the Student class(created as per 
// assignment-1 Q3) inside namespace. 
//Create the object of student and perform accept and display student.



#include<iostream>
using namespace std;
namespace NStudent{
class Student{
    int rollNo;
    string name;
    int marks;

    public :
    void printStudentOnConsole(){
        cout<< "Student details: - "<< rollNo <<" Name " << name<< ", Marks "<< marks << endl;

    }
    void acceptStudentFromConsole(){
        cout<<"Enter student Details" <<endl;
        cin>> rollNo;
        cin>> name;
        cin>> marks;
    }

};

int menu(){
    int choice;
    cout<< "press 1 to enter student details :- " << endl;
    cout<< "press 2 to display student details :- " << endl;
    cout<< "press 0 to exit :- " << endl;
    cin >> choice;
    return choice;
};
}

int main(){
    using namespace NStudent;
    Student s1;
    int choice;
    while ((choice = menu()) != 0){
        switch (choice)
        {
        case 1: 
        s1.acceptStudentFromConsole();
            break;
        case 2: 
        s1.printStudentOnConsole();
            break;
        
        default: 
            cout << "Enter Wrong choice..... ";
            break;
        }
    }
}