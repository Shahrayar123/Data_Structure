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

	Patient* find(Patient*, int);
	void insert(Patient*, int);
		
};

Patient* Patient::find(Patient* root, int id)
{
	if (root == NULL)    // only consider ID
		return NULL;

	if (id < root->pID)
	{
		return (find(root->left, id));
	}

	else if (id > root->pID)
	{
		return (find(root->right, id));
	}

	return root;
}

void Patient::insert(Patient* root, int id)  // only consider ID
{
	Patient* par; // contain address of parent node on which we add the new node   

	Patient* n = new Patient;

	n->left = NULL;
	n->right = NULL;

	if (root == NULL)
	{
		root = n;
	}

	else
	{
		par = root;

		while (par != NULL)
		{
			if (par->pID > id)
			{
				if (par->left == NULL)
					par->left = n;

				par = par->left;
			}

			else if (par->pID < id)
			{
				if (par->right == NULL)
					par->right = n;

				par = par->left;
			}
			

		}
	}

}


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

string Patient::getpAddress()
{
	return pAddress;
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

string Patient::getpDoctorName()
{
	return pDoctorName;
}

void Patient::setpAge(int age)
{
	pAge = age;
}

int Patient::getpAge()
{
	return pAge;
}

void Patient::setpNIC(int cnic = 0)
{
	pNIC = cnic;
}

int Patient::getpNIC()
{
	return pNIC;
}


void Patient::setpID(int id = 0)
{
	pID = id;
}

int Patient::getpID()
{
	return pID;
}

//             Generate random id number

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
	int choice;

	cout << "\n1- To save record of patient" << endl;
	cout << "2- To find record of patient" << endl;
	cout << "3- To delete record of patient" << endl;
	cout << "4- To display all existing records" << endl;

	cout << "0- To exit \n" << endl;

	cout << "Enter your choice: ";
	cin >> choice;

	return choice;
}


Patient* root = NULL;     // points to root node

int main()
{
	

	string name, fname, address, disease, doctorName;
	int age, choice, idNum, cnic;

	while (true)
	{
		Patient* p;

		switch (menu())
		{


		case 1:
			cout << "Enter name of patient: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter father name of patient: ";
			getline(cin, fname);

			cout << "Enter age of patient: ";
			cin >> age;

			cout << "Enter address of patient: ";
			cin.ignore();
			getline(cin, address);

			cout << "Enter disease of patient: ";
			cin >> disease;

			cout << "Enter doctor's name of patient: ";
			cin.ignore();
			getline(cin, doctorName);

		up:
			cout << "\n------ Enter 1 to save record on basic of CNIC"<<endl;
			cout << "------ Enter 2 to save record on basic of ID number"<<endl;
			cout << "\nEnter your chocie: ";
			cin >> choice;

			if (choice == 1)
			{
				idNum = 0;    // now we not concern with this

				cout << "Enter cnic of patient: ";
				cin >> cnic;


			}

			else if (choice == 2)
			{
				cnic = 0;     // now we not concern with this

				idNum = generateId();

			}

			else
			{
				cout << "Invalid choice";
				goto up;
			}

			p->setpName(name);
			p->setpFatherName(fname);
			p->setpAddress(address);
			p->setpAge(age);
			p->setpDisease(disease);
			p->setpDoctorName(doctorName);
			p->setpID(idNum);
			p->setpNIC(cnic);

			break;

		case 2:
		case 3:
		case 4:

		case 0:
			exit(0);

		default:
			cout << "Invalid choice" << endl;

		}
	}


}


















