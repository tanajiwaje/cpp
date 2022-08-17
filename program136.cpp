//factorial 1+2+3+4

#include<iostream>
using namespace std;


int Factorial(int iNo)
{
	int iFact=1;
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact*=iCnt;
	}
	return iFact;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	cout<<"Enter Number \n";
    cin>>iValue;
	
	iRet=Factorial(iValue);
	cout<<"factorial is "<<iRet<<endl;
	
	return 0;
}