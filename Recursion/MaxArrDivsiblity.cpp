#include <iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
void maxArr(vector<int>arr , int n ,int i, vector<int>res , int sum , int& maxi , int result){
  //base case
  if(i>= arr.size()){
      for(auto i : res){
        sum += i; 
      }

      if(sum % n == 0){
        if(maxi < sum){
            maxi = sum; 
        } 
      }
      return; 
  }

  //exclude 
  maxArr(arr , n , i + 1, res, sum , maxi , result); 

  //include 
  res.push_back(arr[i]); 
  maxArr(arr , n , i + 1, res, sum , maxi , result); 
}
int main() {
 vector<int>arr{10 , 40 , 40, 40, 40}; 
 int n = 3; 
 vector<int> res; 
 int result; 
 int maxi = INT_MIN; 
int sum = 0, i=0; 
 maxArr(arr , n , i, res, sum , maxi , result ); 

 cout<<maxi ; 
}