#include<iostream>
using namespace std;
template <class T>
void Display(T *str,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<str[i]<<endl;
	}
}

int main()
{ 
    int Arr[]={5,4,6,4,5};
	Display(Arr,5);
	
	float Brr[]={5.6,4.7,6.7,4.3,5.7};
	Display(Brr,5);
	
	char Drr[]={'A','B','C','R','Y'};
	Display(Drr,5);
	
	return 0;
	
	
}