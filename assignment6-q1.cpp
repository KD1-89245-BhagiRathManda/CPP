// Q1. A shop sells book or tapes. The Book class holds id, title, author, 
// and price; whereas Tape class holds id, title, artist, and price. 
// There is 5% discount on tapes, while 10% discount on books. 
// Assuming that each user purchase 3 Products (either book or tape), 
// calculate final bill. The program 
// should be menu driven and should not cause memory leakage. 
// Hint - Create class Product and inherit into Book and Tape. 
// Also create array like Product* arr[3] 
#include<iostream>
#include<typeinfo>
using namespace std;

class Product{
private:
    int id;
    string title;
    int price;

public:
    Product(){
        
    }
    Product(int id, string title, int price){
        this->id = id;
        this->title = title;
        this->price = price;
    }
    virtual void accept(){
        cout<<"Entering all Product details... "<<endl;
        cout<<"id "<<endl;
        cin>>id;
        cout<<"Title "<<endl;
        cin>>title;
        cout<<"Enter price " <<endl;
        cin>>price;
    }
    void displayAllProduct(){
        cout<<"All Product Details :- "<<endl;
        cout<< "id "<<id <<endl;
        cout<< "title "<<title <<endl;
        cout<<"price "<< price <<endl;
    }
    double getPrice(){
        return price;
    }
};

class book : public Product{
private:
    string author;

public:
    
    book(){

    }
    book(string author, int id, string title, double price) : Product(id, title, price){
        this->author = author;
    }
    void accept(){
        Product::accept();
        cout<<"Entet author Name"<<endl;
        cin>>author;
    }
    void displayAllProduct(){
        Product::displayAllProduct();
        cout<<"author "<< author <<endl;
    }
};
class tape : public Product{
private:
    string artist;

    public:

    tape(){

    }
    tape(string author, int id, string title, double price) : Product(id, title, price){
        this->artist = artist;
    }
    void accept(){
        Product::accept();
        cout<<"Entet artist Name"<<endl;
        cin>>artist;
    }
    void displayAllProduct(){
        Product::displayAllProduct();
        cout<<"Artist "<< artist <<endl;
    }
};
int menu(){
    int choice;
    cout<<"********************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Buy a book"<<endl;
    cout<<"2.Buy a tape"<<endl;
    cout<<"3.To see Total bill"<<endl;
    cout<<"4.To Display only book"<<endl;
    cout<<"5.To Display only tape"<<endl;
    cout<<"6.To Display All"<<endl;
    cout<<"Enter Your choice"<<endl;
    cout<<"********************"<<endl;
    cin>>choice;
    return choice;
}
double totalBill(Product *arr[3]){
    double tBill = 0;
    for (int i = 0; i < 3; i++)
    {
       if (typeid(*arr[i]) == typeid(book))
       {
        /* code */
            double discount;
            discount = (arr[i]->getPrice()) - (arr[i]->getPrice()*.10);
            tBill += discount;
       }
       else{
        double discount;
        discount = arr[i]->getPrice()-arr[i]->getPrice()*.05;
        tBill += discount;
       }
    }
    return tBill;
    

}
void displayBook(Product *arr[3]){
    for (int i = 0; i < 3; i++)
    {
        if (typeid(*arr[i]) == typeid(book))
        {
            arr[i]->displayAllProduct();
        }
        else{
            cout<<"NO Product found, Add...."<<endl;
        }
    }
    
}
void displaytape(Product *arr[3]){
    for (int i = 0; i < 3; i++)
    {
        if (typeid(*arr[i]) == typeid(tape))
        {
            arr[i]->displayAllProduct();
        }
    }
    
}
void displayAll(Product *arr[3]){
    double tBill;
    for (int i = 0; i < 3; i++)
    {
        if (typeid(*arr[i]) == typeid(book))
        {
            arr[i]->displayAllProduct();
            double discount;
            discount = (arr[i]->getPrice()) - (arr[i]->getPrice()*.10);
            tBill += discount;
        }
        if (typeid(*arr[i]) == typeid(tape))
        {
            arr[i]->displayAllProduct();
            double discount;
            discount = (arr[i]->getPrice()) - (arr[i]->getPrice()*.10);
            tBill += discount;
        }
        
    }
    cout<<tBill;
    
}
int main(){
    Product* arr[3]; 
    

    int choice;
    int i = 0;

    while ((choice = menu())!=0)
    {
        /* code */
        switch (choice)
        {
        case 1:
        if (i<3)
        {
            arr[i]= new book();
            arr[i]->accept();
            i++;
        }
        else{
            cout<<totalBill(arr);
        }
            break;
        case 2:
        if (i<3)
        {
            arr[i]= new tape();
            arr[i]->accept();
            i++;
        }
        else{
            cout<<totalBill(arr);
        }
            break;
        case 3: 
        cout<<totalBill(arr);
            break;
        case 4:
            displayBook(arr);
            break;
        case 5:
            displaytape(arr);
            break;
        case 6:
        displayAll(arr);
            break;
        default:
            cout<<"Wrong Choice Enter Again....."<<endl;
            break;
        }
    }
    

}