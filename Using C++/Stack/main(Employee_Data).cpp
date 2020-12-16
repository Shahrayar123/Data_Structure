
#include <iostream>
#include <string>
using namespace std;

class Employee
{
  string empName, empAddress;
  float empSalary;

  public:

  void setEmpName(string);
  void setEmpAddress(string);
  void setEmpSalary(float);

  string getEmpName();
  string getEmpAddress();
  float getEmpSalary();

};

  void Employee::setEmpName(string name)
  {
    empName = name;

  }

  void Employee::setEmpAddress(string addr)
  {
    empAddress = addr;
  }

  void Employee::setEmpSalary(float sal)
  {
     empSalary = sal; 
  }

  string Employee::getEmpName()
  {
     return empName; 
  }

  string Employee::getEmpAddress()
  {
    return empAddress;
  }

  float Employee::getEmpSalary()
  {
    return empSalary;
  }


// Stack dataStructure for storing Employee class object

#define SIZE 5
class Stack    
{
  Employee empData[SIZE];
  int top;

  public:
  Stack()
  {
    top = -1;
  }

void pushEmployeeData(string,string,float);
void popEmployeeData();
bool isStackFull();
bool isStackEmpty();

int getTop();

};

void Stack::pushEmployeeData(string name,string addr,float sal)
{
  if(isStackFull())
  {
    cout<<"Stack full!"<<endl;
  }

  else
  {
    top++;
    empData[top].setEmpName(name);
    empData[top].setEmpAddress(addr);
    empData[top].setEmpSalary(sal);

  }

}

void Stack::popEmployeeData()
{ 
  if(isStackEmpty())
  {
    cout<<"Stack is empty" <<endl;
  }

  else 
  {
    // return empData[top--];
    string name, addr;
    float sal;

    name = empData[top].getEmpName();
    addr = empData[top].getEmpAddress();
    sal = empData[top].getEmpSalary();

    // cout<<"Data of "<<name<<" whose address is "<<addr<<" and salary is "<<sal<<" is deleted"<<endl;

    cout<<"Data of employee at index "<<top<<" is deleted\n"<<endl;
    cout<<"Name: "<< name << endl;
    cout<<"Address: "<< addr << endl;
    cout<<"Salary: "<< sal << endl;

    top --;

    // Employee temp ;
    // temp.getEmpName(empData[top]);

  }

}

bool Stack::isStackFull()
{
  if(top == SIZE-1)
  {
    return true;
  }
  else
  {
    return false;
  }

}

bool Stack::isStackEmpty()
{
  if(top == -1)
  {
    return true;
  }

  else
  {
    return false;
  }

}

int Stack::getTop()
{
  return top;
}

int menu()
{
  int choice;

  cout<<"\n\nPress 1 for saving employee data"<<endl;
  cout<<"Press 2 for displaying employee data"<<endl;
  cout<<"Press 3 for delete employee data from Memory(Stack)"<<endl;
  cout<<"Press 0 for exit\n"<<endl;
  cout<<"Enter your choice: ";
  cin>>choice;

  return choice;

}

int main()
{
  string name,addr;
  float sal;

  char choice;

  Employee emp1;
  Stack stk;

  while(true)
  {
    switch(menu())
    {
      case 1:
          cout<<"\nEnter name of Employee: ";
          cin.ignore();
          getline(cin,name);
          cout<<"Enter address of Employee: ";
          getline(cin,addr);
          cout<<"Enter salary of Employee: ";
          cin>>sal;

          stk.pushEmployeeData(name,addr,sal);
          break;

      case 2:
          // Displaying all employee's data from index 0 to n, code here
          // if(stk.isStackEmpty())
          // {
          //   cout<<"No record exist"<<endl;
          // }
          // else
          // {
          //   for(int i = 0;i < (stk.getTop()) +1; i++)
          //   {
          //     cout<<"Name of employee is: "<<emp1.getEmpName()<<endl;
          //     cout<<"Address of employee is: "<<emp1.getEmpAddress()<<endl;
          //     cout<<"Salary of employee is: "<<emp1.getEmpSalary()<<endl;
          //   }

          //   stk;

          // }
          



          break;

      case 3:
          // delete(pop) employee data code here
          stk.popEmployeeData();
          break;

      case 0:
           cout<<"Are you sure you want to exit(y/n): ";
           cin>>choice; 

           if(choice == 'y' || choice == 'Y')
           {
             exit(0);
           }
           else
           {
             break;
           }


      default:
           cout<<"Invalid choice"<<endl;

    }

  }


  

  

  


}
