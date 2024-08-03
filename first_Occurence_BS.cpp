#include <iostream>
using namespace std; 

int binaryOccur(int arr[], int size, int target)
{
    int s = 0; 
    int e = size -1 ; 
    int mid = s + (e - s)/2; 
    int f_occ = -1; 

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            f_occ = mid ;  
            e = mid - 1; 
        }
        if(arr[mid] < target)
        {
            s = mid + 1; 
        }
        else if(arr[mid] > target)
        {
            e = mid - 1; 
        }
        mid = s + (e - s) / 2; 
    }
    return f_occ; 
}

int main ()
{
    int arr[] = {1,2,4,4,4,4,5,5,7}; 
    int size = 9; 
    int target = 5; 

    int f_occ = binaryOccur( arr,size, target); 

    if(f_occ == -1)
    {
        cout<<"Element not found"; 
    }
    else{
        cout<<"ELement first occur on "<<f_occ<<" index"<<endl ; 
    }
}