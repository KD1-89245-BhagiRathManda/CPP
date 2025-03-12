// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to 
// pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying. 
// The tollbooth keeps track of the number of cars that have gone by and of the 
// total amount of money 
// collected. Model this tollbooth with a class called tollbooth. 
// The two data items are a type unsigned int to hold the total number of cars, 
// and a type double to 
// hold the total amount of money collected. 
// A constructor initializes all data members to 0. A member function called 
// payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, 
// called nopayCar() 
// increments the car total but adds nothing to the cash total. Finally, 
// a member function called 
// printOnConsole() displays the two totals and number of paying as well as non 
// paying cars total. 

#include<iostream>
using namespace std;
class toolboth{
private :
    double money = 0;
    int tc =0;
    int car =0 ;
    double pc = 0;

public :
    void payingCar(){
        car++;
        pc++;
    }
    void nonPayingCar(){
        car++;
    }
    void printOnConsole(){
        tc = car;
        money = pc*0.50;
        cout<< "\n \n Total car passed :- "<< tc << " \n Total money collected : - "<< money <<endl;
    }
};
int menu() {
    int choice;
    cout << "\n Car came Which one was that please select" << endl;
    cout << "1. Paying Car passed :- " << endl;
    cout << "2. Non Paying car passed:- " << endl;
    cout << "3. Display car passed and total money collecte :- " << endl;
    cout << "Press 0 to exit....." << endl;
    cout << "Enter choice Please :- ";
    cin >> choice;
    return choice;
}
int main(){
    int Tpc;
    int npc;
    int choice;
    toolboth t;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        t.payingCar();
            break;
        case 2:
        t.nonPayingCar();
        break;
        case 3:
        t.printOnConsole();
        break;
        default:
        cout<< "Wrong choice!!.....";
        break;
        }
    }
    
    return 0;
}
