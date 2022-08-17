#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;


class DoublyCLL
{
	private:
       PNODE Head;
       PNODE Tail;
	   int CountNode;
    public:
    DoublyCLL();
    void InsertFirst(int);
	void InsertLase(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();	
	int Count();
};
    DoublyCLL::DoublyCLL()
	{
		Head=NULL;
		Tail=NULL;
		CountNode=0;
		
	}
    void DoublyCLL::InsertFirst(int no)
	{
		PNODE newn=NULL;
		newn=new NODE;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		
		if(Head==NULL && Tail==NULL)
		{
			Head=newn;
		}
		else
		{
			//newn->next=Head;
			//Head->prev=newn;
		}
		Tail=Head;
	}
	void DoublyCLL::InsertLase(int no)
	{}
	void DoublyCLL::InsertAtPos(int no,int pos)
	{}
	void DoublyCLL::DeleteFirst()
	{}

	void DoublyCLL::DeleteLast()
	{}
	void DoublyCLL::DeleteAtPos(int pos)
	{}
	void DoublyCLL::Display()
	{
		PNODE temp=Head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
    int DoublyCLL::Count()
	{
		return CountNode;
	}
int main()
{
	DoublyCLL obj;
	obj.InsertFirst(10);
    obj.Display();
	
	return 0;
}