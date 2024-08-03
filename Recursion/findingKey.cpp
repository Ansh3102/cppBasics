#include <iostream>
#include <string>
#include <vector>
using namespace std ; 

bool findKey(string str , int n , int i , char key, vector<int>& res){
    if(i>=n){
        return false; 
    }

    if(str[i] == key){
        
        res.push_back(i); 
        //return true; 
    }

    return findKey(str, n , i+1 , key, res); 
}
int main (){
    vector<int> res; 
    string str = "anshulSharma"; 
    int n = str.length(); 
    int i=0 ; 
    char key = 'a'; 

   bool ans =  findKey(str , n , i, key, res); 
  // cout<<ans<<endl; 

   for(int i=0; i<res.size(); i++){
    cout<<res[i]<<" "; 
   }
}