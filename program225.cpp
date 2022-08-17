#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);        // InsertFirst
        void Pop();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::EnStack(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct node<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}
template <class T>
void Stack<T>::DeStack()
{
	T no;
	
	if(Count==0)
	{
		cout<<"Stack is empty"<<endl;
		return;
	}
	if(Count==1)
	{
		no=Head->data;
		delete Head;
		Head=NULL;
		
	}
	else
	{
		no=Head->data;
		struct node<T> *temp;
		temp=Head;
		Head=Head->next;
		delete temp;
	}
	Count--;
	    cout<<"Removed elements is :"<<no; 
	
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Stack : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
	Stack <int>obj1;
	
	
    return 0;
}