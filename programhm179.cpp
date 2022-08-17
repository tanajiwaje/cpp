//count string contain small letter
#include<iostream>
using namespace std;

int Count(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        str++;
        }
     return iCnt;
}

int main()
{   
    int iCnt=0;
    char Arr[20];
    int iRet=0;
    cout<<"Enter a string "<<endl;
    cin.getline(Arr,20);

    iRet=Count(Arr);
    cout<<"small letter of an string is :"<<iRet;
     return 0;
}