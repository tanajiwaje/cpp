//count white space of string 


#include<iostream>
using namespace std;

int Count(char *str)
{
   int iCnt=0;
   while(*str!='\0')
   {
       if(*str==' ')
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
    cout<<"enter string ";
    cin.getline(Arr,20);
    iRet=Count(Arr);
    cout<<"Count of white space :"<<iRet;
    return 0;
}


