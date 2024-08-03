#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    string s; 
    getline(cin,s);
    string res = "";
    
    int n = s.length();
    string str[n];      
    int k=0,j[n] ,i=0; 
/*

    while(i>=0)
    {
        if(s[i] != ' ')
        {
            
        res+= s[i];  
        i--;

        }    
        else{
            res+=' '; 
            i--; 
        }

    }
    cout<<res;
    
for(int j=res.length()-1; j>=0; j-- )
{
    cout<<res; 
}

*/
    
for(int j=s.length()-1; j>=0; j-- )
{
    
        str[i] = s.substr(s.find(' ')); 
        i++; 
    
}

cout<<str[0]; 
}