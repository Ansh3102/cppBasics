#include<iostream>
#include<vector>
#include<string>
using namespace std; 
int main()
{

string str,s="";
getline(cin,str); 

for(int i=0; i<str.length(); i++)
{
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'  )
    {
        if(str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] - 'A' + 'a'; 
            s+=str[i]; 
        }
        else{
            s+=str[i]; 
        }
        
    }
}
int  st=0, e=s.length()-1;
bool f=0;  

while(st<=e)
{
    if(s[st] == s[e] )
    {
        st++; 
        e--; 
        f=1; 
    }
    else{
        break;

    }
}

cout<<f; 

}


