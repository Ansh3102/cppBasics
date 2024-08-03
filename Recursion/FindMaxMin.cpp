#include <iostream>
using namespace std ;


int findMax (int arr[] , int n , int i, int& max){
   //Base case
    if(i>=n){
        return 1; 
    }

//Processing 
    if(arr[i] > max){
        max = arr[i]; 
    }
// Baaki recursion sambhal lega 
    findMax (arr , n , i+1 , max); 

}


int findMin (int arr[] , int n , int i, int& min){
    // Base case 
    if(i>=n){
        return 1; 
    }

    if(arr[i] < min){
        min = arr[i]; 
    }

// Baaki recursion sambhal lega 
    findMin(arr,n,i+1 ,min); 

}


int main (){
    int arr[] = {12 , 24 ,45 ,11 , 78 , 2}; 
    int n = 6; 
    int i =0; 
    int max = INT_MIN; 
    int min = INT_MAX;

    findMax(arr , n , i , max); 
    findMin (arr , n , i , min); 

    cout << "Max = " << max << " and " << "Min = "<<min; 
    
}