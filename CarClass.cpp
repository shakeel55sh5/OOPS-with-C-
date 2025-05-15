#include<iostream>
using namespace std;
class Car{
public:
string name;
int price;
int seats;
int power;
string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.power<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main (){
    Car c1;
    c1.name = "Toytota";
    c1.price = 250000;
    c1.power = 200;
    c1.seats = 5;
    c1.type = "China";
    Car c2;
    c2.name = "Suzuki";
    c2.price = 150000;
    c2.power = 2200;
    c2.seats = 14;
    c2.type = "Japan";
    Car c3;
    c3.name = "Fortunier";
    c3.price = 2350000;
    c3.power = 20320;
    c3.seats = 7;
    c3.type = "SUV";

// this is bad method for output of classes like in above we print output
    // cout<<c1.name<<" "<<c1.power<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.power<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    // cout<<c1.name<<" "<<c1.power<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;


    print(c1);
    print(c2);
    print(c3);
    return 0;
}
// Explanation
/* first simple make an class in which contain our 3 or 4 objecs and contain different attributes of that objects 
for an output one method is that we write  for defferent defferent attributes own output command which is time wasting method and bakwas method . so simply we can call functin who doing our same work

for this purpose we first make a void function in above main funciton which name anything like in above case i write print name then inside paratamete of void funciton mean () inside this wrote our class name and new variable name of that function mean like in abvoe case we give c
in above case we give class nmae and new vribel name of funciton class then start funciton body and inside {} write our output command like in down case just one time and store it in c variabel and name of function is print 
so name of function is print so for next time we just call that function with the object of that class mean print(c1) or anyother object like print(c2) so simply our compiler give us output of c1 and c2 and same as it is for others objects

*/