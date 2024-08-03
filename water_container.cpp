#include<iostream>
#include<cmath>
#include<climits>
using namespace std; 

int main()
{
    int h[9], max = INT_MIN, temp=0, l; 
    for(int i=0; i<9; i++)
    {
        cin>>h[i]; 
    }
int s=0,e=8; 

while(s<=e)
{
    
        int w = abs(s - e);
        if(h[s] > h[e])
        {
            l = h[e];
            e--;  
        } 
        else{
            l = h[s]; 
            s++; 
        }
         temp  = l*w; 
        
    if(temp>max)
    {
        max = temp; 
    }
}

cout<<max; 
}

