#include <iostream>
using namespace std; 


int printArr(int arr[], int n, int i){
    //base case 
    if(i>=n){
        return 1; 
    }

    cout<<arr[i]<<" "; 

    printArr(arr , n , i+1); 
}


int main (){
    int arr[] = {10 , 20 ,30 ,40 ,50}; 
    int n = 5; 
    int i =0; 

    printArr(arr , n, i);  
}