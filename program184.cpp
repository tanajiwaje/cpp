
#include<iostream>
using namespace std;

void strwrX(char *str)
{

	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
	      *str=*str+32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter string "<<endl;
	cin.getline(Arr,20);
	
	strwrX(Arr);
	
	cout<<"String contains :"<<Arr<<endl;
	
	return 0;
}