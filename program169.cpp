#include<iostream>
using namespace std;

void Display(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		cout<<str[i]<<endl;
		i++;

	}
	
}

int main()
{
	char Arr[20];
    cout<<"Enter String"<<endl;
    cin>>Arr;	
	
	Display(Arr);   //Display(100);
	
	return 0;
}