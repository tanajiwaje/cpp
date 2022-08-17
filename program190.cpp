#include<iostream>
using namespace std;

bool strcmpX(char *src,char *dest)
{
    while((*src!='\0') && (*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}		
	
	if(*src=='\0' && *dest=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20]; //Bharleli wahi
	char Brr[20]; //Kori wahi
	int iRet=0;
	bool bRet;
	cout<<"Enter string "<<endl;

   cout<<"Enter 1st string "<<endl;
	cin.getline(Arr,20);
	cout<<"Enter 2 nd string "<<endl;
	cin.getline(Brr,20);
		
	bRet=strcmpX(Arr,Brr);
	if(bRet==true)
	{
		cout<<"String are equal"<<endl;
	}
	else
	{
		cout<<"String are not equal";
	}
	return 0;
}