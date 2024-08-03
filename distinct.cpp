#include <iostream>
using namespace std; 

int main()
{
    int arr[5],count; 
    for(int i=0; i<5; i++)
    {
        cin>>arr[i]; 
    }

    for(int i=0; i<4; i++)
    {
        for(int j=i; j<5; j++)
        {
            if(arr[i] == arr[j])
            {
                count++; 
            }
        }
    }

    int counter = 5 - count; 
    cout<<count; 



}