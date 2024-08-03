#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter 1st name: "<<endl; 
    getline(cin,str1);
    cout<<"Enter Last name"<<endl;
    getline(cin,str2);

    cout<<"welcome! "<<str1<< " "<<str2<<endl; 
    return 0;
}