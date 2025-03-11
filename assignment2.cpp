 // Q1. Write a menu driven program for Date in a CPP language using structure and 
// also using class. Date is having data members day, month, year. 
// Implement the following functions. 
// void initDate(); 
// void printDateOnConsole(); 
// void acceptDateFromConsole(); 
// bool isLeapYear(); 

#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){
        day = 15;
        month = 8;
        year = 1947;
    }
    void printDateOnConsole(){
        cout<< "today's day is :- "<< day <<"/"<< month <<"/"<< year <<endl;
    }
    bool isLeapYear() { 
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    void acceptDateFromConsole(){
        cout<< "enter day :- ";
        cin>> day;
        cout<< "enter month :- ";
        cin>> month;
        cout<< "enter year :- ";
        cin>> year;
    } 

};


int menu(){
    int choice;
    cout<< "press 1 to enter day:- " << endl;
    cout<< "press 2 to get choice again:- " << endl;
    cout<< "press 0 to exit :- " << endl;
    cout<< "enter the choice:- ";
    cin>> choice ;
    return choice;
}

int main(){
    
    Date d1;
    d1.initDate();
    int choice;

    cout << "Program started..." << endl;
    while((choice = menu()) != 0){
        switch(choice){
            case 1 : 
            d1.acceptDateFromConsole();
            cout<<"Date accepted" <<endl;
            break;
            case 2 : 
            d1.printDateOnConsole();
            cout<<"Date plrinted" <<endl;
            break;
            default : 
            cout<<"Wrong choice!....." <<endl;
            break;
        }
        cout.flush();
    }
    return 0;
}
 