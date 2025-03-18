// Assignment 5 
// Q1. Create a class Date with data memebrs day,month and year. 
// Cretae a class Person with data members name,address and birthdate. 
// The birthdate should be of 
// type Date. 
// Create a class Student with data members id, marks, course and joining date, 
// end date. The joining 
// date and end date should be of type date. 
// Implement above classes. Test all functionalities in main(). 
// (Note - Only Perform the Association in the above case. No need of Inheritance)

#include<iostream>
using namespace std;
class date
{
private:
    int day;
    int month;
    int year;
public:
    date(){
        
    }
    date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate(){
        cout<<"Accepting date...."<<endl;
        cin>>day;
        cin>>month;
        cin>>year;
    }
    void displayDate(){
        cout<<"Accepting date...."<<endl;
        cout<<day<<endl;
        cout<<month<<endl;
        cout<<year<<endl;
    }
};
class student
{
private:
int id;
int marks;
string course;
date doj;
date doe;
    /* data */
public:
    student(){

    }
    student(int id, int marks, string course, int day, int month, int year): doj(day, month, year), doe(day, month, year){
        this->id = id;
        this->marks = marks;
        this->course = course;
    }
    void accept(){
        cout<<"Accepting data..."<<endl;
        cin>>id;
        cin>>marks;
        cin>>course;
        doj.acceptDate();
        doj.acceptDate();
    }
    void display(){
        cout<<"Displaying data..."<<endl;
        cout<<id<<endl;
        cout<<marks<<endl;
        cout<<course<<endl;
        doj.displayDate();
        doj.displayDate();
    }

};
int main(){
    student s;
    s.accept();
    s.display();
    return 0;
}


    

    
