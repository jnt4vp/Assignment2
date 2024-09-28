//Project 2
//Jack Turner
//CS 303
//September 28, 2024

class Node{
    public:
        int data;
        Node *next;
        Node();
        Node(int data);
};

class LinkedList {
    public:
        Node* head;
        Node* tail;
        int num_items;
    void push_front(int data); //Allows user to push value to the front of the list
    void push_back(int data); // Allows user to push value to the back of the list
    void pop_front(); //Allows user to remove the front value
    void pop_back(); //Allows user to remove the back value
    void empty(); //Allows user to empty the list
    void insert(int index, const int item); //Allows user to insert value at a specified location
    bool remove(int index); //Allows user to remove value at specified location
    int find(const int item); //Allows user to find item if it exists in the list
};