#include <iostream>
#include <string>
using namespace std;

class Student
{
  string stdName,stdSemester;
  float stdCGPA;

public:
  void setStdName(string);
  void setStdSemester(string);
  void setStdCGPA(float);

  string getStdName();
  string getStdSemester();
  float getStdCGPA();

};

void Student::setStdName(string name)
{
  stdName = name;
}

void Student::setStdSemester(string sem)
{ 
  stdSemester = sem;
}

void Student::setStdCGPA(float gpa)
{
  stdCGPA = gpa;
}

string Student::getStdName()
{
  return stdName;
}

string Student::getStdSemester()
{
  return stdSemester;
}

float Student::getStdCGPA()
{
  return stdCGPA;
}


// Queue dataStructure for storing student data

#define SIZE  5
class Queue
{
  Student stdData[SIZE];
  int front , rear;

public:
  Queue()
  {
    front = -1;
    rear = -1;
  }

  void enQueueStudentData(string,string,float);
  void deQueueStudentData();


};

void Queue::enQueueStudentData(string name,string semester,float gpa)
{
  if(rear == SIZE-1)
  {
    cout<<"Queue Overflow/ Queue full"<<endl;
  }  

  else
  {
    if(front && rear == -1)
    {
      front = 0;
      rear  =  0;
    }

    else
    {
      rear++;
      stdData[rear].setStdName(name);
      stdData[rear].setStdSemester(semester);
      stdData[rear].setStdCGPA(gpa);
    }

  }

}                                

void Queue::deQueueStudentData()
{
  if(front == -1)
  {
    cout<<"Queue Underflow / Queue is empty"<<endl;
  }

  else
  {
    string name,semester;
    float gpa;

    name = stdData[front].getStdName();    
    semester = stdData[front].getStdSemester();
    gpa = stdData[front].getStdCGPA();

    cout<<"Record of student at index number "<<front<<" is deletet"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"CGPA: "<<gpa<<endl;

    front++;

  }

}

int main()
{
    // Save, display, delete student record from Queue

    
}
