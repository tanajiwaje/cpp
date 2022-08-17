#include<iostream>
using namespace std;

void strcntX(char *src,char *dest)
{
	while(*dest!='\0')
	{
		dest++;
	}
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

   cout<<"Enter 1st string "<<endl;
	cin.getline(Arr,20);
	cout<<"Enter 2 nd string "<<endl;
	cin.getline(Brr,20);
	
		
	strcntX(Arr,Brr);
	
	cout<<"String after concate :"<<Brr<<endl;
	
	return 0;
}