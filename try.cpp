// First Program that mam writes on board
#include<iostream>
using namespace std;

int main (){
    int num1 , num2, result;
    try
    {
        cout<<"hellow";
        cout<<"Enter two numbers";
        cin>>num1>>num2;
        result = num1 / num2;
        cout<<"Result is: "<<result;
    }
    catch(int no)
    {
        cout<<"you can not divide by zero";
    
    return 0;
}
}

//Second program of Exception handling that mam write on board
#include<iostream>
using namespace std;

int main (){
    try
    {
        cout<<"Enter two numbers";
        int num1 , num2, result;
        cin>>num1>>num2;
        if(num2 != 0){

            result = num1 / num2;
            cout<<"Result is: "<<result;
        }
        else{
            throw(num2);
        }
    }
    catch(int no)
    {
        cout<<"you can not divide by zero";
    
    return 0;
}
}

//Third Program that I wrote
#include <iostream>
using namespace std;
int main() {
    string city;
    int age;
    cout << "PAKISTANI CITY VALIDATOR\n";
    cout << "------------------------\n";
    try {
        cout << "Enter your age: ";
        cin >> age;
        
        if (age < 18) {
            throw "Age must be 18 or above!";  // Throw exception
        }
        cout << "Enter your city (Karachi/Lahore/Islamabad): ";
        cin >> city;
        if (city != "Karachi" && city != "Lahore" && city != "Islamabad") {
            throw "City must be Karachi, Lahore or Islamabad!";  // Throw exception
        }
        cout << "\nWelcome to " << city << "! You are " << age << " years old.\n";
    }
    catch (const char* error) {  // Catch exceptions
        cout << "ERROR: " << error << endl;
    }
    cout << "\nProgram ended successfully.\n";
    return 0;
}