// 02 - Classes & Objects

#include <iostream>
#include <string>
using namespace std;


// 1. A simple class with attributes only

class Car {
    public:
        string brand;
        string model;
        int year;
};

void newcar() {
    // Create first object
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create second object - completely independent from the first
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
}

// ---------------------------------------------------
// 2. Practice Challenge: Book class


class Book {
    public:
        string title;
        string author;
        int year;
};

void newbook() {
    Book book1;
    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;

    Book book2;
    book2.title = "The Giving Tree ghuuuu";
    book2.author = "Shel Silverstein huuuuu";
    book2.year = 2002;

    cout << book1.title << ", " << book1.author << ", " << book1.year << endl;
    cout << book2.title << ", " << book2.author << ", " << book2.year << endl;
}

// MAIN


int main() {
    cout << "--- Car example ---" << endl;
    newcar();

    cout << "\n--- Book challenge ---" << endl;
    newbook();
}

