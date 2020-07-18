#include<iostream>
#include <string>
#include <cstdlib>  //   For random number generation
#include <ctime>    //    //  //     //      //

using namespace std;

class Patient
{
	string pName, pfName, pAddress, pDisease, pDoctorName;
	int pAge, pNIC, pID;           
	                        // pID and pNIC must be unique

	Patient* left, * right;

public:
	Patient()
	{
		left = NULL;
		right = NULL;
	}

	void setpName(string);
	string getpName();

	void setpFatherName(string);
	string getpFatherName();

	void setpAddress(string);
	string getpAddress();

	void setpDisease(string);
	string getpDisease();

	void setpDoctorName(string);
	string getpDoctorName();

	void setpAge(int);
	int getpAge();

	void setpNIC(int);
	int getpNIC();

	void setpID(int);
	int getpID();





};


void Patient::setpName(string name)
{
	pName = name;
}

string Patient::getpName()
{
	return pName;
}

void Patient::setpFatherName(string fName)
{
	pfName = fName;
}

string Patient::getpFatherName()
{
	return pfName;
}

void Patient::setpAddress(string pAddr)
{
	pAddress = pAddr;
}

string getpAddress()
{
	return pAddr;
}

void Patient::setpDisease(string dis)
{
	pDisease = dis;
}

string Patient::getpDisease()
{
	return pDisease;
}

void Patient::setpDoctorName(string doctorName)
{
	pDoctorName = doctorName;
}

string getpDoctorName()
{
	return pDoctorName;
}

void setpAge(int age)
{
	pAge = age;
}

int getpAge()
{
	return pAge;
}

void Patient::setpNIC(int cnic)
{
	pNIC = cnic;
}

int Patient::getpNIC()
{
	return pNIC;
}


void Patient::setpID(int id)
{
	pID = id;
}

int getpID()
{
	return pID;
}

int generateId()
{
	/*static int i = -1;
	i++;*/

	srand(time(0));

	int idNum = (rand() % 1000) + 100;

	return idNum;

	//static int i = -1;
	//i++;

	//srand(time(0));

	//for (int i = 0; i < 10; i++)
	//{
	//	int idNum = (rand() % 1000) + 100;

	//	cout << idNum << endl;
	//}

}



int menu()
{
	int chocie;

	cout << "\n1- To save record of patient" << endl;
	cout << "2- To find record of patient" << endl;
	cout << "3- To delete record of patient" << endl;
	cout << "4- To display all existing records" << endl;

	cout << "0- To exit \n" << endl;

	cout << "Enter your choice: ";
	cin >> choice;

	return choice;
}



int main()
{
	Patient* p;

	string name, fname, address, disease, doctorName;
	int choice, idNum, cnic;

	while (true)
	{
		case 1:
			cout << "Enter name of patient: ";
			cin >> getline(cin, name);

			cout << "Enter father name of patient: ";
			cin >> getline(cin, fname);

			cout << "Enter age of patient: ";
			cin >> age;

			cout << "Enter address of patient: ";
			cin >> getline(cin, address);

			cout << "Enter disease of patient: ";
			cin >> disease;

			cout << "Enter doctor's name of patient: ";
			cin >> getline(cin, doctorName);

			up:
			cout << "\n------ Enter 1 to save record on basic of CNIC";
			cout << "------ Enter 2 to save record on basic of ID number";
			cout << "\nEnter your chocie: ";
			cin >> chocie;

			if (choice == 1)
			{
				cout << "Enter cnic of patient: ";
				cin >> cnic;

			}

			else if (choice == 2)
			{
				idNum = generateId();
			}

			else
			{
				cout << "Invalid choice";
				goto up;
			}

			break;

		case 2:
		case 3:
		case 4:
		case 0:

		default:
			cout << "Invalid choice" << endl;

	}


}


















