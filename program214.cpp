#include<iostream>
using namespace std;

class ArrayX
{
	public:
	int *Arr;
	int Size;
	
	
	ArrayX(int value)
	{
		Size=value;
		Arr=new int[Size];
	}
	
	~ArrayX()
	{
	   delete []Arr;
	}
	
	void Accept()
	{
		cout<<"Enter the value"<<endl;
		int i=0;
		for(i=0;i<Size;i++)
		{
			cin>>Arr[i];
		}
	}
	void Display()
	{
		cout<<"value are:"<<endl;
			int i=0;
		for(i=0;i<Size;i++)
		{
			cout<<Arr[i]<<endl;
		}
		
	}
	int Maximum()
	{
		int Max=Arr[0];
		for(int i=0;i<Size;i++)
		{
			if(Arr[i]>Max)
			{
				Max=Arr[i];
			}
			
		}
		return Max;
	}
	
	
};

int main()
{ 
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	int iRet=obj1.Maximum();
	cout<<"Maximum number is :"<<iRet;
	
	ArrayX obj2(5);
	obj2.Accept();
	obj2.Display();
    float fRet=obj2.Maximum();
	cout<<"Maximum number is :"<<fRet;
	
	ArrayX obj3(5);
	obj3.Accept();
	obj3.Display();
    char cRet=obj3.Maximum();
	cout<<"Maximum number is :"<<cRet;
	
	
	
	
	return 0;
	
	
}