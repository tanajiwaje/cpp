#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
	  struct node<T> *Head;
	  int Count;
	  
	  SinglyLL();
	 void InsertFirst(T);
	 void InsertLast(T);
	 void Display();
	 int CountNode();
	 void DeleteFirst();
	 void DeleteLast();
	 void InsertAtPos(T no,int);
	 void DeleteAtPos(int);
	 
};

template <class T>
SinglyLL<T>::SinglyLL()
{
	Head=NULL;
	Count=0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
     struct node<T> *newn=NULL;
	 newn=new node<T>;
	 newn->data=no;
	 newn->next=NULL;
	 
	 if(Head==NULL)
	 {
		 Head=newn;
		 
	 }
	 else
	 {
		 newn->next=Head;
		 Head=newn;
	 }
	 Count++;
	 
	
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
     struct node<T> *newn=NULL;
	 newn=new node<T>;
	 newn->data=no;
	 newn->next=NULL;
	 
	 if(Head==NULL)
	 {
		 Head=newn;
		 
	 }
	 else
	 {
		 struct node<T> *temp=Head;
		 while(temp->next!=NULL)
		 {
			 temp=temp->next;
		 }
		 temp->next=newn;
	 }
	 Count++;
	 
	
}

template <class T>
void SinglyLL<T>::Display()
{
	cout<<"Elemenets from linked list are"<<endl;
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
	
}


template <class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}

     template <class T>
	 void SinglyLL<T>::DeleteFirst()
	 {
		 if(Head==NULL)
		 {
			 cout<<"empty";
			 return;
		 }
		 else
		 {
		  struct node<T> *temp=Head;
		  Head=Head->next;
		  delete temp;
		 }
	 }
	 
	 template <class T>
	 void SinglyLL<T>::DeleteLast()
	 {
		 if(Head==NULL)
		 {
			 cout<<"empty";
			 return;
		 }
		 else
		 {
		    struct node<T> *temp=Head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
		 }
	 }
	 
	 template <class T>
	 void SinglyLL<T>::InsertAtPos(T no,int pos)
	 {
		 int Size=CountNode();
		 if(Head==NULL)
		 {
			 cout<<"Linked list is empty";
			 return;
		 }
		 if(pos<0 || pos>Size+1)
		 {
			 cout<<"invalid position";
			 return;
		 }
		 else if(pos==1)
		 {
			 InsertFirst(no);
		 }
		 else if(pos==Size)
		 {
			 InsertLast(no);
		 }
		 else
		 {
			 struct node<T> *newn;
			 newn=new node<T>;
			 newn->data=no;
			 newn->next=NULL;
			 
			 struct node<T> *temp=Head;
			 for(int i=1;i<pos-1;i++)
			 {
				 temp=temp->next;
			 }
			 newn->next=temp->next;
			 temp->next=newn;
		 }
	 }
	 
	template <class T>
	void SinglyLL<T>::DeleteAtPos(int pos)
	{
		 int Size=CountNode();
		 if(Head==NULL)
		 {
			 cout<<"Linked list is empty";
			 return;
		 }
		 if(pos<0 || pos>Size+1)
		 {
			 cout<<"invalid position";
			 return;
		 }
		 else if(pos==1)
		 {
			 DeleteFirst();
		 }
		 else if(pos==Size)
		 {
			 DeleteLast();
		 }
		 else
		 {
			 
			 struct node<T> *temp=Head;
			 for(int i=1;i<pos-1;i++)
			 {
				 temp=temp->next;
			 }
			 temp=temp->next->next;
		 }
	 }
	 
int main()
{
	SinglyLL<int>obj1;
	obj1.InsertFirst(3);
	obj1.InsertFirst(5);
	obj1.InsertFirst(3);
	obj1.InsertFirst(7);
    obj1.InsertLast(6);
	obj1.InsertLast(7);
	obj1.InsertLast(2);
	obj1.Display();
	obj1.DeleteFirst();
	obj1.DeleteLast();
	obj1.InsertAtPos(5,4);
	obj1.Display();
	int iRet=obj1.CountNode();
	cout<<"Count is :"<<iRet<<endl;
	
	SinglyLL<float>obj2;
	obj2.InsertFirst(3.6);
	obj2.InsertFirst(3.5);
	obj2.InsertFirst(5.5);
	obj2.InsertFirst(3.3);
	obj2.InsertFirst(7.8);
    obj2.InsertLast(6.2);
	obj2.InsertLast(7.7);
	obj2.InsertLast(2.4);
    obj2.InsertLast(4.3);
	obj2.Display();
	int iRet1=obj2.CountNode();
	cout<<"Count is :"<<iRet1;
	
  return 0;	
}