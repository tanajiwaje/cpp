#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	
	
}

int main()
{
	char Arr[20]; //Bharleli wahi
	char Brr[20]; //Kori wahi
	int iRet=0;
	
	cout<<"Enter string "<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);
	
	cout<<"String after reverse :"<<Brr<<endl;
	
	return 0;
}