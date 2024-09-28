//Project 2
//Jack Turner
//CS 303
//September 28, 2024

#include <iostream>
#include <vector>

using namespace std;

class stack {

private:
    vector<int> v; //Stores integer values
    int size = 0; //Stores size of vector/stack

public:
    void push(int data); //Allows user to add elements to the stack
    int pop(); //Allows user to remove element from the top of the stack
    bool isEmpty(); //Checks to see if the stack is empty
    void iterate(); //Iterates through the stack
    int average(); //Finds average value of all members in the stack
};