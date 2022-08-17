//count of all capital lettler of an string \

#include<iostream>
using namespace std;

int Count(char *str)
{
    int iCnt=0;
    while (*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
    
}

int main()
{

    char Arr[20];
    int iRet=0;
    cout<<"Enter string ";
    cin.getline(Arr,20);

    iRet=Count(Arr);
    cout<<"Letter of an string is :"<<iRet;


    return 0;
}