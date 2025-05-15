#include<iostream>
using namespace std;
class Student{//this is our new data type
public:
string Name;
int Rno;
float Marks;
int sno;
int marks[5];
};
int main (){
    Student x1;
    x1.Name = "shakeel ahmad";
    x1.Marks = 872;
    // x1.Rno = 242612;
    cin>>x1.Rno ;
    // x1.marks = 34,21,4,56,6;
    
    Student x2;
    x2.Name = "faisal ahmad";
    x2.Marks = 972;
    x2.Rno = 24612;
    // x2.marks = 34,13,53,1;

    // cout<<x1;--> this will give error 
    // cout<<x1.Name<<endl; -- it give us output
    // cout<<x2.Name<<endl;--> it give us also output
    cout<<x1.Name<<"  "<<x1.Rno<<"  "<<x1.Marks<<endl;
    cout<<x2.Name<<"  "<<x2.Rno<<"  "<<x2.Marks<<endl;
    return 0;
}

// Explanation
// for making our own data type we write first class in above main function then write with data type name in above case we write class and data type name is Student
// we can write data type name with case sensitive but it is convention that we write our data type name with capital letter
// in above case we make our first class in which contain three numbers or data of student like names marks and roll number but before this we write public: it necessary 
// then come in main functin and declare the data type mean object and give name of variabel then after this initilization the values of declare variable like in above case 
// we initiliaze first write variabel name of our data type then . then write our name of data numbers mean conditon or according to our demand which is priesent in our data type
// Remeber one thing when we write our data type outside of main funciton then in last mean close data tpe body mean after } write termination symol otherwise give error
// we can add more property in above our data type mean like add salaray professional fathername etc many 
// we can make array in our data type make 2 int no error will give us 

// for another student simple write same code or copy above data of student x1 and paste under and change the varaible name from x1 to x2 so we make for two students same process occur with more than two students
// for output if we write direct cout and data name like in above x1 jsut then give error . we should write x1. then which data we need print theat data like in above case if we need name of x1 then write x1.name
// same as it is like with x1.rno and x1.marks same as it is with secod data x2.rno or x2.names etc for outptut 
// for all data types in output write this command in above like line 27 or 28

// can we tak input ? yes we can take input like in above case we tak input of roll number 