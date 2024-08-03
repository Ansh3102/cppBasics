#include <iostream>
using namespace std;

int binarySearch(int arr[], int size , int target)
{
    int start = 0; 
    int end = size - 1; 
     int mid = (start + end)/2; 

     while(start <= end)
     {
        if(target == arr[mid])
        {
            return mid; 
        }
        else if(target < arr[mid])
        {
            end = mid - 1; 
        }
        else if(target > arr[mid])
        {
            start = mid + 1; 
        }
        mid = (start + end) / 2; 
     }
     return -1; 
}

int main (){
    int arr[] = {2,4,6,7,3,9,8}; 
    int size = 7; 
    int target = 9; 

    int targetIndex = binarySearch(arr,size,target); 

    if(targetIndex == -1)
    {
        cout<<"Target Not Found"; 
    }
    else{
        cout<<"Target found on "<<targetIndex<<" Index"; 
    }
}

