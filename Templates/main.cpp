#include <iostream>
using namespace std;

/*
--> Template is used to write generic code (datatype independent)

--> Function template
--> Class template

*/

// --------------> Function template

template <class X>    // X is palceholder

 X add(X a, X b)
{
  return a+b;
}

// --------------> Class template

#define SIZE 5
template <class T>
class Stack
{
    T data[SIZE];
    int top;       // points index number

public:
Stack()
{
  top = -1;
}

void push(T num);
T pop();
bool isStackFull();
bool isStackEmpty();

};

template <class T>
void Stack<T>::push(T num)
{
  if(top == SIZE-1)
  {
    cout<<"Stack Overflow / Stack full!"<<endl;
  }

  else
  {
    top++;
    data[top] = num;
  }

}

template <class T>
T Stack<T>::pop()
{
  if(top == -1)
  {
    cout<<"Stack Underflow / Stack is empty!"<<endl;
    return -2;
  }
  else
  {
    T temp;
    temp = data[top];

    top--;
    return temp;
  
    // return data[top--];

  }

}

template <class T>
bool Stack<T>::isStackFull()
{
  if(top == SIZE-1)    // if stack full
  {
    return true;
  }

  else                 // if stack not full
  {
    return false; 
  }
}

template <class T>
bool Stack<T>::isStackEmpty() 
{
  if(top == -1)       // if stack empty
  {
    return true;
  }
  else                // if stack not empty
  {
    return false;
  }
}

int main()
{
  // for function template

    cout<<"Sum is: "<<add(12,4)<<endl;
    cout<<"Sum is: "<<add(13.5,6.5);

  // for class template

  Stack<int> stk1;       // for int numbers
  if(stk1.isStackEmpty())
      cout<<"Stack is empty"<<endl;
  else 
    cout<<"Stack not empty"<<endl;

    stk1.push(13);
    stk1.push(14);
    stk1.push(15);
    stk1.push(16);
    stk1.push(17);

    cout<<stk1.pop() <<endl;
    cout<<stk1.pop() <<endl;

    stk1.push(50.6);     // error due to datatype

    if(stk1.isStackFull())
      cout<<"Stack is full";
    else
      cout<<"Stack not full";


Stack <float> stk2;     // for float numbers
stk2.push(50.7);
stk2.push(12.5);

cout<<stk2.pop() <<endl;

Stack<char> stk3;      // for char type

stk3.push('A');
stk3.push('B');
stk3.push('C');

cout<<stk3.pop() <<endl;
cout<<stk3.pop() <<endl;


}


