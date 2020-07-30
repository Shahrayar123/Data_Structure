#include <iostream>
using namespace std;

class Student
{
	// AVL tree is a self-balancing Binary Search Tree (BST)

	string stdName, stdGrades, stdIdNum;
	Student* left, * right;

public:
	Student()
	{
		left = NULL;
		right = NULL;
	}

	void setstdName(string);
	void setstdGrade(string);
	void setstdIdNum(string);
	string getstdName();
	string getstdGrade();
	string getstdIdNum();

	void insertNode(string, string, string);
	void displayNode(string);
	Student delNode(string);


};

void Student::setstdName(string name)
{
	stdName = name;
}

void Student::setstdGrade(string grade)
{
	stdGrades = grade;
}

void Student::setstdIdNum(string id)
{
	stdIdNum = id;
}

string Student::getstdName()
{
	return stdName;
}

string Student::getstdGrade()
{
	return stdGrades;
}

string Student::getstdIdNum()
{
	return stdIdNum;
}

// --------------------------------------------------

void Student::insertNode(string name, string id, string grade)
{
	// insert according to AVL tree property


	cout << "This is insert node method" << endl;


}

void Student::displayNode(string id)
{
	// searching of AVL tree is same as BST

	cout << "This is display node method" << endl;

}

Student Student::delNode(string id)
{
	cout << "This is delete node method" << endl;
	return;
}

static Student* root = NULL;

int menu()
{
	int choice;

	cout << "\nEnter 1 to insert data in student node" << endl;
	cout << "Enter 2 to search student with id number " << endl;
	cout << "Enter 3 to delete student record" << endl;
	cout << "Enter 0 to exit\n" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	return choice;

}

int main()
{
	string name, id, grades;

	Student* std = new Student;

	while (true)
	{
		switch (menu())
		{

		case 1:

			break;

		case 2:
			cout << "Enter id number of student you want to search: " ;
			cin >> id;

			std->displayNode(id);

			break;

		case 3:
			cout << "Enter id number of stuent you want to delete: ";
			cin >> id;

			std->delNode(id);

			break;

		case 0:
			cout << "Thank you for using this program" << endl;
			exit(0);

		default:
			cout << "Invalid choice" << endl;

		}
	}

}

