
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
