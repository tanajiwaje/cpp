//factorial 1+2+3+4

#include<iostream>
using namespace std;

class Number
{
  private:
  int iNo;  //characteristics 
  public:
  //behaviour
  void Accept() //setter method set the value
  {
	  cout<<"Enter value"<<endl;
	  cin>>this->iNo;
  }
  
  void Display()  //getter method get value
  {
	  cout<<"Value is :"<<this->iNo<<endl;
  }
  
  int Factorial()
  {
	int iFact=1;
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact*=iCnt;
	}
	return iFact;
	
   }
};
int main()
{
	Number nobj;
	Number nobj2;
	//cout<<nobj.iNo;
	nobj.Accept();
	nobj.Display();
	int iRet=0;
	
	iRet=nobj.Factorial();
	cout<<"factorial is :"<<iRet<<endl;


    
	nobj2.Accept();
	nobj2.Display();
	 iRet=0;
	
	iRet=nobj2.Factorial();
	cout<<"factorial is :"<<iRet<<endl;	
	return 0;
}