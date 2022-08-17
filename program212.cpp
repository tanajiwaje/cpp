#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int size)
{
	T Max=Arr[0];
	int i=0;
	for(i=0;i<size;i++)
	{
		if(Max<Arr[i])
		{
			Max=Arr[i];
		}
	}
	return Max;
}

int main()
{ 
    int Arr[]={5,4,6,4,5};
	int iRet=Maximum(Arr,5);
	cout<<"Max is :"<<iRet<<endl;
	
	float fArr[]={5.5,4.2,6.7,4.5,5.5};
	float fRet=Maximum(fArr,5);
	cout<<"Max is :"<<fRet;
	
	
	
	return 0;
	
	
}