#include <iostream>
#include <vector>
#include "Stack.h"

using namespace std;

class stack {

private:
    vector<int> v;
    int size = 0;

public:
    void push(int data)
    {
        v.push_back(data);
        size++;
        cout << "Pushed: " << data << endl;
    }
    int pop()
    {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return -1;
        }
        int top = v.back();
        v.pop_back();
        cout << "\nPopped: " << top << endl;
        size--;
        return top;
    }
    int top()
    {
        if (isEmpty()) {
            cout << "Stack is empty. No top element.\n";
            return -1;
        }
        return v.back();
    }
    bool isEmpty(){
         return v.empty(); 
    }
    void iterate(){
        for(int i=0;i<size;i++){
            cout << v[i] << "\n";
        }
    }
    int average(){
        int avg;
        for(int i=0;i<size;i++){
            avg += v[i];
        }
        return avg/size;
    }
};

int main(){
    stack stack1;
    //checks to see if vector is empty at the beginning
    cout << "The stack being empty is " << stack1.isEmpty() << "\n";
    for(int i=0;i<10;i++){
        stack1.push(i);
    };
    //checking to see if stack is empty after insertion
    cout << "The stack being empty is "  << stack1.isEmpty() << "\n";
    stack1.iterate();
    stack1.pop();
    cout << "The value at the top of the stack is " << stack1.top() << "\n";
    cout << "The average value of the integers in the stack is " << stack1.average() << "\n";
};