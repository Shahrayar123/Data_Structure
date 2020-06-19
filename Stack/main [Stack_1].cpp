#include <iostream>
using namespace std;

#define SIZE 4

class Stack
{
  int stack[SIZE];
  int top;

public:
    Stack ()
  {
    top = -1;
  }

  void push (int);
  void pop ();
  bool isEmpty ();
  bool isFull ();
  int showTop ();
  void displayAll ();

};

void
Stack::push (int num)
{
  if (top == SIZE - 1)
    {
      cout << "Stack Overflow" << endl;
    }

  else
    {
      top++;
      stack[top] = num;
    }

}

void
Stack::pop ()
{
  if (top == -1)
    {
      cout << "Stack Underflow" << endl;
    }

  else
    {
      // return stack[top--];
      cout << "Poped element is :" << stack[top] << endl;
      top--;
    }



}

bool
Stack::isEmpty ()
{
  if (top == -1)
    return true;
  else
    return false;

}

bool
Stack::isFull ()
{
  if (top == SIZE - 1)
    return true;
  else
    return false;

}

int
Stack::showTop ()
{
  return stack[top];
}

void
Stack::displayAll ()
{
  if (top == -1)
    {
      cout << "No element found in Stack" << endl;
    }

  else
    {
      for (int i = 0; i <= SIZE - 1; i++)
	{
	  cout << "Number at index " << i << " is " << stack[i] << endl;
	}

    }
}

char
menu ()
{
  char choice;

  cout << "------------- Stack Basic Operations -------------\n" << endl;
  cout << "Enter 1 to push element in Stack" << endl;
  cout << "Enter 2 to pop element from Stack" << endl;
  cout << "Enter 3 to check whether Stack is empty or not" << endl;
  cout << "Enter 4 to check whether Stack is full or not" << endl;
  cout << "Enter 5 to show top element from Stack" << endl;
  cout << "Enter 6 to display all element from Stack" << endl;
  cout << "Enter 0 to exit\n" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  return choice;
}

int
main ()
{
  Stack s;
  int num;

  while (true)
    {
      switch (menu ())
	{
	case '1':
	  cout << "Enter number to push: ";
	  cin >> num;
	  s.push (num);
	  break;

	case '2':
	  s.pop ();
	  break;

	case '3':
	  if (s.isEmpty ())
	    {
	      cout << "Stack is empty" << endl;
	    }

	  else
	    {
	      cout << "Stack is not empty" << endl;
	    }

	  break;

	case '4':
	  if (s.isFull ())
	    {
	      cout << "Stack is full" << endl;
	    }
	  else
	    {
	      cout << "Stack is not full" << endl;
	    }
	  break;

	case '5':
	  cout << "Top element in stack is: " << s.showTop () << endl;
	  break;

	case '6':
	  s.displayAll ();
	  break;

	case '0':
	  cout << "Thank you for using this software" << endl;
	  exit (0);



	default:
	  cout << "Invalid choice" << endl;

	}
    }


}
