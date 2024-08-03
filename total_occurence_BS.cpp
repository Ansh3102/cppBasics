#include <iostream>
#include <vector>
using namespace std; 

int total_Occur(vector<int> arr, int target)
{
     int s = 0; 
    int e = arr.size() - 1  ; 
    int mid = s + (e - s)/2; 
    int count = 0;
    while(s<=e)
    {
    if(arr[mid] == target)
    {
        count++; 
        s = mid + 1; 
    } 
    mid = s + (e -s)/2; 
    }
    s=0;
    e = arr.size() - 1; 
    mid = s + (e - s)/2; 
    while(s<=e)
    {
        if(arr[mid - 1] == target)
        {
            count++; 
            e = mid - 1; 
        }
        mid = s + (e - s)/2;
    }
    
}
        


int main()
{
    vector<int>arr{ 1,2,3,4,4,4,4,4,5 }; 
    int target = 4; 

    int totalOccur = total_Occur(arr,target); 

    if(totalOccur == -1)
    {
        cout<<"Element not found"; 
    }
    else{
        cout<<"Element total Occurence is "<<totalOccur; 
    }
    return 0; 

}