#include <iostream>
#include<vector>
using namespace std;
void subarr_util(vector<int>& arr, int n , int s , int e ){
  if(e >= n){
    return; 
  }
 
    for(int i = s ; i<=e ; i++){
    cout<<arr[i]; 
    }
  cout<<endl;
  subarr_util(arr, n , s , e+1); 

 
}

void subarr(vector<int>& arr , int n){
  for(int s=0; s<n ; s++ ){
    int e = s; 
    subarr_util(arr ,n , s , e);
  }
}


int main() {
 vector<int> arr {1 ,  2, 3}; 
  int  n=3; 

  subarr(arr , n); 
}