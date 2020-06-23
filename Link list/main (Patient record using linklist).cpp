#include <iostream>
using namespace std;


class Patient
{
	string pName, pID;
	Patient* link;

public:
	Patient()
	{
		link = NULL;
	}

	void setpName(string);
	void setpId(int);

	string getpName();
	string getpID();


	void insertFirstNode(string, int);       // for only first time insertion
	void insertAtFirst(string, int);         // for insert node at first  

	void delLastNode();
	void delFirstNode();

};

Patient* START = NULL;

void Patient::setpName(string name)
{
	pName = name;
}

void Patient::setpId(int id)
{
	pID = id;
}

string Patient::getpName()
{
	return pName;
}

string Patient::getpID()
{
	return pID;
}


void Patient::insertFirstNode(string name, int id)       // for only first time insertion
{
	cout << "\t\tYou are inserting first node \n" << endl;

	if (START != NULL)
	{
		cout << "Sorry this function is only to insert first node" << endl;
	}

	else
	{
		Patient* ptr = new Patient();
		Patient* n;

		n = ptr;

		ptr->setpName(name);
		ptr->setpId(id);

		START = ptr;
	}


}

void Patient::insertAtFirst(string name, int id)         // for insert node at first  
{
	if (START == NULL)
	{
		cout << "Soory this function is for when list exist and you want to insert at first" << endl;
	}

	else
	{
		Patient* ptr = new Patient;
		ptr->setpName(name);
		ptr->setpId(id);

		Patient* n;

		n = ptr;

		ptr->link = START;

		START = ptr;

	}


}

void Patient::delLastNode()
{
	if (START == NULL)
	{
		cout << "List not exist" << endl;
	}

	else
	{
		Patient* p, * l;   // p: second last  , l: last

		l = START;

		while (l->link != NULL)
		{
			p = l;

			l = l->link;
		}

		delete l;
		p->link = NULL;

		cout << "Last node deleted" << endl;
	}


}

void Patient::delFirstNode()
{
	if (START == NULL)
	{
		cout << "Lis not exist" << endl;
	}

	else
	{
		Patient* p;
		p = START;

		START = START->link;

		delete p;

		cout << "First element deleted" << endl;
	}


}


int menu()
{
	int choice;

	cout << "Enter 1 to insert first node" << endl;
	cout << "Enter 2 to replace first node" << endl;
	cout << "Enter 3 to delete last node" << endl;
	cout << "Enter 4 to delete first node" << endl;
	cout << "Enter 0 to exit\n" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	return choice;
}

int main()
{
	Patient* ptr;

	while (true)
	{
		switch (menu())
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 0:

		default:

		}

	}


}






