
#include<iostream>
using namespace std;

int Count(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U')||(*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter string "<<endl;
	cin.getline(Arr,20);
	
	iRet=Count(Arr);
	
	cout<<"String contains :"<<iRet<<" :times"<<endl;
	
	return 0;
}