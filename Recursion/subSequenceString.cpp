#include <iostream>
#include <string>
#include <vector>
using namespace std ; 


void subSeq(string str , int i , string output,vector<string>& res){
    //Base case 
    if(i >= str.length()){
        res.push_back(output); 
    }

    //exclude 
    subSeq(str ,  i+1 , output,res); 
    //include 
    subSeq(str , i+1 , output + str[i],res); 



}
int main (){
    string str = "abc"; 
    int i = 0; 
    string output = ""; 
    int n = str.length(); 
    vector<string> res; 

    subSeq(str , i ,output, res); 
    
    for (auto v: res){
        cout<<v<<" "<<endl; 
    }
    return 0 ; 
}