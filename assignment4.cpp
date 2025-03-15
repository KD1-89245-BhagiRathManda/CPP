// Q1. Write a class for Time and provide the functionality 
// Time() 
// Time(int h,int m,int s) 
// getHour() 
// getMinute() 
// getSeconds() 
// printTime() 
// setHour() 
// setMinute() 
// setSeconds() 
// In main create array of objects of Time. 
// Allocate the memory for the array and the object dynamically.
#include<iostream>
using namespace std;
class time{
private :
    int h;
    int m;
    int s;

public :
    time(){
        h = 2;
        m = 20;
        s = 59;
    }
    time(int h, int m, int s){
        this->h = h;
        this->m = m;
        this->s = s;
    }
    int getHour(){
        return h;
    }
    int getMinute(){
        return m;
    }
    int getSeconds(){
        return s;
    }
    void printTime(){
        cout<<"\t***********************************"<<endl;
        cout<<"\t\tNow time is "<<h<<" : "<<m<<" : "<<s<<endl;
        cout<<"\t***********************************"<<endl;
    }
    void setHour(){
        cout<<"Enter hours :- ";
        cin>>h;
    }
    void setMinute(){
        cout<<"Enter minutes :- ";
        cin>>m;
    }
    void setSecond(){
        cout<<"Enter Seconds :- ";
        cin>>s;
    }
    void accept(){
        cout<<"Enter time :- ";
        cin>> h;
    }
};

int main(){
    time *arr = new time[3];
    time();
    //acc
    cout<<"Default Time"<<endl;
    for (int i = 0; i < 1; i++)
    {
        arr[i].printTime();
    }
    cout<<"Now Entering Time:- "<<endl;
    for (int i = 0; i < 1; i++)
    {
        int h,m,s;
        cin>> h>> m>> s;
        arr[i] = time(h,m,s);
    }
    
    for (int i = 0; i < 1; i++)
    {
        arr[i].printTime();
    }
    cout<<"Now Update Time:- "<<endl;
    arr[0].setHour();
    arr[1].setMinute();
    arr[2].setSecond();

    cout<<"Updated Time"<<endl;
    for (int i = 0; i < 1; i++)
    {
        arr[i].printTime();
    }    

    return 0;
}