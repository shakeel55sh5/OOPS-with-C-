#include<iostream>
using namespace std;

class Car{
        public:
        string colour;
        string type;
        int price;
    };
void print(Car c){
    cout<<c.colour<<" "<<c.type<<" "<<c.price<<" "<<endl;
}
Car(string = n,int p, string = t){
    name = n;
    price = p;
    type = t;

}
int main (){
    
    Car c1;
    // c1.colour = "black";
    // c1.price = 150000;
    // c1.type = "Audi";
    // // print(c1);
    
    // // change(c1);
    // // cout<<c1<<endl;
    //  Car c2;
    // c2.colour = "shite";
    // c2.price = 230000;
    // c2.type = "Nissan";

    // print(c1);
    // print(c2);

    return 0;
}