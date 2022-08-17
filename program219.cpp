#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
   public:
	T *Arr;
	int Size;
	
	ArrayX(int value);
	~ArrayX();
	void Accept();
	void Display();
	T Maximum();	
};
    template<class T>
    ArrayX<T>::ArrayX(int value)
	{
		Size=value;
		Arr=new T[Size];
	}
	template<class T>
	ArrayX<T>::~ArrayX()
	{
	   delete []Arr;
	}
   template<class T>
   void ArrayX<T>::Accept()
   {
      cout<<"Enter the value"<<endl; 
      int i=0;
      for(i=0;i<Size;i++)
        {
           cin>>Arr[i];
        }
    }
	template<class T>
	void ArrayX<T>::Display()
	{
		cout<<"value are:"<<endl;
			int i=0;
		for(i=0;i<Size;i++)
		{
			cout<<Arr[i]<<endl;
		}
		
	}
    template<class T>
	T ArrayX<T>::Maximum()
	{
		T Max=Arr[0];
		for(int i=0;i<Size;i++)
		{
			if(Arr[i]>Max)
			{
				Max=Arr[i];
			}
			
		}
		return Max;
	}

int main()
{ 
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	int iRet=obj1.Maximum();
	cout<<"Maximum number is :"<<iRet;
	
	
	
	
	
	return 0;
}