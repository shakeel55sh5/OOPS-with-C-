#include<iostream>
#include "arrray.h"
#include<string>
using namespace std;

int main (){
    int marks[4];
    marks[0] = 15;
    marks[1] = 75;
    marks[2] = 65;
    marks[3] = 43;
    int total[4];
    cout<<marks[0]<<marks[1]<<marks[2]<<marks[3];
    for (int i = 0; i < sizeof(marks)/sizeof(marks[0]); i++)
    {
        cout<<"these are marks of "<<i<<"is "<<marks[i]<<endl;
    }
    int mathmarks[4];
    cout<<"Enter the value of first student marks"<<endl;
    cin>>mathmarks[0]>>mathmarks[1]>>mathmarks[2]>>mathmarks[3];
    cout<<"You enter the value of math marks student of is: "<<endl;
    for (int i = 0; i < sizeof(mathmarks)/sizeof(mathmarks[0]); i++)
    {
        cout<<"Marks of student "<<i<<" is "<<mathmarks[i]<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
       total[i] = marks[i] + mathmarks[i];
    }
    for (int i = 0; i < 4; i++)
    {
        // cout<<"The sum of two arrays is: "<<total[i]<<endl;
        cout<<total[i]<<" ";
        // for (int j = 0; j < 4; j++)
        // {
        //     cout<<total[j]<<" ";
        // }
        
    }
    

    // NewFunction(marks, mathmarks);

    // int total = marks[2]+mathmarks[2];
    // cout<<total;
    // cout<<mathmarks[0]<<mathmarks[1]<<mathmarks[2];
    cout<<"Hellow wrold";
    string str(5,'n');
    cout<<str;
    
    return 0;
}
// void NewFunction(int marks[4], int mathmarks[4])
// {
//     int total[4];
//     for (int i = 0; i < 4; i++)
//     {
//         cout << total[i] = marks[i] + mathmarks[i];
//     }
// // }