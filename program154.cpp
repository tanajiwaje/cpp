#include<iostream>
using namespace std;

struct node 
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE; 


class SinglyCLL
{
	private: //characteristics
	PNODE Head;
	PNODE Tail;
	
	public: //behaviours
	SinglyCLL()
	{
		Head=NULL;
		Tail=NULL;
	}
	
	void InsertFirst(int no)
	{
		
	}
	void InsertLast(int no)
	{
		
	}
	void InsertAtPos(int no,int ipos)
	{
		
	}
	void DeleteFirst()
	{
		
	}
	void DeleteLast()
	{
		
	}
	void DeleteAtPos(int ipos)
	{
		
	}
	void Display()
	{
		
	}
	int Count()
	{
		return 0;
	}
	
	
	 
	
};

int main()
{
	SinglyCLL obj;
	
	return 0;
}