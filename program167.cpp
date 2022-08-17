#include<iostream>
using namespace std;

void Display(char *str)
{
	int i;
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
		cout<<str<<endl;
	}
	
}

int main()
{
	char Arr[]="Hello"; 
	
	Display(Arr);   //Display(100);
	
	return 0;
}