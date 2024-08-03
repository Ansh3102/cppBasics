#include<iostream>
#include<vector>
using namespace std; 
int search(int arr[],int num, int target){
    int s = 0; 
    int e  = num - 1 ; 
    int mid = s + (e -s)/2; 

    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid; 
        }
        if(arr[mid - 1] == target)
        {
            return mid-1 ; 
        }
        if(arr[mid + 1] == target)
        {
            return mid+1 ; 
        }
        if(arr[mid]> target)
        {
            e = mid - 2; 
        }
        else{
            s = mid + 2; 
        }
        mid = s + (e -s)/2;
    }
    return -1; 
}
int main (){
    int arr[7] =  {10,3,40,20,50,80,70};
    int target = 80;
    int num = 7;  
    
    int index = search(arr,num,target); 

    if(target == -1)
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at "<<index<<" Index"; 
    }

}