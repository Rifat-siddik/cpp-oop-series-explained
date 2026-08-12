// Procedural vs OOP 

#include <iostream>
#include <string>
using namespace std;

//Procedural
void rifat(string name, int roll) {
    cout << "Procedural use Name: " << name << ", Roll: " << roll << endl;
}


// ২. OOP
class Student {
public:
    string name;
    int roll;

    void printInfo() {
        cout << "OOP use Name: " << name << ", Roll: " << roll << endl;
    }
};


int main() {
    
    // Procedural use
    string studentName = "Rafi";
    int studentRoll = 101;
    rifat(studentName, studentRoll); 

    // OOP use
    Student s1;
    s1.name = "Rafi";
    s1.roll = 101;
    s1.printInfo(); 

   
}
