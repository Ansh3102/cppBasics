#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std; 

int main()
{
    string str1,str2;
    cin>>str1>>str2; 
   
  

   int num1 = stoi(str1); 
   int num2 = stoi(str2); 
   int num3 = num1 + num2; 

string str = to_string(num3); 
cout<<str; 

}