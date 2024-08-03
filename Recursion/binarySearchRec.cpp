#include <iostream>
#include <vector>
using namespace std ; 


int binarySearch(vector <int> v, int s , int e, int target){
    

    if(s>e){
        return -1; 
    }
    int mid = (s+e)/2;

    if(v[mid] == target) {
        return mid ;
    }

    if(v[mid] < target){
        
        return binarySearch(v, mid + 1, e, target); 
    }
    else {
        
        return binarySearch(v, s , mid - 1 , target); 
    }


}


int main (){
    vector<int> arr{12 , 42 ,19 ,10 ,1 , 67}; 
    int s =0 ; 
    int e = arr.size() ;  
    int target = 12; 
    
    int ans = binarySearch(arr,s,e, target); 
    cout<<ans; 
}