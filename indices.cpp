#include <iostream>
using namespace std; 


int main()
{
    
    int num[5], target,f_val, s_val,f=0;
    cin>>target;
    for(int i=0; i<5; i++)
    {
        cin>>num[i]; 
    }
    
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(target == num[i] + num[j])
            {
                f_val = i; 
                s_val = j;
                f=1;
                break;
            }
        }
            if(f==1)
            {
                break;
            }
    }
        cout<<f_val<<" "<<s_val;
       
    
}