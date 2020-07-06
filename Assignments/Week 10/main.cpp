#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

//                       Level order traversal 

class Patient
{
	int pID; string pName;
	Patient* left, * right;

public:
	Patient()
	{
		left = NULL;
		right = NULL;
	}
};

//                          For queue

class Queue
{
	Patient *queue[SIZE];       // contain address of Patient node
	int front, rear;

public:
	Queue()
	{
		front = -1;
		rear = -1;
	}

	void enQueue(Patient*);
	Patient* deQueue();
	bool isQueueEmpty();
	bool isQueueFull();

}; 


void Queue::enQueue(Patient * addr)   // to store Patient's node address into queue
{
	if (isQueueFull())
	{
		cout << "Queue is Full" << endl;
		return ;
	}

	else
	{
		if (isQueueEmpty())
		{
			front = rear = 0;
			queue[rear] = addr;
		}

		else
		{
			rear++;
			queue[rear] = addr;
		}

	}

}

Patient* Queue::deQueue()
{
	if (isQueueEmpty())
	{
		cout << "Queue is empty" << endl;
		return;
	}

	else
	{
		return queue[front++];

	}

}


bool Queue::isQueueEmpty()
{
	if (front == -1 && rear == -1)
	{
		return true;
	}

	else
		return false;

}

bool Queue::isQueueFull()
{
	if ((front == 0 && rear == SIZE - 1) || (front == SIZE - 1 && rear == SIZE - 1))
	{
		return true;
	}

	else
		return false;

}

//              End of queue


/*

        Next tasks

Patient class implementation
Main function
Implement level order traversal


*/

v/*oid LevelOrderTraversal(Patient *rootaddr)
{
	Queue q;
	Patient* ptr;
	ptr = rootaddr;

	while (q != NULL)
	{
		ptr->
	}


}*/

void LevelOrderTraversal(Patient* root)
{
	Patient* temp;

	Queue *q = new Queue;

	if (!root)
	{
		return;
	}

	q.enQueue(root);

	while (!(q.isQueueEmpty()))
	{
		temp = q.deQueue();

		cout << "Name of patient is: " << temp->pName << endl;
		cout << "ID number of patient is: " << temp->pID << endl;

		if (temp->left)
		{
			q.enQueue(temp->left);
		}

		if (temp->right)
		{
			q.enQueue(temp->right);
		}

	}

	delete q;
}

//     Next task
   
int main()
{

}




