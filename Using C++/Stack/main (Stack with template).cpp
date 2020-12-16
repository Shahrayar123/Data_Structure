#include <iostream>
using namespace std;

template <class T>

#define SIZE 5

class Stack
{
    T stack[SIZE];
    int top;
    
public:
    Stack()
    {
        top = -1;   
    }


void push(T);
T pop();
bool isEmpty();
bool isFull();
    
};

template<class T> 
void Stack<T>::push(T x) 
{
    if(top == SIZE-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    
    else
    {
        top++;
        stack[top] = x;
    }
    
}

template <class T>
T Stack<T>::pop()
{
    if(top == -1)
    {
        cout<<"Stack Undeflow"<<endl;
    }
    
    else
    {
        return stack[top--];
    }
    
}

template <class T>
bool Stack<T>::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
        return false; 
}

template <class T>
bool Stack<T>::isFull()
{
    if(top == SIZE-1)
    {
        return true;
    }
    else
        return false; 
}



int main()
{
    Stack <string> s;
    s.push("A");
    
    if(s.isFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack not full"<<endl;
    
}

















