#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};
int main (){
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}











/*#include<iostream>
using namespace std;
#define n 100
class stack(){
    int arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top = -1;
    }
    void push(){
        if(top==n-1){
            cout<<"Stack has overflow"<<endl;
        return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack has no element"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"stack has no element"<<endl;
            return -1;
        }
        return arr[top];
        bool empty(){
            top==-1;
            return;
        }
    }
};
int main (){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}*/