// #include <iostream>
// int main(){
//     printf("Hello World");
// }
// #include <iostream>
// struct time{
//     int hr;
//     int min;
// };
// void acceptTime(struct time *ptr){
//     printf("Enter hr:-");
//     scanf("%d" &ptr->hr);
//     printf("Enter min:-");
//     scanf("%d" &ptr->min);
// }
// void displayTime(){
//     plrintf("%d, %d", &ptr->hr, &ptr->min);
// }
// int main(){
//     struct time t1;
//     acceptTime(&t1);
//     displayTime(&t1);
//     displayTime;
//     return 0;

// }
// #include <stdio.h>

// struct Time
// {
//     int hr;
//     int min;
// };

// void acceptTime(struct Time *ptr)
// {
//     printf("Enter the hrs - ");
//     scanf("%d", &ptr->hr);
//     printf("Enter the mins - ");
//     scanf("%d", &ptr->min);
// }

// void displayTime(struct Time *ptr)
// {
//     printf("Time = %d : %d \n", ptr->hr, ptr->min);
// }

// int main()
// {
//     // int in_hr;
//     // int in_min;
//     // int out_min;
//     // int out_hr;

//     // struct Time in_punch;
//     // struct Time out_punch;
//     struct Time t1;
//     acceptTime(&t1);  // pass by address
//     displayTime(&t1); // pass by address
//     return 0;
// }

// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members 
// day, month, year. Implement the following functions. 
// void printDateOnConsole(struct Date* ptrDate); 
// void acceptDateFromConsole(struct Date* ptrDate); 
#include <iostream>
struct Date{
    int date;
    int month;
    int year;
};
void printDateOnConsole(struct Date *ptr){
    printf("%d: %d: %d", ptr->date, ptr->month, ptr->year);
}
void acceptDateFromConsole(struct Date *ptr){
    printf("Enter date :- ");
    scanf("%d", &ptr->date);
    printf("Enter month :- ");
    scanf("%d", &ptr->month);
    printf("Enter year :- ");
    scanf("%d", &ptr->year);
}
int main(){
    struct Date d1;
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
    return 0;
}
