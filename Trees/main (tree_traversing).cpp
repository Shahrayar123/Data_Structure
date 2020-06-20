#include <iostream>
using namespace std;

// Tree traversing

class Traversing
{
    int data;
    Traversing *left, *right;

public:
    Traversing()
    {
        left = NULL;
        right = NULL;
    }



void preOrderTraverse(Traversing*);
void inOrderTraverse(Traversing*);
void postOrderTraverse(Traversing*);

};


void Traversing::preOrderTraverse(Traversing* root)
{
    if(root)
    {
        cout<<"Root node is visited first"<<endl;
        cout<<root->data<<" ";
        
        cout<<"Left sub-tree is visited second "<<endl;
        preOrderTraverse(root->left);
        
        cout<<"Right sub-tree is visited last"<<endl;
        preOrderTraverse(root->right);
        
    }
    
    else
    {
        cout<<"Tree not found! "<<endl;
    }
    
}

void Traversing::inOrderTraverse(Traversing* root)
{
    if(root)
    {
        cout<<"Left sub-tree is visited first"<<endl;
        inOrderTraverse(root->left);
        
        cout<<"Root node is visited second"<<endl;
        cout<<root->data<<" ";
        
        cout<<"Right sub-tree is visited last"<<endl;
        inOrderTraverse(root->right);
        
    }
    
    else
    {
        cout<<"Tree not found! "<<endl;
    }
    
}

void Traversing::postOrderTraverse(Traversing* root)
{
    if(root)
    {
        cout<<"Left sub-tree is visited first"<<endl;
        postOrderTraverse(root->left);
        
        cout<<"Right sub-tree is visited second"<<endl;
        postOrderTraverse(root->right);
        
        cout<<"Root node is visited last"<<endl;
        cout<<root->data<<" ";
        
    }
    
    else
    {
        cout<<"Tree not found! "<<endl;
    }
    
}


int menu()
{
    int choice;

    cout<<"\n------------- Tree Traversing -------------\n"<<endl;
    cout<<"Enter 1 for pre order traversing"<<endl;
    cout<<"Enter 2 for in order traversing"<<endl;
    cout<<"Enter 3 for post order traversing"<<endl;
    cout<<"Enter 0 for exit\n"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    return choice;
}



int main()
{
    Traversing t;
    
    while(true)
    {
        switch(menu())
        {
            case 1:
                cout<<"You are doing pre order treversing"<<endl;
                break;
                
            case 2:
                cout<<"You are doing in order treversing"<<endl;
                break;
                
            case 3:
                cout<<"You are doing post order treversing"<<endl;
                break;
                
            case 0:
                cout<<"Thank you for using this program"<<endl;
                exit(0);
            
            default:
                cout<<"Invalid choice "<<endl;
        }
    }
    
    
    
}















