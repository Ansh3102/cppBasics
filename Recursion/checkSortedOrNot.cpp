#include <iostream>
using namespace std ; 

bool checkArr(int arr[] , int n , int i){
    if(i == n-1){
        return true; 
    }

    if(arr[i+1] < arr[i]){
        return false;
    }

    return checkArr(arr , n , i+1); 
}

int main (){
    int arr[] = {10 , 20 , 30 , 60 , 70}; 
    int n =5; 
    int i = 0;

    bool ans = checkArr(arr , n , i); 
    cout<<ans; 
}