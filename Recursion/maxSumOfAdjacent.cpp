#include <iostream>
#include <limits.h>
using namespace std ; 

void solve (int arr[] , int n ,int i, int sum, int& maxi){
    //Base case 
    
   
    if(i >= n ){
        maxi = max (sum , maxi); 
        return ; 
    }

    //include 
    solve(arr , n , i+2 , sum + arr[i], maxi ); 

    //Eclude 
    solve (arr , n , i+1 , sum, maxi ); 
    
    
}
int main(){
    int arr[] = {2,1,4,9}; 
    int n = 4; 
    int i =0; 
    int sum = 0; 
    int maxi = INT_MIN; 
    solve(arr , n, i, sum, maxi ); 
    cout<< maxi ; 


}