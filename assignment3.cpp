// Q1. Write a menu driven program to calculate Volume of the box(length * width * 
// height). Provide parameterless, parameterized(with 3 parameters) and single 
// paramaterized constructor. 
// Create the local objects in respective case and call the function to caluclate 
// area. 
// Menu options ->  
// 1. Calculate Volume with default values 
// 2. Calculate Volume with length,breadth and height with same value 
// 3. Calculate Volume with different length,breadth and height values. 

#include<iostream>
using namespace std;

class Volume {
private:
    int l;
    int w;
    int h;
public:
    Volume() {
        this->l = 2;
        this->w = 2;
        this->h = 2;
    }

    Volume(int l, int h, int w) {
        this->l = l;
        this->h = h;
        this->w = w;
    }

    Volume(int size) {
        this->l = size;
        this->h = size;
        this->w = size;
    }

    void accept() {
        cout << "Enter length, height and width" << endl;
        cin >> l;
        cin >> h;
        cin >> w;
    }

    void display() {
        int tv = l * h * w;
        cout << tv << endl;
    }
};

int menu() {
    int choice;
    cout << "1. Calculate Volume with default values " << endl;
    cout << "2. Calculate Volume with length,breadth and height with same value " << endl;
    cout << "3. Calculate Volume with different length,breadth and height values." << endl;
    cout << "Press 0 to exit....." << endl;
    cout << "Enter choice Please :- ";
    cin >> choice;
    return choice;
}

int main() {
    int size, l, h, w;
    int choice;
    
    while ((choice = menu()) != 0) {
        switch (choice) {
            case 1: {
                Volume v;
                cout << "Total Volume with default values : - ";
                v.display();
                break;
            }
            case 2: {
                cout << "Enter size: ";
                cin >> size;
                Volume v(size);
                cout << "Total Volume with single Same values :- ";
                v.display();
                break;
            }
            case 3: {
                cout << "Enter length, height and width: ";
                cin >> l >> h >> w;
                Volume v(l, h, w);
                cout << "Total Volume with different values :- ";
                v.display();
                break;
            }
            default:
                cout << "Wrong choice......" << endl;
                break;
        }
    }
    return 0;
}


// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying. 
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth. 
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected. 
// A constructor initializes all data members to 0. A member function called payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, called nopayCar() 
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total. 
 
 
// Q3. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside 
// namespace. Create the object of student and perform accept and display student.