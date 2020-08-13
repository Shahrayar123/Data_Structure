#include <iostream>
#include <string>
using namespace std;


class Employee
{
  string empName, empAddress;
  float empSalary;

  Employee *link;

public:
  Employee()
  {
    link = NULL;
  }

  void setEmpName(string);    
  void setEmpAddress(string);
  void setEmpSalary(float);

  string getEmpName();
  string getEmpAddress();
  float getEmpSalary();

  void insertFirstNode(string, string, float);       // for only first time insertion
	void insertAtFirst(string, string, float);         // for insert node at first  

	void delLastNode();
	void delFirstNode();


};
static Employee *START = NULL;

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


  void Employee::insertFirstNode(string name, string addr, float sal)   
  {
    if(START != NULL)
    {
        cout<<"This function is only for first node insertion"<<endl;
    }

    else
    {
      Employee* temp;
      Employee * emp = new Employee();

      temp = emp;

      temp->setEmpName(name);
      temp->setEmpAddress(addr);
      temp->setEmpSalary(sal);

      START = temp;
    }

  }

	void Employee::insertAtFirst(string name, string addr, float sal)         // for insert node at first  
  {
    if(START == NULL)
    {
      cout << "Soory this function is for when list exist and you want to insert at first" << endl;
    }

    else
    {
      Employee *temp;
      Employee * emp = new Employee();
      
      temp = START;

      emp->setEmpName(name);
      emp->setEmpAddress(addr);
      emp->setEmpSalary(sal);

      emp->link = temp;

      START = emp;
    }


  }

	void Employee::delLastNode()
  {
      // delete last node, code here
  }

	void Employee::delFirstNode()
  {
    // delete first node, code here

  }



int main()
{

}