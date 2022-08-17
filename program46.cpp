#include<iostream>
using namespace std;

class Digits
{
	public:
	int iValue;
	Digits(int iNo)
	{
		iValue=iNo;
	}
	
	void DigitsLogic()
	{
		int iDigit=0;
		while(iValue!=0)
		{
			iDigit=iValue%10;
			printf("%d\n",iDigit);
			iValue=iValue/10;
		}
		
	}
};

int main()
{
	int iNo;
	cout<<"Enter Number";
	cin>>iNo;
	Digits obj(iNo);
	obj.DigitsLogic();
	
	return 0;
}